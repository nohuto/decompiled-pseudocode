/*
 * XREFs of RtlEnumRvaListFirst @ 0x1406AC3E4
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     RtlGetRvaListIteratorState @ 0x1406AC430 (RtlGetRvaListIteratorState.c)
 */

__int64 __fastcall RtlEnumRvaListFirst(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  a2[1] = 0;
  result = **(unsigned int **)(a1 + 16);
  *a2 = result;
  a2[2] = 4;
  if ( a3 )
  {
    *a3 = RtlGetRvaListIteratorState();
    return *a2;
  }
  return result;
}
