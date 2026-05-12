/*
 * XREFs of StorpGetOriginalMdl @ 0x1C001B5E0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetOriginalMdl(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v4 = *(_QWORD *)(a2 + 96);
    else
      v4 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      *a4 = *(_QWORD *)(v4 + 136);
    else
      *a4 = *(_QWORD *)(v4 + 104);
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
    }
    return 3238002694LL;
  }
}
