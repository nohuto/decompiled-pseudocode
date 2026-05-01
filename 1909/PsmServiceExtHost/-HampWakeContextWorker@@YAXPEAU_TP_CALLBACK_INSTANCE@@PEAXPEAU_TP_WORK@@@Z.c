/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800248E0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180018B1C (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180025090 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003582C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180035FC4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180036CC0 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003A3F4 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003A564 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003DAB0 (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v7; // si
  DWORD v8; // ecx
  _QWORD *v9; // rax
  char v10; // si
  unsigned __int64 v11; // r15
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  DWORD v17; // r14d
  _QWORD *v18; // rsi
  DWORD v19; // eax
  DWORD v20; // ecx
  char v21; // si
  _QWORD *v22; // rax
  DWORD v23; // r14d
  _QWORD *v24; // rsi
  _QWORD *v25; // rax
  DWORD v26; // r14d
  _QWORD *v27; // rsi
  char v28; // al
  DWORD v29; // ecx
  _QWORD *v30; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  bool v33; // zf
  signed __int64 v34; // rtt
  DWORD v35; // ebx
  __int64 v36; // rdx
  _WORD *v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rdx
  _WORD *v40; // rcx
  __int16 v41; // ax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rsi
  int v48; // r14d
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  signed __int64 v53; // r13
  bool v54; // cc
  signed __int64 v55; // r13
  __int128 v56; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v57; // [rsp+30h] [rbp-D0h]
  __int64 v58; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v59; // [rsp+48h] [rbp-B8h] BYREF
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  int v62; // [rsp+58h] [rbp-A8h]
  _BYTE v63[128]; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v64[128]; // [rsp+DCh] [rbp-24h] BYREF
  int v65; // [rsp+15Ch] [rbp+5Ch]
  int v66; // [rsp+164h] [rbp+64h]
  char v67[40]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  __int64 v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  __int64 v72; // [rsp+1B0h] [rbp+B0h]
  int v73; // [rsp+1C0h] [rbp+C0h]
  _BYTE TlsValue[144]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
    v4 = HampLockTrackerId;
  }
  if ( *((_QWORD *)a2 + 3) )
  {
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
        v33 = v9[12]-- == 1LL;
        if ( v33 )
          *v9 &= ~0x800uLL;
      }
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( ((unsigned __int8)a2[160] & (v7 >> 1) & 2) != 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
        *((_QWORD *)a2 + 16) = 0LL;
      }
      HampWakeContextComputeNextState(a2, v7, &v56);
      v10 = v58;
      if ( ((a2[160] & 2) != 0) != ((v58 & 2) != 0) )
      {
        if ( (v58 & 2) == 0 )
        {
          HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
LABEL_95:
          v57 = 0uLL;
          LOBYTE(v58) = v10 & 0xFD;
          goto LABEL_19;
        }
        memset_0(&v61, 0, 0x184uLL);
        v60 = 8397888;
        v36 = 64LL;
        v37 = v63;
        while ( v36 != -2147483582 )
        {
          v38 = *(_WORD *)((char *)v37 + (char *)L"WakeReference" - v63);
          if ( !v38 )
            break;
          *v37++ = v38;
          if ( !--v36 )
          {
            --v37;
            break;
          }
        }
        *v37 = 0;
        v39 = 64LL;
        v40 = v64;
        while ( v39 != -2147483582 )
        {
          v41 = *(_WORD *)((char *)v40 + (char *)&word_18008DA4C - v64);
          if ( !v41 )
            break;
          *v40++ = v41;
          if ( !--v39 )
          {
            --v40;
            break;
          }
        }
        *v40 = 0;
        v65 = 5;
        memset_0(v67, 0, 0x68uLL);
        v42 = *((_QWORD *)a2 + 7);
        v60 |= 0x42400u;
        v61 |= 4u;
        v62 |= 8u;
        v43 = *((_QWORD *)a2 + 21);
        v66 = 0;
        v69 = 0LL;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        v68 = 175LL;
        v73 = 0;
        if ( (int)HamSrvCreateActivityInternal(
                    *(struct _HAM_CLIENT_CONTEXT **)(v42 + 8),
                    v43,
                    (struct _HAM_ACTIVITY_PROPERTIES *)&v60,
                    (unsigned __int64 *)a2 + 11) < 0 )
          goto LABEL_95;
        HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
        if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
          __fastfail(0xEu);
        v45 = *((_QWORD *)a2 + 7);
        v46 = *(_QWORD *)(v45 + 88);
        if ( (v46 & 1) != 0 )
        {
          v51 = *(_QWORD *)(v45 + 80);
          if ( v51 )
            v47 = v51 ^ (v45 + 80);
          else
            v47 = 0LL;
        }
        else
        {
          v47 = *(_QWORD *)(v45 + 80);
        }
        LOBYTE(v44) = 0;
        v48 = v46 & 1;
        if ( v47 )
        {
          while ( 1 )
          {
            if ( (int)HampWakeContextTreeCompareByActivityId(a2 + 88, (struct _RTL_BALANCED_NODE *)v47) < 0 )
            {
              v49 = *(_QWORD *)v47;
              if ( v48 )
              {
                if ( !v49 )
                  goto LABEL_93;
                v49 ^= v47;
              }
              if ( !v49 )
              {
LABEL_93:
                LOBYTE(v44) = 0;
                break;
              }
            }
            else
            {
              v49 = *(_QWORD *)(v47 + 8);
              if ( v48 )
              {
                if ( !v49 )
                  goto LABEL_96;
                v49 ^= v47;
              }
              if ( !v49 )
              {
LABEL_96:
                LOBYTE(v44) = 1;
                break;
              }
            }
            v47 = v49;
          }
        }
        RtlRbInsertNodeEx(v45 + 80, v47, v44, a2 + 64);
        HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7), v50);
        if ( (int)HamSrvStartActivityAsync(*(_QWORD *)(*((_QWORD *)a2 + 7) + 8LL), *((_QWORD *)a2 + 11), 0LL, 0LL) < 0 )
        {
          HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
          LOBYTE(v58) = v58 & 0xFD;
          v57 = 0uLL;
        }
      }
