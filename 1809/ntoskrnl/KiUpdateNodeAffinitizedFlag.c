/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x1400D563C
 * Callers:
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x1400D6480 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  int v4; // edx
  __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r10

  v1 = *(_QWORD *)(a1 + 576);
  v3 = *(unsigned __int16 *)(a1 + 584);
  if ( v1 == qword_1405426A8[v3] )
  {
LABEL_2:
    v4 = 1;
  }
  else
  {
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      while ( 1 )
      {
        _BitScanReverse64(&v6, v1);
        v7 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v3
                                                                                         + (int)v6]]
                                   + 192)
                       + 136LL);
        if ( (v1 & v7) != v7 )
          break;
        v1 &= ~v7;
        if ( !v1 )
          goto LABEL_2;
      }
    }
    v4 = 0;
  }
  result = (*(unsigned __int8 *)(a1 + 2) >> 3) & 1;
  if ( v4 == (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
