/*
 * XREFs of ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJPA_K@Z @ 0x100111B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 */

int __thiscall Windows::System::CMemoryManager::get_ExpectedAppMemoryUsageLimit(
        Windows::System::CMemoryManager *ecx0,
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a3)
{
  int result; // eax
  unsigned __int64 v4; // [esp+0h] [ebp-8h] BYREF

  result = Windows::System::CMemoryManager::GetAppMemoryInformation(ecx0, 0, &v4, 0);
  if ( result >= 0 )
  {
    *a3 = v4;
    return 0;
  }
  return result;
}
