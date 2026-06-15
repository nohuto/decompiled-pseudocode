/*
 * XREFs of ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400122F4
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJ_K@Z @ 0x14005435C (-RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJ_K@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005D158 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140043D98 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

signed int __fastcall AERTLockMemory(void *lpAddress, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = IncreaseProcessWorkingSet(a2);
  if ( result >= 0 )
  {
    if ( VirtualLock(lpAddress, a2) )
      return 0;
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
