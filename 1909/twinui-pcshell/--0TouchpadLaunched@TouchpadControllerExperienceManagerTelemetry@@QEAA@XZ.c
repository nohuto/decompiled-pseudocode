/*
 * XREFs of ??0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1801C5FB8
 * Callers:
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x1801C5DDC (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801C9120 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801C5D38 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$0_ea_1801C5D38.c)
 */

TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *__fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TouchpadLaunched(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  return this;
}
