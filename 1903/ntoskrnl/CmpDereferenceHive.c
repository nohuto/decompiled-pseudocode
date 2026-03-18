/*
 * XREFs of CmpDereferenceHive @ 0x1406629A8
 * Callers:
 *     CmpDoFlushAll @ 0x140168D30 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1068, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
