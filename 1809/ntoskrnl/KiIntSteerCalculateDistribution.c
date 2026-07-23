/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x1400632E0
 * Callers:
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     KiIntSteerComputeCpuSet @ 0x14029AB20 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  void *v6; // rsp
  unsigned __int64 v7; // r9
  void *v8; // rsp
  unsigned int v9; // r10d
  unsigned __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  ULONG_PTR *v18; // rax
  void *v19; // rsp
  unsigned int v20; // r8d
  __int64 i; // rdx
  unsigned int v22; // ebx
  int v23; // r15d
  int j; // r12d
  __int64 v25; // rdi
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 Base; // [rsp+20h] [rbp+0h] BYREF

  v3 = 4LL * a2;
  v5 = v3 + 15;
  if ( v3 + 15 < v3 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v10);
  v7 = *((_QWORD *)a1 + 1);
  v8 = alloca(v10);
  v9 = 0;
  LOWORD(v10) = 0;
  for ( Base = (__int64)&Base;
        ;
        *((_DWORD *)&Base + v13) = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v10
                                                                      + (unsigned __int8)v12] )
  {
    v11 = a1 ? *a1 : (unsigned __int16)v10 + 1;
    if ( !v7 )
      break;
LABEL_7:
    _BitScanForward64(&v12, v7);
    v7 &= ~(1LL << v12);
    v13 = v9++;
  }
  while ( 1 )
  {
    v10 = (unsigned __int16)(v10 + 1);
    if ( (unsigned int)v10 >= v11 )
      break;
    v7 = *(_QWORD *)&a1[4 * v10 + 4];
    if ( v7 )
      goto LABEL_7;
  }
  v14 = 8LL * (unsigned int)KiIntTrackRootCount;
  v15 = v14 + 15;
  if ( v14 + 15 < v14 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = (ULONG_PTR *)KiIntTrackRootList;
  v19 = alloca(v16);
  v20 = 0;
  for ( i = (unsigned int)(KiIntTrackRootCount - 1); v18 != &KiIntTrackRootList; v18 = (ULONG_PTR *)*v18 )
  {
    if ( v18[24] )
    {
      v30 = v20++;
      *(&Base + v30) = (__int64)v18;
    }
    else
    {
      *(&Base + i) = (__int64)v18;
      i = (unsigned int)(i - 1);
    }
  }
  qsort(&Base, v20, 8uLL, KiIntSteerLoadCompare);
  v22 = 0;
  v23 = 0;
  for ( j = 1; v22 < KiIntTrackRootCount; ++v22 )
  {
    v25 = *(&Base + v22);
    if ( *(_BYTE *)(v25 + 132) && (!*(_QWORD *)(v25 + 136) || (int)KiIntSteerComputeCpuSet(*(&Base + v22)) < 0) )
    {
      if ( *(_QWORD *)(v25 + 192)
        || ((v26 = *(_WORD *)(v25 + 168), v27 = *(_QWORD *)(v25 + 160), *a1 <= v26)
          ? (v28 = 0LL)
          : (v28 = v27 & *(_QWORD *)&a1[4 * v26 + 4]),
            v28 != v27) )
      {
        v31 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(Base + 4LL * (unsigned int)v23)];
        *(_DWORD *)(v25 + 186) = 0;
        *(_WORD *)(v25 + 190) = 0;
        *(_WORD *)(v25 + 184) = v31 >> 6;
        *(_QWORD *)(v25 + 176) = 1LL << (v31 & 0x3F);
        v32 = j + v23;
        if ( j + v23 >= a2 )
          j = -1;
        v23 = a2 - 1;
        if ( v32 < a2 )
          v23 = v32;
        if ( v23 < 0 )
        {
          j = 1;
          v23 = 0;
        }
      }
      else
      {
        *(_QWORD *)(v25 + 176) = v27;
      }
    }
  }
  return 0LL;
}
