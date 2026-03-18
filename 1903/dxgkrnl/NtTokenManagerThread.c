/*
 * XREFs of NtTokenManagerThread @ 0x1C000EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000F230 (DxgkGetSessionTokenManager.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  char *v2; // r15
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // ebx
  unsigned int v9; // r14d
  size_t v10; // r8
  SIZE_T v12; // rax
  __int64 v13; // [rsp+30h] [rbp-E8h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-E0h]
  __int64 v15; // [rsp+48h] [rbp-D0h]
  unsigned int v16; // [rsp+50h] [rbp-C8h]
  _BYTE *v17; // [rsp+58h] [rbp-C0h]
  __int128 v18; // [rsp+60h] [rbp-B8h]
  __int64 v19; // [rsp+70h] [rbp-A8h]
  _BYTE P[128]; // [rsp+80h] [rbp-98h] BYREF

  v2 = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v15 = 0LL;
  memset(P, 0, 0x78uLL);
  v3 = P;
  v17 = P;
  v4 = 0LL;
  v13 = 0LL;
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  SessionTokenManager = 0;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38000) + 296LL))() )
    SessionTokenManager = -1073741790;
  if ( SessionTokenManager >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v18 = *(_OWORD *)a1;
    v19 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)Src = v18;
    v15 = v19;
    v2 = (char *)*((_QWORD *)&v18 + 1);
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v15 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v9 = EtwpDisableStackWalkApc();
  v16 = v9;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v13);
    v4 = v13;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v15 > 5 )
      {
        v12 = 24LL * (unsigned int)v15;
        if ( !is_mul_ok((unsigned int)v15, 0x18uLL) )
          v12 = -1LL;
        v3 = operator new[](v12, 0x62634D54u, PagedPool);
        v17 = v3;
      }
      if ( v3 )
      {
        v10 = 24LL * (unsigned int)v15;
        if ( &v2[v10] < v2 || (unsigned __int64)&v2[v10] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v3, v2, v10);
      }
      else
      {
        SessionTokenManager = -1073741801;
      }
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *, _QWORD))(*(_QWORD *)v4 + 64LL))(
                                v4,
                                Src[0],
                                v3,
                                (unsigned int)v15);
    }
  }
  if ( v3 && v3 != P )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  EtwpReenableStackWalkApc(v9);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
