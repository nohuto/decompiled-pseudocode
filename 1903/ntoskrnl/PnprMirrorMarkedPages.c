/*
 * XREFs of PnprMirrorMarkedPages @ 0x1405A9E3C
 * Callers:
 *     PnprSwap @ 0x1402A0C5C (PnprSwap.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlFindNextForwardRunClear @ 0x140088E20 (RtlFindNextForwardRunClear.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FA8B0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     RtlFindFirstRunClear @ 0x14030CC30 (RtlFindFirstRunClear.c)
 */

__int64 __fastcall PnprMirrorMarkedPages()
{
  __int64 v0; // r14
  unsigned int v1; // r15d
  bool v2; // r13
  __int64 v3; // rcx
  __int64 v4; // rax
  _RTL_BITMAP *v5; // rdi
  ULONG i; // eax
  int v7; // eax
  __int64 v8; // rcx
  ULONG v9; // esi
  ULONG v10; // esi
  ULONG v11; // ebx
  int v12; // eax
  int v13; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  ULONG StartingIndex; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall *v17)(_QWORD, _QWORD, unsigned __int64); // [rsp+88h] [rbp+48h]

  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  if ( *(_QWORD *)(*(_QWORD *)(PnprContext + 136) + 24 * v0) )
  {
    v2 = (_DWORD)v0 == *(_DWORD *)(PnprContext + 180);
    v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(PnprContext + 20928);
    do
    {
      v3 = PnprContext;
      v4 = PnprContext + 152;
      v5 = *(_RTL_BITMAP **)(PnprContext + 152);
      while ( 2 )
      {
        if ( v5 != (_RTL_BITMAP *)v4 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 168), &LockHandle);
          for ( i = RtlFindFirstRunClear(v5 + 2, &StartingIndex);
                ;
                i = RtlFindNextForwardRunClear(v5 + 2, v9, &StartingIndex) )
          {
            v10 = StartingIndex;
            v11 = i;
            if ( i )
            {
              if ( i >= 0x140 )
                v11 = 320;
              RtlSetBits(v5 + 2, StartingIndex, v11);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( !v11 )
              break;
            v7 = v17(
                   *(_QWORD *)(PnprContext + 20880),
                   (*(_QWORD *)&v5[1].SizeOfBitMap + v10) << 12,
                   (unsigned __int64)v11 << 12);
            v8 = PnprContext;
            v1 = v7;
            if ( v7 < 0 )
            {
              v12 = *(_DWORD *)(PnprContext + 20984);
              if ( !v12 )
                v12 = 3568;
              *(_DWORD *)(PnprContext + 20984) = v12;
              v13 = *(_DWORD *)(v8 + 20988);
              if ( !v13 )
                v13 = 8;
              *(_DWORD *)(v8 + 20988) = v13;
              goto LABEL_24;
            }
            v9 = v11 + v10;
            StartingIndex = v9;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
          }
          if ( *(_DWORD *)(PnprContext + 200) != 3 )
          {
            v3 = PnprContext;
            v5 = *(_RTL_BITMAP **)&v5->SizeOfBitMap;
            v4 = PnprContext + 152;
            continue;
          }
          v2 = 1;
        }
        break;
      }
    }
    while ( !v2 );
  }
LABEL_24:
  if ( (_DWORD)v0 != *(_DWORD *)(PnprContext + 180) && *(int *)(PnprContext + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 3 );
  }
  return v1;
}
