/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x1408214FC
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140821AF8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140579C58 (IopLiveDumpGetCapturePagesNoLock.c)
 */

__int64 __fastcall IopLiveDumpGetNtMergePages(_RTL_BITMAP_EX *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax

  result = IopLiveDumpGetCapturePagesNoLock(a1 + 23, (__int64)&a1[30].Buffer, a2, (__int64)a4, a4, a5);
  if ( *a4 )
  {
    result = (__int64)a1[34].Buffer;
    *a3 = *(_QWORD *)(result + 8LL * *a5);
  }
  return result;
}
