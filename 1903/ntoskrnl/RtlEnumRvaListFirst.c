/*
 * XREFs of RtlEnumRvaListFirst @ 0x14066FB98
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405EC930 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     RtlGetRvaListIteratorState @ 0x14066FBE0 (RtlGetRvaListIteratorState.c)
 */

__int64 __fastcall RtlEnumRvaListFirst(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
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
