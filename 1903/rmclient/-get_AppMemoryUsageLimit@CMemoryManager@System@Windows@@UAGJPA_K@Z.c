/*
 * XREFs of ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJPA_K@Z @ 0x10007BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 */

int __thiscall Windows::System::CMemoryManager::get_AppMemoryUsageLimit(
        Windows::System::CMemoryManager *ecx0,
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a3)
{
  int result; // eax
  unsigned __int64 v4; // [esp+4h] [ebp-8h] BYREF

  if ( !a3 )
    return -2147024809;
  result = Windows::System::CMemoryManager::GetAppMemoryInformation(ecx0, &v4, 0, 0);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = v4;
    return 0;
  }
  return result;
}
