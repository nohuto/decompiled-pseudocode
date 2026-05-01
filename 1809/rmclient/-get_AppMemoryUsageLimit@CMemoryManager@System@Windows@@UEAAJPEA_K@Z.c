/*
 * XREFs of ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180001510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180001558 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::get_AppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = Windows::System::CMemoryManager::GetAppMemoryInformation(this, &v4, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}
