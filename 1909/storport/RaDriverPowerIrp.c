/*
 * XREFs of RaDriverPowerIrp @ 0x1C0016DF0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitPowerIrp @ 0x1C0010428 (RaUnitPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016E98 (RaidAdapterPowerIrp.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaDriverPowerIrp(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_0ece2f36f1a933110a118c5b83c83ab6_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 )
  {
    if ( *v4 != 1 )
    {
      v6 = -1073741823;
      goto LABEL_6;
    }
    v5 = RaUnitPowerIrp(*(PVOID *)(a1 + 64), (PIRP)a2, (__int64)v4);
  }
  else
  {
    v5 = RaidAdapterPowerIrp(*(_QWORD *)(a1 + 64), a2);
  }
  v6 = v5;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_0ece2f36f1a933110a118c5b83c83ab6_Traceguids, a1, a2, v6);
  }
  return v6;
}
