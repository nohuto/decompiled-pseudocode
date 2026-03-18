/*
 * XREFs of KeRemoveQueueDpcEx @ 0x1400FD550
 * Callers:
 *     ExpCancelTimer @ 0x140008730 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     EtwpFreeCompression @ 0x1400FD480 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1400FD4E4 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x1400FD530 (KeRemoveQueueDpc.c)
 *     KiCheckAndRearmForceIdle @ 0x140139D80 (KiCheckAndRearmForceIdle.c)
 *     KeMaskInterrupt @ 0x14017C410 (KeMaskInterrupt.c)
 *     KeClearForceIdle @ 0x1402B1F30 (KeClearForceIdle.c)
 *     VfWdCheckForSettingsChange @ 0x14097DE90 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400FC9E0 (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char __fastcall KeRemoveQueueDpcEx(__int64 a1, char a2)
{
  char v4; // r15
  __int64 v5; // r12
  bool v6; // bp
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 *v11; // rdx
  _QWORD *v12; // rcx
  __int64 *i; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r14
  int IsEmptyAffinity; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-228h] BYREF
  char v25; // [rsp+20h] [rbp-208h]
  int v26; // [rsp+24h] [rbp-204h] BYREF
  unsigned __int16 *v27; // [rsp+28h] [rbp-200h] BYREF
  __int64 v28; // [rsp+30h] [rbp-1F8h]
  __int64 v29; // [rsp+38h] [rbp-1F0h]
  _DWORD v30[16]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v31[22]; // [rsp+80h] [rbp-1A8h] BYREF
  unsigned __int16 v32[88]; // [rsp+130h] [rbp-F8h] BYREF
  int v33; // [rsp+220h] [rbp-8h]

  memset(v30, 0, sizeof(v30));
  memset(v32, 0, 0xA8uLL);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v31, 0, 0xA8uLL);
  v4 = 0;
  v25 = 0;
  _disable();
  v5 = *(_QWORD *)(a1 + 56);
  v6 = (v33 & 0x200) != 0;
  if ( v5 )
  {
    v30[0] = *(_DWORD *)a1;
    v8 = HIWORD(v30[0]);
    if ( HIWORD(v30[0]) >= 0x500u )
      LOWORD(v8) = HIWORD(v30[0]) - 1280;
    if ( LOBYTE(v30[0]) == 26 && (v9 = KiProcessorBlock[(unsigned __int16)v8], *(_BYTE *)(v9 + 11880)) )
      v10 = v9 + 11816;
    else
      v10 = KiProcessorBlock[(unsigned __int16)v8] + 11776;
    KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 16));
    if ( v5 == *(_QWORD *)(a1 + 56) && v30[0] == *(_DWORD *)a1 )
    {
      v11 = (__int64 *)(a1 + 8);
      v12 = (_QWORD *)v10;
      --*(_DWORD *)(v10 + 24);
      for ( i = *(__int64 **)v10; i != v11; i = (__int64 *)*i )
        v12 = i;
      v14 = *v11;
      *v12 = *v11;
      if ( !v14 )
        *(_QWORD *)(v10 + 8) = v12;
      v4 = 1;
      *(_QWORD *)(a1 + 56) = 0LL;
      v25 = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 16));
  }
  if ( v6 )
    _enable();
  if ( a2 && *(_QWORD *)(a1 + 16) )
  {
    KiGetDeepIdleProcessors(v32, (unsigned __int16 *)v31);
    v15 = 0;
    if ( LOWORD(v31[0]) )
    {
      v16 = *(_QWORD *)(a1 + 16);
      do
      {
        v17 = v15++;
        v31[v17 + 1] &= v16;
      }
      while ( v15 < LOWORD(v31[0]) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( LOWORD(v31[0]) > (unsigned __int16)Group )
      v31[Group + 1] &= ~CurrentPrcb->GroupSetMember;
    v28 = v31[1];
    v27 = (unsigned __int16 *)v31;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v26, &v27) )
    {
      v20 = KiProcessorBlock[v26];
      if ( *(_BYTE *)a1 != 26 || (v21 = 11816LL, !*(_BYTE *)(v20 + 11880)) )
        v21 = 11776LL;
      if ( !v5 )
      {
        _InterlockedOr(v24, 0);
        v22 = v20 + v21;
        if ( *(_QWORD *)(v20 + v21 + 16) )
        {
          _disable();
          KxAcquireSpinLock((PKSPIN_LOCK)(v22 + 16));
          KxReleaseSpinLock((PKSPIN_LOCK)(v22 + 16));
          if ( (v33 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(_QWORD *)(v20 + v21 + 32) != a1 && (unsigned int)LOWORD(v31[0]) > *(unsigned __int8 *)(v20 + 208) )
        v31[*(unsigned __int8 *)(v20 + 208) + 1] &= ~*(_QWORD *)(v20 + 200);
    }
    IsEmptyAffinity = KeIsEmptyAffinityEx(v31);
    v4 = v25;
    if ( !IsEmptyAffinity )
      KeGenericProcessorCallback(v31, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 2);
  }
  return v4;
}
