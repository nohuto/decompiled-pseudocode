/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x1C00125DC
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0006A10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0011880 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0012420 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRewindPacket @ 0x1C00305EC (VidSchiRewindPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000A930 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C0012810 (VidSchiSetNextRunPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  void (__fastcall *v20)(_QWORD); // rax
  _OWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 184) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 184) &= ~4u;
    memset(v21, 0, 0x28uLL);
    v9 = WdLogNewEntry5_WdEvent(v8, v7);
    v10 = v21[0];
    *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(a1 + 640);
    *(_QWORD *)(v9 + 40) = *(_QWORD *)(a1 + 648);
    *(_OWORD *)(v9 + 48) = v10;
    WdLogEvent5_WdEvent(v9);
    v13 = *(_QWORD *)(a1 + 648);
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 640);
      if ( v14 )
      {
        v12 = *(_QWORD *)(a1 + 648);
        while ( 1 )
        {
          v11 = *(_QWORD *)(v12 + 32);
          v12 = v11 - 32;
          if ( v11 - 32 == v14 )
            break;
          if ( v11 == a1 + 656 )
            goto LABEL_16;
        }
      }
      do
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
        v15[3] = v13;
        v15[4] = *(int *)(v13 + 52);
        v15[5] = *(_QWORD *)(a1 + 640);
        v15[6] = *(unsigned int *)(a1 + 772);
        WdLogEvent5_WdEvent(v15);
        v16 = *(_DWORD *)(v13 + 80);
        if ( (v16 & 0x10) != 0 )
        {
          *(_DWORD *)(v13 + 80) = v16 & 0xFFFFFFEF;
          v11 = *(unsigned int *)(v2 + 11192);
          if ( (_DWORD)v11 != -1 )
          {
            v20 = *(void (__fastcall **)(_QWORD))(v6 + 2464);
            if ( v20 )
              v20(*(_QWORD *)(v6 + 2496));
          }
        }
        ++*(_DWORD *)(a1 + 772);
        ++*(_DWORD *)(v2 + 2848);
        ++*(_DWORD *)(v6 + 704);
        if ( a2 )
        {
          v17 = *(_DWORD *)(v13 + 48);
          if ( v17 )
          {
            if ( v17 == 7 || v17 == 5 )
              *(_DWORD *)(v13 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v13 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 2840));
            RtlSetBitEx(v6 + 472, *(unsigned __int16 *)(v2 + 4));
          }
        }
        v12 = *(_QWORD *)(v13 + 32);
        v13 = v12 - 32;
      }
      while ( v12 - 32 != *(_QWORD *)(a1 + 640) && v12 != a1 + 656 );
      VidSchiSetNextRunPacket(a1, *(_QWORD *)(a1 + 648));
    }
LABEL_16:
    v18 = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 648) = 0LL;
    if ( (v18 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 184) >> 9) | *(_BYTE *)(a1 + 184)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, (_QWORD *)0xA, 14394LL);
    }
    else if ( *(_DWORD *)(a1 + 772)
           && (*(_DWORD *)(a1 + 184) & 1) == 0
           && (*(_DWORD *)(a1 + 184) & 0x10) == 0
           && (*(_DWORD *)(a1 + 184) & 0x40) == 0
           && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, 14407LL);
    }
  }
  return v3;
}
