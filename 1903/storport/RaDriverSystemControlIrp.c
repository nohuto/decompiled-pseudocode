/*
 * XREFs of RaDriverSystemControlIrp @ 0x1C006E4A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     RaWmiDispatchIrp @ 0x1C006E524 (RaWmiDispatchIrp.c)
 */

__int64 __fastcall RaDriverSystemControlIrp(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x18u,
      (__int64)&WPP_0ece2f36f1a933110a118c5b83c83ab6_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = RaWmiDispatchIrp(a1, a2);
  v5 = v4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v7 = v4;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x19u,
      (__int64)&WPP_0ece2f36f1a933110a118c5b83c83ab6_Traceguids,
      a1,
      a2,
      v7);
  }
  return v5;
}