LABEL_19:
      v11 = -1LL;
      v12 = v57;
      *((_OWORD *)a2 + 8) = v56;
      v13 = v58;
      *((_OWORD *)a2 + 9) = v12;
      *((_QWORD *)a2 + 20) = v13;
      v14 = *((_QWORD *)a2 + 18);
      v15 = *((_QWORD *)a2 + 17);
      if ( v15 < v14 && v14 != -1LL )
        v11 = *((_QWORD *)a2 + 18);
      v16 = *((_QWORD *)a2 + 19);
      if ( v15 < v16 && v16 < v11 )
        v11 = *((_QWORD *)a2 + 19);
      TpWaitForTimer(*((_QWORD *)a2 + 13), 1LL);
      v17 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v18 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *v18 |= 0x800uLL;
        ++v18[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      v19 = GetCurrentThreadId();
      v20 = HampLockTrackerId;
      *((_DWORD *)a2 + 12) = v19;
      v21 = a2[184];
      a2[184] = v21 & 0xFB;
      if ( v20 != -1 )
      {
        v22 = TlsGetValue(v20);
        if ( (*(_DWORD *)v22 & 0x800LL) == 0 )
          __int2c();
        v33 = v22[12]-- == 1LL;
        if ( v33 )
          *v22 &= ~0x800uLL;
      }
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( (v21 & 4) != 0 )
        CemRcObjectDereference(a2);
      if ( v11 != -1LL )
      {
        v23 = HampLockTrackerId;
        v59 = *((_QWORD *)a2 + 17) - v11;
        if ( HampLockTrackerId != -1 )
        {
          v24 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFF800uLL) != 0 )
            __int2c();
          *v24 |= 0x800uLL;
          ++v24[12];
        }
        RtlAcquireSRWLockExclusive(a2 + 40);
        *((_DWORD *)a2 + 12) = GetCurrentThreadId();
        a2[184] |= 4u;
        if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
          __fastfail(0xEu);
        if ( HampLockTrackerId != -1 )
        {
          v25 = TlsGetValue(HampLockTrackerId);
          if ( (*(_DWORD *)v25 & 0x800LL) == 0 )
            __int2c();
          v33 = v25[12]-- == 1LL;
          if ( v33 )
            *v25 &= ~0x800uLL;
        }
        *((_DWORD *)a2 + 12) = 0;
        RtlReleaseSRWLockExclusive(a2 + 40);
        TpSetTimerEx(*((_QWORD *)a2 + 13), &v59, 0LL, 0LL);
      }
      v26 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v27 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *v27 |= 0x800uLL;
        ++v27[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      *((_DWORD *)a2 + 12) = GetCurrentThreadId();
      if ( (a2[160] & 1) != 0 )
      {
        v28 = a2[184] | 2;
        goto LABEL_53;
      }
    }
    v28 = a2[184];
LABEL_53:
    v29 = HampLockTrackerId;
    *((_DWORD *)a2 + 45) = 0;
    a2[184] = v28 & 0xFE;
    if ( v29 != -1 )
    {
      v30 = TlsGetValue(v29);
      if ( (*(_DWORD *)v30 & 0x800LL) == 0 )
        __int2c();
      v33 = v30[12]-- == 1LL;
      if ( v33 )
        *v30 &= ~0x800uLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    _m_prefetchw(a2 + 24);
    v31 = *((_QWORD *)a2 + 3);
    v32 = v31 - 1;
    v33 = v31 == 1;
    if ( v31 - 1 <= 0 )
    {
LABEL_103:
      if ( !v33 )
        __fastfail(0xEu);
      v52 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)a2 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(char *))(v52 + 24))(a2);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v52 + 16);
        v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v54 = v53 <= 1;
        v55 = v53 - 1;
        if ( v54 )
        {
          if ( v55 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v52 + 16);
          (*(void (__fastcall **)(char *))(v52 + 24))(a2);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v52 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v34 = v31;
        v31 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v32, v31);
        if ( v34 == v31 )
          break;
        v32 = v31 - 1;
        v33 = v31 == 1;
        if ( v31 - 1 <= 0 )
          goto LABEL_103;
      }
    }
  }
  else
  {
    HampWakeContextDestroy((struct _HAM_HOST_WAKE_CONTEXT *)a2);
  }
  v35 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v35, 0LL);
  }
}
