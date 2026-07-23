/*
 * XREFs of MiLocatePagefileSubsection @ 0x140119DB8
 * Callers:
 *     MiAdvanceVadView @ 0x140025614 (MiAdvanceVadView.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiSkipEntirePagefileRegions @ 0x1402BF438 (MiSkipEntirePagefileRegions.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x14069EB80 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiLocatePagefileSubsection(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r11
  unsigned int *v4; // r9
  unsigned __int64 v5; // rbx
  bool v6; // cf
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8

  v3 = *a2;
  v4 = a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 96LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 )
  {
    v6 = a1[12] < 0x40000000;
  }
  else
  {
    v6 = a1[12] < 0x40000000;
    if ( a1[12] < 0x40000000 )
    {
      if ( v3 < a1[11] )
        return v4;
      return 0LL;
    }
  }
  v8 = (-(__int64)v6 & 0xFFFFFFFFFFFE0000uLL) + 0x40000;
  v9 = v3 / v8;
  v10 = v3 % v8;
  v11 = (unsigned int)(v3 / v8);
  v12 = v11 + 1;
  if ( !v10 )
    v12 = v11;
  if ( v12 <= v5 )
  {
    v4 += 22 * v9;
    if ( v10 < v4[11] )
    {
      *a2 = v10;
      return v4;
    }
  }
  return 0LL;
}
