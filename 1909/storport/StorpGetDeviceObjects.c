/*
 * XREFs of StorpGetDeviceObjects @ 0x1C00187C4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDeviceObjects(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rdx

  result = 0LL;
  if ( !a1 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v8 = 45LL;
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v8 = 46LL;
    goto LABEL_10;
  }
  if ( !a3 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v8 = 47LL;
    goto LABEL_10;
  }
  if ( a4 )
  {
    v6 = **(_QWORD ***)(a1 - 16);
    *a2 = v6[1];
    *a3 = v6[4];
    *a4 = v6[3];
    return result;
  }
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    v8 = 48LL;
LABEL_10:
    WPP_SF_(v7->AttachedDevice, v8, &WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids);
  }
  return 3238002694LL;
}
