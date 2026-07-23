/*
 * XREFs of KiTimer2Expiration @ 0x1400FB470
 * Callers:
 *     KiRetireDpcList @ 0x1400C6400 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140156C00 (KiTimerExpirationDpc.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F99D8 (KiCheckAndRearmForceIdle.c)
 *     KiUpdateTimer2Flags @ 0x1400FB3AC (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400FB7B0 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1400FBE28 (KiShouldActivateHRTimerClock.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiInsertTimer2 @ 0x1400FC880 (KiInsertTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400FD1E8 (KiSendClockInterruptToClockOwner.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  char v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rbx
  signed __int32 v15; // edx
  signed __int32 v16; // eax
  signed __int32 v17; // edx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbp
  _QWORD *v23; // rbx
  char v24; // al
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // edx
  char inserted; // al
  char v31; // r8
  _BYTE v32[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-90h] BYREF
  _QWORD **v34; // [rsp+40h] [rbp-88h]
  __int64 v35; // [rsp+48h] [rbp-80h]
  __int64 v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  _QWORD v38[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  char v40; // [rsp+78h] [rbp-50h]

  result = KiNextTimer2DueTime;
  v37 = a4;
  v36 = a1;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v34 = &v33;
  v7 = 0;
  v33 = &v33;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v8 = 4LL;
  v9 = 0;
  v35 = 4LL;
  if ( !a3 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v39 = a2;
      v38[0] = &v39;
      v40 = 1;
      v38[1] = 16LL;
      EtwTraceKernelEvent((__int64)v38, 1u, 0x40020000u, 0xF50u, 0x602u);
    }
    v8 = 2LL;
    v9 = 1;
    v35 = 2LL;
  }
  v10 = v9;
  v11 = (unsigned __int64)&KiTimer2Collections + 24 * v9;
  do
  {
    v12 = *(_QWORD *)(v11 + 8);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == 1 )
        goto LABEL_22;
      v13 = v12 ^ (v11 | 1);
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 8);
    }
    if ( v13 )
    {
      do
      {
        v14 = (_QWORD *)(v13 - 24 * ((unsigned __int64)v9 >> 1));
        if ( a2 < v14[6] )
          break;
        KiRemoveTimer2(v14 - 3);
        v15 = *((_DWORD *)v14 - 6);
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)v14 - 6, v15 & 0xFFFFF0FF | 0x200, v15);
        if ( v15 != v16 )
        {
          do
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)v14 - 6, v16 & 0xFFFFF0FF | 0x200, v16);
          }
          while ( v17 != v16 );
        }
        v18 = v34;
        if ( *v34 != &v33 )
          __fastfail(3u);
        v14[1] = v34;
        *v14 = &v33;
        *v18 = v14;
        v19 = *(_QWORD *)(v11 + 8);
        v34 = (_QWORD **)v14;
        if ( (v19 & 1) != 0 )
        {
          if ( v19 == 1 )
            break;
          v13 = v19 ^ (v11 | 1);
        }
        else
        {
          v13 = v19;
        }
      }
      while ( v13 );
      v8 = v35;
    }
LABEL_22:
    ++v9;
    ++v10;
    v11 += 24LL;
  }
  while ( v10 < v8 );
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  v20 = v33;
  if ( v33 == &v33 )
    goto LABEL_38;
  v21 = v36;
  v22 = v37;
  while ( 2 )
  {
    v23 = v20 - 3;
    v20 = (_QWORD *)*v20;
    KiAcquireKobjectLockSafe(v23);
    v24 = *((_BYTE *)v23 + 1);
    v25 = (volatile signed __int32 *)v23;
    if ( (v24 & 2) != 0 )
    {
LABEL_26:
      if ( (*((_BYTE *)v23 + 129) & 2) != 0 )
        v7 = 1;
      KiExpireTimer2(v25, v21, a2, v22);
    }
    else
    {
      v29 = 0;
      if ( (v24 & 8) != 0 )
      {
        inserted = KiInsertTimer2(v23, 0LL, v32);
        v25 = (volatile signed __int32 *)v23;
        if ( !inserted )
          goto LABEL_26;
        v31 = 0;
        v29 = 1;
      }
      else
      {
        v31 = 4;
      }
      KiUpdateTimer2Flags(v25, v29, v31);
    }
    if ( v20 != &v33 )
      continue;
    break;
  }
  if ( v7 )
    KiCheckAndRearmForceIdle(v27, v26, v28);
LABEL_38:
  if ( *(_QWORD *)(v36 + 11528) )
    KiProcessThreadWaitList(v36, 1LL, 0LL);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140422E68);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
