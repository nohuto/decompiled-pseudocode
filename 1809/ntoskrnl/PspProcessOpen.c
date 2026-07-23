/*
 * XREFs of PspProcessOpen @ 0x14060A150
 * Callers:
 *     <none>
 * Callees:
 *     PspIsParentProcess @ 0x140091CE8 (PspIsParentProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14060A21C (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  int v11; // eax

  IsParentProcess = PspIsParentProcess(a3, a4);
  v10 = v9 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v10 = v9;
  if ( (v10 & *a5) != 0 && (unsigned __int8)PsTestProtectedProcessIncompatibility(a2, a3, a4)
    || *(_QWORD *)(a4 + 1808) && !*(_QWORD *)(a3 + 1808) && a2 && (~DWORD2(xmmword_14040F360) & *a5) != 0 )
  {
    return 3221225506LL;
  }
  v11 = *a5;
  if ( (*(_BYTE *)a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v11 |= 0x1000u;
    *a5 = v11;
  }
  if ( (v11 & 0x200) != 0 )
    *a5 = v11 | 0x2000;
  return 0LL;
}
