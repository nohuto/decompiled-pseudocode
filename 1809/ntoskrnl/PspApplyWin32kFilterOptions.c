/*
 * XREFs of PspApplyWin32kFilterOptions @ 0x1406C6FDC
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PspApplyWin32kFilterOptions(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // r8d

  result = *(_QWORD *)(a2 + 464);
  if ( result )
  {
    v3 = *(_DWORD *)result;
    if ( (*(_DWORD *)result & 1) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x4000u);
      result = *(_QWORD *)(a2 + 464);
      v3 = *(_DWORD *)result;
    }
    if ( (v3 & 2) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x8000u);
      result = *(_QWORD *)(a2 + 464);
    }
    result = *(unsigned int *)(result + 4);
    *(_DWORD *)(a1 + 1976) = result;
  }
  return result;
}
