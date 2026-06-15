/*
 * XREFs of ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000F4FC
 * Callers:
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14000F480 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14000F540 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14003DF10 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14003E560 (-GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProt.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x14003E890 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x14003ECF0 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

struct CStreamInstance *__fastcall CSubmixImpl::FindStream(CSubmixImpl *this, __int64 a2)
{
  struct CStreamInstance *result; // rax
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 9);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = (struct CStreamInstance *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                          (__int64)this,
                                          &v4);
    if ( *((_QWORD *)result + 1) == a2 )
      break;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
