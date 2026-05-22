/*
 * XREFs of ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18007A350
 * Callers:
 *     ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x18007A2F0 (-BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUHeatGripReport@@@Z @ 0x18007A3F0 (-CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStub.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServicePrincipalImpl::BroadcastGripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServicePrincipalImpl *this,
        const struct HeatGripReport *a2)
{
  __int64 i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 40LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 32) )
      {
        v5 = BamoImpl::BamoHeatGripServicePrincipalImpl::CallGripStatusForPanelReceivedOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v6 = v5;
        if ( v5 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x882,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
