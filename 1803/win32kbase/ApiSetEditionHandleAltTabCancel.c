/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C005658C
 * Callers:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTabCancel(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  unsigned int v11; // edi
  int v13; // [rsp+20h] [rbp-38h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x116u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v11 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 )
  {
    LOBYTE(v13) = a5;
    v11 = EditionHandleAltTabCancel(a1, a2, a3, a4, v13, a6, a7);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x117u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v11;
}
