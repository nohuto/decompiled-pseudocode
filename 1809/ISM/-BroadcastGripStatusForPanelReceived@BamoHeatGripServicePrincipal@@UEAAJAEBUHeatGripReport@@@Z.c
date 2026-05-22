/*
 * XREFs of ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800391C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180039624 (-GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z.c)
 */

__int64 __fastcall BamoHeatGripServicePrincipal::BroadcastGripStatusForPanelReceived(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct HeatGripReport *a2)
{
  unsigned int v4; // edi
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[3]);
  v4 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 3) + 40LL) )
  {
    for ( i = this[5]; i; i = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 6) )
    {
      if ( *((_BYTE *)i + 32) )
      {
        v7 = BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(i, a2);
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2018375675 )
        {
          v8 = wil::verify_hresult<long>(v7);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xAF6F,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
            (const char *)v8);
          JUMPOUT(0x18003928ELL);
        }
      }
    }
  }
  else
  {
    v4 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAEC8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)0x87B20814LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v10);
  return v4;
}
