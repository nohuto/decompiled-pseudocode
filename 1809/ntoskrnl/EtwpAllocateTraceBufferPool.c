/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x14065BF54
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD1D4 (EtwpAllocateFreeBuffers.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x14065C074 (EtwpGetSystemMaximumBufferCount.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  unsigned int SystemMaximumBufferCount; // eax
  _DWORD *v2; // r10
  int v3; // r11d
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // ecx

  EtwpQueryUsedProcessorCount(a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount();
  v4 = v2[3];
  v5 = 2 * v3 + 4;
  if ( (v4 & 0x4000000) == 0 )
    v5 = 2 * v3;
  v6 = v5;
  if ( SystemMaximumBufferCount >= v5 )
    v6 = SystemMaximumBufferCount;
  v7 = v2[63];
  v8 = v6;
  if ( v7 <= v5 )
    v7 = v5;
  if ( v7 < v6 )
    v8 = v7;
  v9 = v2[60];
  v2[63] = v8;
  if ( v9 <= v5 )
    v9 = v5;
  if ( v9 < v6 )
    v6 = v9;
  v2[60] = v6;
  if ( v6 > v8 )
  {
    v2[63] = v6;
    v8 = v6;
  }
  if ( (v4 & 0x400) != 0 )
  {
    v8 = v6;
    v2[63] = v6;
  }
  if ( (v4 & 0x40000) != 0 )
    return 0LL;
  v10 = v2[57];
  if ( v10 )
  {
    v12 = v8 - v3 - 1;
    if ( v10 > v12 )
      v2[57] = v12;
  }
  if ( (unsigned int)EtwpAllocateFreeBuffers((__int64)v2, v6) >= v6 )
    return 0LL;
  else
    return 3221225495LL;
}
