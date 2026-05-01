/*
 * XREFs of ?ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18034ADC4
 * Callers:
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x18034AD28 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1803631E4 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShowLauncherOnMonitor(IUnknown *a1, unsigned int a2, int a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+60h] [rbp+30h] BYREF
  int v16; // [rsp+68h] [rbp+38h] BYREF

  v15 = a3;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         a1,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &ppvOut);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 83LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\common.h",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 87LL;
    goto LABEL_20;
  }
  if ( !v16 )
    goto LABEL_15;
  v13 = 0LL;
  v8 = ppvOut;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v9 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &v13);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v13 + 96LL))(v13, v13, &v15);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 92LL;
      goto LABEL_13;
    }
    if ( !v15 )
    {
      v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 96LL;
        goto LABEL_13;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
LABEL_15:
    if ( !v15 )
    {
      v5 = (*(__int64 (__fastcall **)(void *, IUnknown *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, a1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 103LL;
        goto LABEL_20;
      }
      v5 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a2, 4LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 104LL;
        goto LABEL_20;
      }
    }
    v6 = 0;
    goto LABEL_22;
  }
  v10 = 91LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\common.h",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v6;
}
