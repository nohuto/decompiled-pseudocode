/*
 * XREFs of ?_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@I@Z0@Z @ 0x180083838
 * Callers:
 *     ?UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180081F60 (-UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateCaptureControllerSourceOffset@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180081FB0 (-UpdateCaptureControllerSourceOffset@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateCaptureControllerTransform@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180081FD0 (-UpdateCaptureControllerTransform@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerProperty(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3)
{
  unsigned int v6; // ebx
  char v7; // di
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  RestartKey = 0LL;
  v7 = 0;
  v8 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 440), &RestartKey);
  if ( v8 )
  {
    do
    {
      if ( v8[2] == a3 )
      {
        v9 = a2(a1, a3, *((unsigned int *)v8 + 2));
        v10 = v9;
        if ( v9 < 0 )
        {
          v12 = (unsigned int)v9;
          v11 = 769LL;
          goto LABEL_8;
        }
        v7 = 1;
      }
      v8 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 440), &RestartKey);
    }
    while ( v8 );
    if ( v7 )
      goto LABEL_9;
  }
  v10 = -2147024809;
  v11 = 774LL;
  v12 = 2147942487LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)v12);
  v6 = v10;
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v6;
}
