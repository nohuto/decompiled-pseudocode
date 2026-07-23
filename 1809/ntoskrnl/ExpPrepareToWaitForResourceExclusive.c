/*
 * XREFs of ExpPrepareToWaitForResourceExclusive @ 0x140120E84
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x1401653D0 (ExAcquireFastResourceExclusive.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ExpPrepareToWaitForResourceExclusive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v7; // rcx

  ++*(_DWORD *)(a1 + 76);
  memset(a3, 0, 0x30uLL);
  a3[2] = a2;
  *((_DWORD *)a3 + 7) = 0;
  *((_WORD *)a3 + 12) = 1;
  *((_BYTE *)a3 + 26) = 6;
  a3[5] = a3 + 4;
  a3[4] = a3 + 4;
  result = *(_QWORD *)(a1 + 40);
  if ( result )
  {
    v7 = *(_QWORD **)(result + 8);
    if ( *v7 != result )
      __fastfail(3u);
    *a3 = result;
    a3[1] = v7;
    *v7 = a3;
    *(_QWORD *)(result + 8) = a3;
  }
  else
  {
    a3[1] = a3;
    *a3 = a3;
    *(_QWORD *)(a1 + 40) = a3;
  }
  return result;
}
