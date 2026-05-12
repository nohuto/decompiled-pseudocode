/*
 * XREFs of StorTickEventQueue @ 0x1C000FFE0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x1C0005DE0 (RaidAdapterRequestComplete.c)
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     RaidUnitAbortSrb @ 0x1C0049630 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C004C858 (StorEtwHwTimeoutDetectedEvent.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1C004D578 (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C004D79C (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  char v3; // bp
  __int64 v4; // r15
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned int v7; // eax
  char v8; // bl
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rcx
  __int64 v17; // r14
  ULONGLONG v18; // rdx
  ULONG_PTR *v19; // rbp
  ULONG_PTR v20; // rsi
  ULONG_PTR v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v28; // edi
  __int64 *v29; // rbx
  KSPIN_LOCK v30; // rcx
  unsigned int v31; // eax
  char v32; // [rsp+30h] [rbp-A8h]
  char v33; // [rsp+34h] [rbp-A4h]
  unsigned int v34; // [rsp+38h] [rbp-A0h]
  unsigned int v35; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v36; // [rsp+40h] [rbp-98h]
  __int64 v37; // [rsp+58h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  char v43; // [rsp+F0h] [rbp+18h]
  char v44; // [rsp+F8h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 4);
  v36 = v2;
  v3 = 0;
  v4 = a2;
  v5 = 0;
  v33 = 0;
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 456), 2u);
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v28 = 0;
    if ( !*(_DWORD *)(a2 + 8) )
      return v5;
    while ( 1 )
    {
      v29 = (__int64 *)(v4 + ((v28 + 1LL) << 6));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v29 + 5, &LockHandle);
      v30 = *v29;
      v31 = *((_DWORD *)v29 + 12);
      if ( (__int64 *)*v29 != v29 )
        v3 = 1;
      if ( v31 <= 0xFFFFFFFD )
      {
        if ( v31 )
        {
          if ( v31 <= v2 )
          {
            *((_DWORD *)v29 + 12) = 0;
LABEL_81:
            StorEtwHwTimeoutDetectedEvent(v30 - 48, 0LL);
            v5 = -1073741643;
            *((_DWORD *)v29 + 12) = -2;
            goto LABEL_83;
          }
          v31 -= v2;
          *((_DWORD *)v29 + 12) = v31;
        }
        if ( !v31 )
          goto LABEL_81;
      }
      v5 = 0;
LABEL_83:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v5 != -1073741643 && ++v28 < *(_DWORD *)(v4 + 8) )
        continue;
      goto LABEL_66;
    }
  }
  LODWORD(v6) = 0;
  v32 = 1;
  v34 = 0;
  v44 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v7 = 0;
  while ( 1 )
  {
    v8 = 0;
    v35 = 0;
    v9 = 0;
    v43 = 0;
    if ( *(_DWORD *)(v4 + 8) )
      break;
LABEL_63:
    v32 = 0;
    if ( v8 )
    {
      v7 = v34;
      if ( v34 < 0x64 )
        continue;
    }
    goto LABEL_65;
  }
  while ( 1 )
  {
    v34 = v7 + 1;
    v10 = v4 + ((v9 + 1LL) << 6);
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 40), &LockHandle);
    if ( v32 )
    {
      v14 = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 32) = v14;
      v15 = v33;
      if ( v14 != v10 + 16 )
        v15 = 1;
      v33 = v15;
    }
    v16 = *(_QWORD *)(v10 + 32);
    if ( v16 != v10 + 16 )
    {
      v13 = v16 - 64;
      v17 = *(_QWORD *)(v16 + 24);
      v18 = v17 + (unsigned int)(5000000 * *(_DWORD *)(v16 + 16));
      if ( v18 <= UnbiasedInterruptTime && (*(_BYTE *)(v13 + 16) & 0x1C) != 0x10 )
      {
        v19 = *(ULONG_PTR **)(v13 + 224);
        v20 = v19[160];
        if ( v18 < v20 )
        {
          v21 = v19[3];
          v37 = 0LL;
          BugCheckParameter2 = 0LL;
          RaidDriverGetName(*(_QWORD *)(v21 + 16), &v37);
          if ( MiniportBugActionPolicy == 1 )
          {
            StorEtwMiniportBugResetBrokenEvent(v13, v20 - v17, &v37);
          }
          else if ( MiniportBugActionPolicy == 2 )
          {
            KeBugCheckEx(0xF0u, 1uLL, BugCheckParameter2, *(_QWORD *)(v13 + 168), v19[1]);
          }
        }
        if ( (*(_DWORD *)a2 & 4) == 0 )
        {
          v5 = -1073741643;
          v12 = 0LL;
          v11 = 0LL;
          goto LABEL_28;
        }
        v22 = *(_DWORD *)(v13 + 776);
        if ( v22 == 3 )
        {
          v5 = -1073741643;
          v43 = 0;
          v12 = 0LL;
          v11 = 0LL;
          goto LABEL_28;
        }
        if ( v22 )
        {
          if ( (*(_BYTE *)(v13 + 17) & 4) != 0 )
          {
            v43 = 1;
            *(_QWORD *)(v10 + 32) = **(_QWORD **)(v10 + 32);
          }
          v12 = 0LL;
          v11 = 0LL;
          goto LABEL_28;
        }
        v43 = 1;
        *(_QWORD *)(v10 + 32) = **(_QWORD **)(v10 + 32);
        v12 = *(_QWORD *)(v13 + 168);
        v11 = *(_QWORD *)(v13 + 224);
        v23 = *(_BYTE *)(v12 + 2);
        if ( v23 == 40 )
          v6 = *(unsigned int *)(v12 + 20);
        else
          v6 = v23;
        if ( (unsigned int)v6 <= 0x20 && (v24 = 0x1000D0000LL, _bittest64(&v24, v6))
          || !_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 776), 1, 0)
          || (v11 = 0LL, v12 = 0LL, (*(_BYTE *)(v13 + 17) & 4) != 0) )
        {
LABEL_28:
          v9 = v35;
          goto LABEL_29;
        }
      }
      *(_QWORD *)(v10 + 32) = v10 + 16;
      goto LABEL_28;
    }
LABEL_29:
    v4 = a2;
    if ( (*(_DWORD *)a2 & 4) != 0 )
      goto LABEL_43;
    if ( v5 == -1073741643 )
    {
      *(_DWORD *)(v10 + 48) = -2;
      goto LABEL_46;
    }
    v25 = *(_DWORD *)(v10 + 48);
    if ( !v25 )
      goto LABEL_40;
    if ( v25 > v36 )
    {
      v25 -= v36;
      *(_DWORD *)(v10 + 48) = v25;
LABEL_40:
      if ( v25 )
        goto LABEL_43;
      goto LABEL_41;
    }
    *(_DWORD *)(v10 + 48) = 0;
LABEL_41:
    if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 1) != 0 )
    {
      *(_DWORD *)(v10 + 48) = v36;
LABEL_43:
      if ( v5 != -1073741643 && (v44 || !v11) )
        goto LABEL_49;
      goto LABEL_46;
    }
    v13 = *(_QWORD *)v10 - 48LL;
    *(_DWORD *)(v10 + 48) = -2;
    v5 = -1073741643;
LABEL_46:
    if ( v13 && *(_DWORD *)(v13 + 776) != 3 )
    {
      v26 = *(_DWORD *)a2 >> 2;
      LOBYTE(v26) = (*(_DWORD *)a2 & 4) != 0;
      StorEtwHwTimeoutDetectedEvent(v13, v26);
      v44 = 1;
    }
LABEL_49:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v5 == -1073741643 )
    {
      LODWORD(v6) = 0;
      goto LABEL_62;
    }
    if ( v11 )
    {
      if ( (_DWORD)v6 == 16 )
      {
        v8 = 0;
        v5 = -1073741643;
        StorEtwMiniportBugAbortTimeoutEvent(v13);
        LODWORD(v6) = 0;
        goto LABEL_63;
      }
      if ( (unsigned int)(v6 - 18) > 1 && (_DWORD)v6 != 32 )
      {
        *(_BYTE *)(v13 + 17) |= 4u;
        if ( (int)RaidUnitAbortSrb(v11, v12) < 0 )
          break;
      }
    }
    ++v9;
    LODWORD(v6) = 0;
    v35 = v9;
    if ( v9 >= *(_DWORD *)(a2 + 8) )
      goto LABEL_62;
    v7 = v34;
  }
  *(_BYTE *)(v13 + 17) &= ~4u;
  LODWORD(v6) = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 776), 0, 1) == 4 )
  {
    RaidAdapterRequestComplete(*(_QWORD *)(v11 + 24), v13, 1);
    v5 = 0;
LABEL_62:
    v8 = v43;
    goto LABEL_63;
  }
  v5 = -1073741643;
LABEL_65:
  v3 = v33;
LABEL_66:
  if ( v3 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
  return v5;
}
