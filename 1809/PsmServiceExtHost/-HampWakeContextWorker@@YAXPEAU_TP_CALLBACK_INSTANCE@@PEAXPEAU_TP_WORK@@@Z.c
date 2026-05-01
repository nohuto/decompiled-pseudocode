/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800233D0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000A30C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18000AACC (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18000AAFC (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000F190 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180023B30 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     CempLockTrackerMarkAcquired @ 0x180023D40 (CempLockTrackerMarkAcquired.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180035E50 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003CDE0 (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v7; // bl
  DWORD v8; // ecx
  _QWORD *v9; // rax
  char v10; // bl
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v15; // rdx
  _WORD *v16; // rcx
  __int16 v17; // ax
  _WORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // esi
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  DWORD v35; // r14d
  _QWORD *v36; // rbx
  char v37; // bl
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  DWORD v44; // esi
  _QWORD *v45; // rbx
  DWORD v46; // ecx
  char v47; // al
  _QWORD *v48; // rax
  signed __int64 v49; // rax
  signed __int64 v50; // rcx
  bool v51; // zf
  signed __int64 v52; // rtt
  unsigned __int64 v53; // rbx
  signed __int64 v54; // r12
  bool v55; // cc
  signed __int64 v56; // r12
  DWORD v57; // ebx
  __int128 v58; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v59; // [rsp+38h] [rbp-D0h]
  __int64 v60; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  int v62; // [rsp+58h] [rbp-B0h] BYREF
  int v63; // [rsp+5Ch] [rbp-ACh]
  int v64; // [rsp+60h] [rbp-A8h]
  _BYTE v65[128]; // [rsp+64h] [rbp-A4h] BYREF
  _BYTE v66[128]; // [rsp+E4h] [rbp-24h] BYREF
  int v67; // [rsp+164h] [rbp+5Ch]
  int v68; // [rsp+16Ch] [rbp+64h]
  char v69[40]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  __int64 v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  __int64 v74; // [rsp+1B8h] [rbp+B0h]
  int v75; // [rsp+1C8h] [rbp+C0h]
  _BYTE TlsValue[144]; // [rsp+1E8h] [rbp+E0h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
    v4 = HampLockTrackerId;
  }
  if ( v4 != -1 )
  {
    Value = TlsGetValue(v4);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive(a2 + 40);
  *((_DWORD *)a2 + 12) = GetCurrentThreadId();
  CurrentThreadId = GetCurrentThreadId();
  v7 = a2[185];
  for ( *((_DWORD *)a2 + 45) = CurrentThreadId; v7; v7 = a2[185] )
  {
    v8 = HampLockTrackerId;
    a2[185] = 0;
    if ( v8 != -1 )
    {
      v9 = TlsGetValue(v8);
      if ( (*(_DWORD *)v9 & 0x800LL) == 0 )
        __int2c();
      v51 = v9[12]-- == 1LL;
      if ( v51 )
        *v9 &= ~0x800uLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    if ( (v7 & 4) != 0 && (a2[160] & 2) != 0 )
    {
      HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
      *((_QWORD *)a2 + 16) = 0LL;
    }
    HampWakeContextComputeNextState(a2, v7, &v58);
    v10 = v60;
    if ( ((a2[160] & 2) != 0) != ((v60 & 2) != 0) )
    {
      if ( (v60 & 2) == 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
LABEL_21:
        v59 = 0uLL;
        LOBYTE(v60) = v10 & 0xFD;
        goto LABEL_57;
      }
      memset_0(&v62, 0, 0x188uLL);
      v62 = 8256;
      v11 = 64LL;
      v12 = v65;
      do
      {
        if ( v11 == -2147483582 )
          break;
        v13 = *(_WORD *)((char *)v12 + (char *)L"WakeReference" - v65);
        if ( !v13 )
          break;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v51 = v11 == 0;
      v14 = v12 - 1;
      v15 = 64LL;
      if ( !v51 )
        v14 = v12;
      v16 = v66;
      *v14 = 0;
      do
      {
        if ( v15 == -2147483582 )
          break;
        v17 = *(_WORD *)((char *)v16 + (char *)&pwsz - v66);
        if ( !v17 )
          break;
        *v16++ = v17;
        --v15;
      }
      while ( v15 );
      v18 = v16 - 1;
      if ( v15 )
        v18 = v16;
      *v18 = 0;
      v67 = 5;
      memset_0(v69, 0, 0x68uLL);
      v19 = *((_QWORD *)a2 + 7);
      v62 |= 0x42400u;
      v63 |= 4u;
      v64 |= 8u;
      v20 = *((_QWORD *)a2 + 21);
      v68 = 0;
      v71 = 0LL;
      v72 = 0LL;
      v73 = 0LL;
      v74 = 0LL;
      v70 = 175LL;
      v75 = 0;
      if ( (int)HamSrvCreateActivityInternal(
                  *(struct _HOST_ACTIVITY_MANAGER ***)(v19 + 8),
                  v20,
                  (struct _HAM_ACTIVITY_PROPERTIES *)&v62,
                  (unsigned __int64 *)a2 + 11) < 0 )
        goto LABEL_21;
      HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
      if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
        __fastfail(0xEu);
      v22 = *((_QWORD *)a2 + 7);
      v23 = *(_QWORD *)(v22 + 88);
      if ( (v23 & 1) != 0 )
      {
        v24 = *(_QWORD *)(v22 + 80);
        if ( v24 )
          v25 = v24 ^ (v22 + 80);
        else
          v25 = 0LL;
      }
      else
      {
        v25 = *(_QWORD *)(v22 + 80);
      }
      LOBYTE(v21) = 0;
      v26 = v23 & 1;
      if ( v25 )
      {
        while ( 1 )
        {
          if ( (int)HampWakeContextTreeCompareByActivityId(a2 + 88, (struct _RTL_BALANCED_NODE *)v25) < 0 )
          {
            v27 = *(_QWORD *)v25;
            if ( v26 )
            {
              if ( !v27 )
                goto LABEL_54;
              v27 ^= v25;
            }
            if ( !v27 )
            {
LABEL_54:
              LOBYTE(v21) = 0;
              break;
            }
          }
          else
          {
            v27 = *(_QWORD *)(v25 + 8);
            if ( v26 )
            {
              if ( !v27 )
                goto LABEL_48;
              v27 ^= v25;
            }
            if ( !v27 )
            {
LABEL_48:
              LOBYTE(v21) = 1;
              break;
            }
          }
          v25 = v27;
        }
      }
      RtlRbInsertNodeEx(v22 + 80, v25, v21, a2 + 64);
      HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7), v28);
      if ( (int)HamSrvStartActivityAsync(*(_QWORD *)(*((_QWORD *)a2 + 7) + 8LL), *((_QWORD *)a2 + 11), 0LL, 0LL) < 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
        LOBYTE(v60) = v60 & 0xFD;
        v59 = 0uLL;
      }
    }
LABEL_57:
    v29 = -1LL;
    v30 = v59;
    *((_OWORD *)a2 + 8) = v58;
    v31 = v60;
    *((_OWORD *)a2 + 9) = v30;
    *((_QWORD *)a2 + 20) = v31;
    v32 = *((_QWORD *)a2 + 18);
    v33 = *((_QWORD *)a2 + 17);
    if ( v33 < v32 && v32 != -1LL )
      v29 = *((_QWORD *)a2 + 18);
    v34 = *((_QWORD *)a2 + 19);
    if ( v33 < v34 && v34 < v29 )
      v29 = *((_QWORD *)a2 + 19);
    TpWaitForTimer(*((_QWORD *)a2 + 13), 1LL);
    v35 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v36 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *v36 |= 0x800uLL;
      ++v36[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    v37 = a2[184];
    a2[184] = v37 & 0xFB;
    CempLockTrackerMarkReleased(v39, v38, 11LL);
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    if ( (v37 & 4) != 0 )
      CemRcObjectDereference(a2);
    if ( v29 != -1LL )
    {
      v61 = *((_QWORD *)a2 + 17) - v29;
      CempLockTrackerMarkAcquired(v41, v40, 11LL);
      RtlAcquireSRWLockExclusive(a2 + 40);
      *((_DWORD *)a2 + 12) = GetCurrentThreadId();
      a2[184] |= 4u;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
        __fastfail(0xEu);
      CempLockTrackerMarkReleased(v43, v42, 11LL);
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      TpSetTimerEx(*((_QWORD *)a2 + 13), &v61, 0LL, 0LL);
    }
    v44 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v45 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v44) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *v45 |= 0x800uLL;
      ++v45[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    if ( (a2[160] & 1) != 0 )
    {
      a2[184] |= 2u;
      break;
    }
  }
  v46 = HampLockTrackerId;
  v47 = a2[184] & 0xFE;
  *((_DWORD *)a2 + 45) = 0;
  a2[184] = v47;
  if ( v46 != -1 )
  {
    v48 = TlsGetValue(v46);
    if ( (*(_DWORD *)v48 & 0x800LL) == 0 )
      __int2c();
    v51 = v48[12]-- == 1LL;
    if ( v51 )
      *v48 &= ~0x800uLL;
  }
  *((_DWORD *)a2 + 12) = 0;
  RtlReleaseSRWLockExclusive(a2 + 40);
  _m_prefetchw(a2 + 24);
  v49 = *((_QWORD *)a2 + 3);
  v50 = v49 - 1;
  v51 = v49 == 1;
  if ( v49 - 1 <= 0 )
  {
LABEL_89:
    if ( !v51 )
      __fastfail(0xEu);
    v53 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *((_QWORD *)a2 + 2) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(char *))(v53 + 24))(a2);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v53 + 16);
      v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v55 = v54 <= 1;
      v56 = v54 - 1;
      if ( v55 )
      {
        if ( v56 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v53 + 16);
        (*(void (__fastcall **)(char *))(v53 + 24))(a2);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v53 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v52 = v49;
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v50, v49);
      if ( v52 == v49 )
        break;
      v50 = v49 - 1;
      v51 = v49 == 1;
      if ( v49 - 1 <= 0 )
        goto LABEL_89;
    }
  }
  v57 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v57, 0LL);
  }
}
