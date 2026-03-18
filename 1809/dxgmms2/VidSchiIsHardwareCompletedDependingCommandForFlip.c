/*
 * XREFs of VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C000EE78
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0009DE0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 */

__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // r9d
  __int64 v6; // rax
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  bool v9; // cc
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 *v14; // rax

  v1 = (_DWORD *)a1;
  v2 = *(_QWORD *)(a1 + 1040);
  if ( *(_BYTE *)(v2 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
    return 1LL;
  v3 = v1[270];
  if ( (v1[280] & 0x2000) != 0 )
  {
    v11 = 0;
    if ( v3 )
    {
      do
      {
        v12 = *(_QWORD *)&v1[2 * v11];
        v13 = *(_QWORD *)&v1[2 * v11 + 128];
        if ( !*(_BYTE *)(v12 + 28) )
        {
          v14 = *(unsigned __int64 **)(v12 + 64);
          if ( *(_BYTE *)(v12 + 29) )
          {
            if ( *v14 < v13 )
              return 0LL;
          }
          else if ( *(_DWORD *)v14 - (int)v13 < 0 )
          {
            return 0LL;
          }
        }
        ++v11;
      }
      while ( v11 < v1[270] );
    }
    return 1LL;
  }
  if ( v3 )
    v4 = *(_QWORD *)&v1[2 * v3 - 2];
  else
    v4 = 0LL;
  v5 = 0;
  if ( !v3 )
  {
LABEL_14:
    if ( v4 )
    {
      LOBYTE(v1) = 1;
      VidSchiUpdateLastCompletedPresentTimestamp(v4, (__int64)v1, 0);
    }
    return 1LL;
  }
  v1 += 130;
  while ( 1 )
  {
    v6 = *((_QWORD *)v1 - 65);
    v7 = v1[1];
    v8 = *(_DWORD *)(v6 + 164);
    v9 = v7 <= v8;
    if ( v7 == v8 )
    {
      if ( *v1 > *(_DWORD *)(v6 + 160) )
        return 0LL;
      v9 = v7 <= v8;
    }
    if ( !v9 )
      return 0LL;
    ++v5;
    v1 += 2;
    if ( v5 >= v3 )
      goto LABEL_14;
  }
}
