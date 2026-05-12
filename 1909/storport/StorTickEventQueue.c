/*
 * XREFs of StorTickEventQueue @ 0x1C000F0F0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000F040 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x1C00057F0 (RaidAdapterRequestComplete.c)
 *     RaidDriverGetName @ 0x1C0017EBC (RaidDriverGetName.c)
 *     RaidUnitAbortSrb @ 0x1C0048148 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C004B498 (StorEtwHwTimeoutDetectedEvent.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1C004C15C (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C004C37C (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // r15
  char v4; // bp
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  char v8; // bl
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  ULONGLONG v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 *v24; // rbx
  KSPIN_LOCK v25; // rcx
  unsigned int v26; // eax
  char v28; // [rsp+30h] [rbp-98h]
  unsigned int v29; // [rsp+34h] [rbp-94h]
  unsigned int v30; // [rsp+38h] [rbp-90h]
  unsigned int v31; // [rsp+3Ch] [rbp-8Ch]
  __int64 v32; // [rsp+40h] [rbp-88h]
  __int64 v33; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-70h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+70h] [rbp-58h]
  char v38; // [rsp+D8h] [rbp+10h]
  char v39; // [rsp+E0h] [rbp+18h]
  char v40; // [rsp+E8h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 4);
  LODWORD(v3) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 456), 2u);
  v6 = 0;
  v28 = 0;
  v30 = v2;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v23 = 0;
    if ( !*(_DWORD *)(a2 + 8) )
      return v6;
    while ( 1 )
    {
      v24 = (__int64 *)(a2 + ((v23 + 1LL) << 6));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v24 + 5, &LockHandle);
      v25 = *v24;
      v26 = *((_DWORD *)v24 + 12);
      if ( (__int64 *)*v24 != v24 )
        v4 = 1;
      if ( v26 <= 0xFFFFFFFD )
      {
        if ( v26 )
        {
          if ( v26 <= v2 )
          {
            *((_DWORD *)v24 + 12) = 0;
LABEL_77:
            StorEtwHwTimeoutDetectedEvent(v25 - 48, 0LL);
            v6 = -1073741643;
            *((_DWORD *)v24 + 12) = -2;
            goto LABEL_79;
          }
          v26 -= v2;
          *((_DWORD *)v24 + 12) = v26;
        }
        if ( !v26 )
          goto LABEL_77;
      }
      v6 = 0;
LABEL_79:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v6 != -1073741643 && ++v23 < *(_DWORD *)(a2 + 8) )
        continue;
      v28 = v4;
      goto LABEL_82;
    }
  }
  v40 = 1;
  v39 = 0;
  v29 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v7 = 0;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v38 = 0;
    v31 = 0;
    if ( *(_DWORD *)(a2 + 8) )
      break;
LABEL_62:
    v40 = 0;
    if ( v8 )
    {
      v7 = v29;
      if ( v29 < 0x64 )
        continue;
    }
    goto LABEL_82;
  }
  while ( 1 )
  {
    v29 = v7 + 1;
    v10 = a2 + ((v9 + 1LL) << 6);
    v32 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 40), &LockHandle);
    if ( v40 )
    {
      v13 = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 32) = v13;
      if ( v13 != v10 + 16 )
        v4 = 1;
      v28 = v4;
    }
    v14 = *(_QWORD *)(v10 + 32);
    if ( v14 != v10 + 16 )
    {
      v12 = v14 - 64;
      v15 = *(_QWORD *)(v14 + 24) + (unsigned int)(5000000 * *(_DWORD *)(v14 + 16));
      if ( v15 > UnbiasedInterruptTime || (*(_BYTE *)(v12 + 16) & 0x1C) == 0x10 )
        goto LABEL_27;
      v16 = *(_QWORD *)(v12 + 224);
      if ( v15 < *(_QWORD *)(v16 + 3024) )
      {
        v33 = 0LL;
        BugCheckParameter2 = 0LL;
        RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 16LL), &v33);
        if ( MiniportBugActionPolicy == 1 )
        {
          StorEtwMiniportBugResetBrokenEvent(
            v14 - 64,
            *(_QWORD *)(*(_QWORD *)(v12 + 224) + 3024LL) - *(_QWORD *)(v14 + 24),
            &v33);
        }
        else if ( MiniportBugActionPolicy == 2 )
        {
          KeBugCheckEx(
            0xF0u,
            1uLL,
            BugCheckParameter2,
            *(_QWORD *)(v12 + 168),
            *(_QWORD *)(*(_QWORD *)(v12 + 224) + 8LL));
        }
      }
      if ( (*(_DWORD *)a2 & 4) == 0 )
      {
        v6 = -1073741643;
        goto LABEL_28;
      }
      v17 = *(_DWORD *)(v12 + 776);
      if ( v17 == 3 )
      {
        v6 = -1073741643;
        v38 = 0;
        goto LABEL_28;
      }
      if ( v17 )
      {
        if ( (*(_BYTE *)(v12 + 17) & 4) != 0 )
        {
          v38 = 1;
          *(_QWORD *)(v10 + 32) = **(_QWORD **)(v10 + 32);
        }
      }
      else
      {
        v38 = 1;
        *(_QWORD *)(v10 + 32) = **(_QWORD **)(v10 + 32);
        v18 = *(_QWORD *)(v12 + 168);
        v11 = *(_QWORD *)(v12 + 224);
        v32 = v18;
        v19 = *(_BYTE *)(v18 + 2);
        if ( v19 == 40 )
          v3 = *(unsigned int *)(v18 + 20);
        else
          v3 = v19;
        if ( (unsigned int)v3 > 0x20 || (v20 = 0x1000D0000LL, !_bittest64(&v20, v3)) )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 776), 1, 0) )
          {
            v11 = 0LL;
            v32 = 0LL;
            if ( (*(_BYTE *)(v12 + 17) & 4) == 0 )
LABEL_27:
              *(_QWORD *)(v10 + 32) = v10 + 16;
          }
        }
      }
    }
LABEL_28:
    if ( (*(_DWORD *)a2 & 4) != 0 )
      goto LABEL_41;
    if ( v6 == -1073741643 )
    {
      *(_DWORD *)(v10 + 48) = -2;
      goto LABEL_44;
    }
    v21 = *(_DWORD *)(v10 + 48);
    if ( !v21 )
      goto LABEL_38;
    if ( v21 > v30 )
    {
      v21 -= v30;
      *(_DWORD *)(v10 + 48) = v21;
LABEL_38:
      if ( v21 )
        goto LABEL_41;
      goto LABEL_39;
    }
    *(_DWORD *)(v10 + 48) = 0;
LABEL_39:
    if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 1) != 0 )
    {
      *(_DWORD *)(v10 + 48) = v30;
LABEL_41:
      if ( v6 != -1073741643 && (v39 || !v11) )
        goto LABEL_47;
      goto LABEL_44;
    }
    v12 = *(_QWORD *)v10 - 48LL;
    *(_DWORD *)(v10 + 48) = -2;
    v6 = -1073741643;
LABEL_44:
    if ( v12 && *(_DWORD *)(v12 + 776) != 3 )
    {
      v22 = *(_DWORD *)a2 >> 2;
      LOBYTE(v22) = (*(_DWORD *)a2 & 4) != 0;
      StorEtwHwTimeoutDetectedEvent(v12, v22);
      v39 = 1;
    }
LABEL_47:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v6 == -1073741643 )
    {
      LODWORD(v3) = 0;
      goto LABEL_60;
    }
    if ( v11 )
    {
      if ( (_DWORD)v3 == 16 )
      {
        v8 = 0;
        v6 = -1073741643;
        StorEtwMiniportBugAbortTimeoutEvent(v12);
        v4 = v28;
        LODWORD(v3) = 0;
        goto LABEL_62;
      }
      if ( (unsigned int)(v3 - 18) > 1 && (_DWORD)v3 != 32 )
      {
        *(_BYTE *)(v12 + 17) |= 4u;
        if ( (int)RaidUnitAbortSrb(v11, v32) < 0 )
          break;
      }
    }
    LODWORD(v3) = 0;
    v4 = v28;
    v9 = v31 + 1;
    v31 = v9;
    if ( v9 >= *(_DWORD *)(a2 + 8) )
      goto LABEL_61;
    v7 = v29;
  }
  *(_BYTE *)(v12 + 17) &= ~4u;
  LODWORD(v3) = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 776), 0, 1) == 4 )
  {
    RaidAdapterRequestComplete(*(_QWORD *)(v11 + 24), v12, 1);
    v6 = 0;
LABEL_60:
    v4 = v28;
LABEL_61:
    v8 = v38;
    goto LABEL_62;
  }
  v6 = -1073741643;
LABEL_82:
  if ( v28 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
  return v6;
}
