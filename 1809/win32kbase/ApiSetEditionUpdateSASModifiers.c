/*
 * XREFs of ApiSetEditionUpdateSASModifiers @ 0x1C0035AB8
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionUpdateSASModifiers(unsigned int a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x128u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionUpdateSASModifiersSupported();
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = a2;
    result = EditionUpdateSASModifiers(a1, v9, a3, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x129u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
