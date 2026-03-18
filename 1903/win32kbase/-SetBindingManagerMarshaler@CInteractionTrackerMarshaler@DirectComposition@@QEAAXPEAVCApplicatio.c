/*
 * XREFs of ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C01ACA88
 * Callers:
 *     ?RemoveBindingManagerReferenceFromTrackerIfNecessary@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@II@Z @ 0x1C01ADB38 (-RemoveBindingManagerReferenceFromTrackerIfNecessary@CInteractionTrackerBindingManagerMarshaler@.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01ADD40 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CInteractionTrackerBindingManagerMarshaler *a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 50);
  if ( v5 != a3 )
  {
    if ( a3 )
    {
      DirectComposition::CResourceMarshaler::AddRef(a3);
      v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 50);
    }
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 50) = a3;
  }
}
