/*
 * XREFs of NtTokenManagerThread @ 0x1C0006B00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  char *v2; // r15
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // ebx
  __int64 v7; // xmm0_8
  unsigned int v8; // r14d
  size_t v9; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-C0h]
  __int64 v14; // [rsp+48h] [rbp-B0h]
  unsigned int v15; // [rsp+50h] [rbp-A8h]
  _BYTE *v16; // [rsp+58h] [rbp-A0h]
  _BYTE P[128]; // [rsp+60h] [rbp-98h] BYREF

  v2 = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v14 = 0LL;
  memset(P, 0, 0x78uLL);
  v3 = P;
  v16 = P;
  v4 = 0LL;
  v12 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionTokenManager = 0;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))() )
    SessionTokenManager = -1073741790;
  if ( SessionTokenManager >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v7 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)Src = *(_OWORD *)a1;
    v14 = v7;
    v2 = (char *)Src[1];
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v14 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v8 = EtwpDisableStackWalkApc();
  v15 = v8;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v12);
    v4 = v12;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v14 > 5 )
      {
        v11 = 24LL * (unsigned int)v14;
        if ( !is_mul_ok((unsigned int)v14, 0x18uLL) )
          v11 = -1LL;
        v3 = operator new[](v11, 0x62634D54u, PagedPool);
        v16 = v3;
      }
      if ( v3 )
      {
        v9 = 24LL * (unsigned int)v14;
        if ( &v2[v9] < v2 || (unsigned __int64)&v2[v9] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v3, v2, v9);
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
                                (unsigned int)v14);
    }
  }
  if ( v3 && v3 != P )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  EtwpReenableStackWalkApc(v8);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
