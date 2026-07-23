/*
 * XREFs of ExpTimerPause @ 0x14013214C
 * Callers:
 *     PsInsertVirtualizedTimer @ 0x14012D16C (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x140131720 (PspSetProcessFreezeStateCallback.c)
 *     ExWakeTimersPause @ 0x1401428E0 (ExWakeTimersPause.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeCancelTimerInternal @ 0x140132214 (KeCancelTimerInternal.c)
 */

void __fastcall ExpTimerPause(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v8; // al
  char v9; // dl
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a4 )
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 64));
  v8 = *(_BYTE *)(a1 + 304);
  if ( (v8 & 2) == 0 )
  {
    *(_BYTE *)(a1 + 304) = v8 | 2;
    if ( (unsigned __int8)KeCancelTimerInternal(a1, &v12, &v13, a1 + 320) )
    {
      v9 = v13;
      switch ( v13 )
      {
        case 1:
          if ( v12 <= a3 )
          {
            *(_QWORD *)(a1 + 312) = 0LL;
            break;
          }
          v11 = a2 + v12 - a3;
          goto LABEL_18;
        case 2:
          if ( v12 <= a3 )
            v10 = 0LL;
          else
            v10 = a3 - v12;
          *(_QWORD *)(a1 + 312) = v10;
          break;
        case 3:
          v11 = v12;
LABEL_18:
          *(_QWORD *)(a1 + 312) = v11;
          break;
      }
    }
    else
    {
      v9 = 0;
    }
    *(_BYTE *)(a1 + 248) = v9;
  }
  if ( !a4 )
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 64));
}
