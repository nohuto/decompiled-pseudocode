/*
 * XREFs of ApiSetEditionUpdateAsyncKeyState @ 0x1C0068EAC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

void __fastcall ApiSetEditionUpdateAsyncKeyState(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v6; // [rsp+68h] [rbp+20h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xA8u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionUpdateAsyncKeyStateSupported() >= 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
    EditionUpdateAsyncKeyState(a1, a2, a3);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xA9u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
}
