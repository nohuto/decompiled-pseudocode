/*
 * XREFs of ??0HandleRegistrations@GraphStreamingResourceManager@@QEAA@XZ @ 0x140003C84
 * Callers:
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003BA4 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x14002C500 (--0CpuManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x140003CBC (--0-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElementTra.c)
 */

__int64 __fastcall GraphStreamingResourceManager::HandleRegistrations::HandleRegistrations(
        GraphStreamingResourceManager::HandleRegistrations *this,
        int a2,
        int a3,
        int a4)
{
  __int64 v4; // rcx

  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (_DWORD)this,
    a2,
    a3,
    a4,
    LODWORD(FLOAT_2_25));
  return v4;
}
