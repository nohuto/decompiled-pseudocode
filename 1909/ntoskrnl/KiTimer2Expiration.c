/*
 * XREFs of KiTimer2Expiration @ 0x14009FD10
 * Callers:
 *     KiRetireDpcList @ 0x1400A1C50 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140166770 (KiTimerExpirationDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiShouldActivateHRTimerClock @ 0x14009F518 (KiShouldActivateHRTimerClock.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     KiRemoveTimer2 @ 0x14009FAD0 (KiRemoveTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiSendClockInterruptToClockOwner @ 0x140111DF8 (KiSendClockInterruptToClockOwner.c)
 *     KiUpdateTimer2Flags @ 0x1401139F4 (KiUpdateTimer2Flags.c)
 *     KiProcessThreadWaitList @ 0x140114160 (KiProcessThreadWaitList.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     KiInsertTimer2 @ 0x140122C34 (KiInsertTimer2.c)
 *     KiCheckAndRearmForceIdle @ 0x140139D80 (KiCheckAndRearmForceIdle.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, _DWORD *a4)
{
  char result; // al
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // r14
  _DWORD *v16; // rsi
  char v17; // r15
  unsigned __int64 v18; // rdi
  char v19; // al
  signed __int32 v20; // edx
  signed __int32 v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  signed __int32 v27; // edx
  char v28[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-80h] BYREF
  _QWORD **v30; // [rsp+40h] [rbp-78h]
  __int64 v31; // [rsp+48h] [rbp-70h]
  _DWORD *v32; // [rsp+50h] [rbp-68h]
  unsigned __int64 v33; // [rsp+58h] [rbp-60h] BYREF
  __int64 v34; // [rsp+60h] [rbp-58h]
  _QWORD v35[2]; // [rsp+68h] [rbp-50h] BYREF

  v32 = a4;
  v33 = 0LL;
  v34 = 0LL;
  result = KiNextTimer2DueTime;
  v31 = a1;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v30 = &v29;
  v29 = &v29;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v7 = 0;
  v8 = 4LL;
  if ( !a3 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v33 = a2;
      v35[0] = &v33;
      LOBYTE(v34) = 1;
      v35[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v35, 1, 1073872896, 3920, 1538);
    }
    v7 = 1;
    v8 = 2LL;
  }
  v9 = v7;
  v10 = (unsigned __int64)&KiTimer2Collections[3 * v7];
  do
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
        goto LABEL_8;
      v12 = v11 ^ (v10 | 1);
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 8);
    }
    while ( v12 )
    {
      v13 = (_QWORD *)(v12 - 24 * ((unsigned __int64)v7 >> 1));
      if ( a2 < v13[6] )
        break;
      KiRemoveTimer2((__int64)(v13 - 3));
      v20 = *((_DWORD *)v13 - 6);
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)v13 - 6, v20 & 0xFFFFF0FF | 0x200, v20);
      if ( v20 != v21 )
      {
        do
        {
          v27 = v21;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)v13 - 6, v21 & 0xFFFFF0FF | 0x200, v21);
        }
        while ( v27 != v21 );
      }
      v22 = v30;
      if ( *v30 != &v29 )
        __fastfail(3u);
      v13[1] = v30;
      *v13 = &v29;
      *v22 = v13;
      v23 = *(_QWORD *)(v10 + 8);
      v30 = (_QWORD **)v13;
      if ( (v23 & 1) != 0 )
      {
        if ( v23 == 1 )
          break;
        v12 = v23 ^ (v10 | 1);
      }
      else
      {
        v12 = v23;
      }
    }
LABEL_8:
    ++v7;
    ++v9;
    v10 += 24LL;
  }
  while ( v9 < v8 );
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  v14 = v29;
  v15 = v31;
  if ( v29 == &v29 )
    goto LABEL_18;
  v16 = v32;
  v17 = 0;
  while ( 2 )
  {
    v18 = (unsigned __int64)(v14 - 3);
    v14 = (_QWORD *)*v14;
    KiAcquireKobjectLockSafe(v18);
    v19 = *(_BYTE *)(v18 + 1);
    if ( (v19 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v18 + 129) & 2) != 0 )
        v17 = 1;
      goto LABEL_14;
    }
    v24 = 0LL;
    v25 = v18;
    if ( (v19 & 8) != 0 )
    {
      if ( (unsigned __int8)KiInsertTimer2(v18, 0LL, v28) )
      {
        v26 = 0LL;
        v25 = v18;
        v24 = 1LL;
        goto LABEL_39;
      }
      if ( (*(_BYTE *)(v18 + 129) & 2) != 0 )
        v17 = 1;
LABEL_14:
      KiExpireTimer2(v18, v15, (LARGE_INTEGER)a2, v16);
    }
    else
    {
      v26 = 4LL;
LABEL_39:
      KiUpdateTimer2Flags(v25, v24, v26);
    }
    if ( v14 != &v29 )
      continue;
    break;
  }
  if ( v17 )
    KiCheckAndRearmForceIdle();
LABEL_18:
  if ( *(_QWORD *)(v15 + 11528) )
    KiProcessThreadWaitList(v15, 1LL, 0LL);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_14044D748);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
