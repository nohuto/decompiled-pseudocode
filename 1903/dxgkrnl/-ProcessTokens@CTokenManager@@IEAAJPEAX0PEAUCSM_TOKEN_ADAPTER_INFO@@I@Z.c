/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000A8E0
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C001A370 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AB10 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0012870 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C001ADEC (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001DA20 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  HANDLE v5; // rsi
  HANDLE *v9; // r15
  ULONG v10; // r12d
  NTSTATUS inited; // ebx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rbx
  int v15; // edi
  CTokenManager *v16; // rax
  SIZE_T v18; // rax
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-80h] BYREF
  HANDLE Object[7]; // [rsp+40h] [rbp-78h] BYREF

  v5 = Handle;
  memset(Object, 0, sizeof(Object));
  if ( a5 > 5 )
  {
    v18 = 8LL * (a5 + 2);
    if ( !is_mul_ok(a5 + 2, 8uLL) )
      v18 = -1LL;
    v9 = (HANDLE *)operator new(v18, 0x62634D54u, 1, PagedPool);
    if ( !v9 )
      return 3221225495LL;
  }
  else
  {
    v9 = Object;
  }
  *v9 = v5;
  v10 = 2;
  v9[1] = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 3, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CTokenManager::SetTokenThreadProcess(this);
    inited = CTokenManager::InitAdapterCollection(this, a4, v9 + 2, a5);
    if ( inited >= 0 )
    {
      while ( 1 )
      {
        v10 += a5;
        inited = ZwWaitForMultipleObjects(v10, v9, WaitAny, 1u, 0LL);
        if ( inited >= 0 )
          break;
LABEL_35:
        if ( inited == -1073741801 || inited == -1073741789 )
        {
          Timeout.QuadPart = -160000LL;
          inited = ZwWaitForSingleObject(v5, 0, &Timeout);
          if ( inited == 258 )
            continue;
        }
        goto LABEL_26;
      }
      while ( inited && inited != 257 && inited != 192 )
      {
        if ( inited == 1 )
        {
          CTokenManager::ProcessGdiSysmemTokens(this);
        }
        else
        {
          v12 = *((_DWORD *)this + 20);
          if ( v12 && inited <= (unsigned int)(v12 + 1) )
          {
            v13 = inited - 2;
            v14 = 0LL;
            v15 = -1073741275;
            ExAcquirePushLockSharedEx((char *)this + 144, 0LL);
            *((_BYTE *)this + 152) = 0;
            if ( v13 < *((_DWORD *)this + 27) )
            {
              v16 = (CTokenManager *)*((_QWORD *)this + 16);
              if ( v16 != (CTokenManager *)((char *)this + 128) )
              {
                while ( 1 )
                {
                  v14 = v16 ? (__int64)v16 - 8 : 0LL;
                  if ( !v13 )
                    break;
                  v16 = *(CTokenManager **)v16;
                  --v13;
                  if ( v16 == (CTokenManager *)((char *)this + 128) )
                    goto LABEL_18;
                }
                v15 = 0;
              }
            }
LABEL_18:
            ExReleasePushLockSharedEx((char *)this + 144, 0LL);
            if ( v15 >= 0 )
              CTokenManager::ProcessDxgkAdapterTokens(this, *(_DWORD *)(v14 + 32));
          }
        }
        inited = ZwWaitForMultipleObjects(v10, v9, WaitAny, 1u, 0LL);
        if ( inited < 0 )
        {
          v5 = Handle;
          goto LABEL_35;
        }
      }
      inited = 0;
    }
LABEL_26:
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( v9 != Object )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inited;
}
