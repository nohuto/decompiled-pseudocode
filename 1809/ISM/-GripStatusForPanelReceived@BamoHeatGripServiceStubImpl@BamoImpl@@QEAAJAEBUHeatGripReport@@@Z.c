/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180039624
 * Callers:
 *     ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800391C0 (-BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800393B0 (-GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServiceStubImpl *this,
        const struct HeatGripReport *a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL);
  if ( *(_QWORD *)(v3 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v5 = *(_OWORD *)a2;
      v6 = *((_QWORD *)a2 + 2);
      v7 = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v9[0] = *(unsigned int *)(v2 + 36);
      v9[1] = v7;
      v8 = *(_QWORD *)(v3 + 48);
      v10 = v5;
      v11 = v6;
      return CoreUICallSend(v8, v9, 2LL, 20LL, 0, &unk_18014A9EA, (unsigned int)&v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        (const char *)0x87B20805LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFAC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAFA5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
