/*
 * XREFs of ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180015340
 * Callers:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18001526C (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIAppli.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800153D8 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SizeConversionViewInfo::RuntimeClassInitialize(
        SizeConversionViewInfo *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        struct IApplicationViewTitlebarConfiguration *a5)
{
  int ScaleFactorForMonitor; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 16, a2);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)this + 32, a5);
  if ( a4 )
    *((_DWORD *)this + 6) |= 1u;
  if ( a3 )
    *((_DWORD *)this + 6) |= 2u;
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 2) + 40LL))(
                            *((_QWORD *)this + 2),
                            &v13);
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 60LL;
  }
  else
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v13, &v14);
    if ( ScaleFactorForMonitor >= 0 )
    {
      *((_DWORD *)this + 10) = v14;
      return 0LL;
    }
    v10 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)ScaleFactorForMonitor,
    v11);
  return (unsigned int)ScaleFactorForMonitor;
}
