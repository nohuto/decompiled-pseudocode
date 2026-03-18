/*
 * XREFs of ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x1800C8C68
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008164C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(
        CPartitionVerticalBlankScheduler *this)
{
  int v2; // ecx
  unsigned int v3; // r8d
  char i; // dl
  unsigned int v5; // edx
  __int64 v6; // r10
  unsigned int v7; // ecx
  int v9; // edx
  __int64 v10; // r10
  unsigned int v11; // eax

  v2 = *((_DWORD *)this + 6463);
  v3 = -1;
  if ( v2 == -1 )
  {
    v7 = *((_DWORD *)this + 6462);
    if ( v7 != -1 )
    {
      v9 = ((_BYTE)v7 + 1) & 0xF;
      while ( v7 != v9 )
      {
        v10 = 1608LL * v7;
        if ( *((_BYTE *)this + v10 + 1170) )
          break;
        v11 = v7;
        if ( !*((_BYTE *)this + v10 + 1169) )
          v11 = v3;
        v7 = ((_BYTE)v7 - 1) & 0xF;
        v3 = v11;
      }
    }
  }
  else
  {
    for ( i = v2 + 1; ; i = v5 + 1 )
    {
      v5 = i & 0xF;
      if ( v5 == v2 || v3 != -1 )
        break;
      v6 = 1608LL * v5;
      if ( *((_BYTE *)this + v6 + 1169) )
      {
        if ( !*((_BYTE *)this + v6 + 1170) )
          v3 = v5;
      }
    }
  }
  return v3;
}
