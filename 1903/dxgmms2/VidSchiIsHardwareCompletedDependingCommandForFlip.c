/*
 * XREFs of VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C002E9D4
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036220 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000AF50 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 */

__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 *v7; // rax
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  bool v14; // cc

  v1 = (_DWORD *)a1;
  v2 = *(_QWORD *)(a1 + 1040);
  if ( *(_BYTE *)(v2 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
    return 1LL;
  v3 = v1[273];
  if ( (v1[284] & 0x2000) != 0 )
  {
    v4 = 0;
    if ( v3 )
    {
      do
      {
        v5 = *(_QWORD *)&v1[2 * v4];
        v6 = *(_QWORD *)&v1[2 * v4 + 128];
        if ( !*(_BYTE *)(v5 + 28) )
        {
          v7 = *(unsigned __int64 **)(v5 + 64);
          if ( *(_BYTE *)(v5 + 29) )
          {
            if ( *v7 < v6 )
              return 0LL;
          }
          else if ( *(_DWORD *)v7 - (int)v6 < 0 )
          {
            return 0LL;
          }
        }
        ++v4;
      }
      while ( v4 < v1[273] );
    }
    return 1LL;
  }
  if ( v3 )
    v9 = *(_QWORD *)&v1[2 * v3 - 2];
  else
    v9 = 0LL;
  v10 = 0;
  if ( !v3 )
  {
LABEL_23:
    if ( v9 )
    {
      LOBYTE(v1) = 1;
      VidSchiUpdateLastCompletedPresentTimestamp(v9, (__int64)v1, 0);
    }
    return 1LL;
  }
  v1 += 130;
  while ( 1 )
  {
    v11 = *((_QWORD *)v1 - 65);
    if ( v11 )
    {
      v12 = v1[1];
      v13 = *(_DWORD *)(v11 + 164);
      v14 = v12 <= v13;
      if ( v12 == v13 )
      {
        if ( *v1 > *(_DWORD *)(v11 + 160) )
          return 0LL;
        v14 = v12 <= v13;
      }
      if ( !v14 )
        return 0LL;
    }
    ++v10;
    v1 += 2;
    if ( v10 >= v3 )
      goto LABEL_23;
  }
}
