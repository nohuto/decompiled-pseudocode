/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x140859A68
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A094 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1405A8AD8 (IopLiveDumpGetCapturePagesNoLock.c)
 */

__int64 __fastcall IopLiveDumpGetNtMergePages(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax

  result = IopLiveDumpGetCapturePagesNoLock((unsigned __int64 *)(a1 + 368), a1 + 488, a2, (__int64)a4, a4, a5);
  if ( *a4 )
  {
    result = *(_QWORD *)(a1 + 552);
    *a3 = *(_QWORD *)(result + 8LL * *a5);
  }
  return result;
}
