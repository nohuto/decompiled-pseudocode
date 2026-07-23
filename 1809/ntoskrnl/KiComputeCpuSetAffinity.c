/*
 * XREFs of KiComputeCpuSetAffinity @ 0x14008A5E8
 * Callers:
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1)
{
  __int64 v1; // r11
  __int64 v3; // rdi
  _QWORD *v4; // r10
  _QWORD *v5; // rbx
  int v6; // ebp
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // edi
  unsigned __int64 v15; // r8

  v1 = *(_QWORD *)(a1 + 544);
  v3 = *(unsigned __int16 *)(a1 + 584);
  v4 = (_QWORD *)(v1 + 1944);
  v5 = (_QWORD *)(v1 + 1952);
  if ( (*(_DWORD *)(v1 + 1740) & 0x80u) != 0 )
  {
    v4 = (_QWORD *)*v4;
    v5 = (_QWORD *)*v5;
  }
  v6 = 1;
  v7 = KiSystemAllowedCpuSets[2 * v3] | KiSystemAllowedCpuSets[2 * v3
                                                             + (((unsigned __int64)*(unsigned int *)(a1 + 1748) >> 11) & 1)];
  if ( (*(_DWORD *)(v1 + 768) & 0x8000000) != 0 && (v8 = v4[v3]) != 0 )
  {
    v7 = v4[v3];
    v6 = 0;
  }
  else
  {
    v8 = v7 | v4[v3];
  }
  if ( !v8 )
    return 0LL;
  v9 = (_QWORD *)(a1 + 1984);
  if ( (*(_DWORD *)(a1 + 1744) & 0x20000) != 0 )
    v9 = (_QWORD *)*v9;
  v10 = v9[v3];
  if ( !v10 )
  {
    v10 = v5[v3];
    if ( !v10 )
    {
      if ( !KiRestrictedSystemCpuSetsActive && v6 )
        return 0LL;
      v10 = v7;
    }
  }
  v12 = v8 & v10;
  if ( v12 )
    v8 = v12;
  v13 = v8 & KiNonParkedCpuSets[v3];
  if ( !v13 )
    v13 = v8;
  result = 0LL;
  v14 = (_DWORD)v3 << 6;
  do
  {
    _BitScanForward64(&v15, v13);
    result |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)(v14 + v15));
    v13 &= ~(1LL << v15);
  }
  while ( v13 );
  return result;
}
