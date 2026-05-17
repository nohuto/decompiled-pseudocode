/*
 * XREFs of TppWorkerFindTask @ 0x180015BF4
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpWakeSRWLock @ 0x180075250 (RtlpWakeSRWLock.c)
 *     TppQueueRemoveHead @ 0x18008AE4C (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008B06C (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 *     TppETWWorkerNodeSwitch @ 0x180111220 (TppETWWorkerNodeSwitch.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 Number; // r12
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  unsigned __int16 Group; // r15
  int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  volatile signed __int64 *v22; // r13
  __int64 v23; // r12
  volatile signed __int64 v24; // rax
  volatile signed __int64 *v25; // rcx
  signed __int64 v26; // rax
  __int64 v27; // r13
  int v28; // eax
  unsigned int v29; // eax
  _QWORD *v31; // rax
  __int64 v32; // r13
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int16 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int16 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rdx
  signed __int64 v42; // r8
  signed __int64 v43; // rdx
  signed __int64 v44; // rtt
  unsigned __int16 v45; // [rsp+30h] [rbp-49h]
  unsigned __int16 v46; // [rsp+30h] [rbp-49h]
  __int64 v47; // [rsp+38h] [rbp-41h]
  _QWORD *v48; // [rsp+38h] [rbp-41h]
  int v49; // [rsp+40h] [rbp-39h] BYREF
  int v50; // [rsp+48h] [rbp-31h] BYREF
  __int64 v51; // [rsp+50h] [rbp-29h]
  __int64 v52; // [rsp+58h] [rbp-21h]
  __int64 v53; // [rsp+60h] [rbp-19h]
  _QWORD *v54; // [rsp+68h] [rbp-11h]
  _QWORD v55[2]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v56[2]; // [rsp+80h] [rbp+7h] BYREF

  v54 = a3;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  v7 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    TppAdjustRunningThreadGoal(a1);
    v6 = TppNumberNodes;
  }
  v9 = 0;
  v10 = 0;
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      if ( ++v10 >= v6 )
        goto LABEL_8;
    }
    v7 = v10;
  }
LABEL_8:
  v49 = Number;
  v13 = *(_DWORD *)(a1 + 428);
  v14 = v7 < v6 ? v7 : 0;
  v15 = -1LL;
  v16 = *(unsigned int *)(a2 + 344);
  if ( (_DWORD)v14 == (_DWORD)v16 )
  {
    if ( v13 == -1 && !*(_BYTE *)(a2 + 352) )
    {
      *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v14));
    }
  }
  else
  {
    if ( v13 == -1 )
    {
      if ( *(_BYTE *)(a2 + 352) )
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v16), 0xFFFFFFFF);
      else
        *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v14));
    }
    *(_DWORD *)(a2 + 344) = v14;
    v38 = *(_QWORD *)(a1 + 48);
    v46 = *(_WORD *)(v38 + 16 * v16 + 8);
    v39 = *(_WORD *)(v38 + 16LL * (unsigned int)v14 + 8);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v38) )
      v40 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v40 = 2147353478LL;
    if ( *(_BYTE *)v40 )
      TppETWWorkerNodeSwitch(a1, v16, v14, v46, v39);
    if ( v46 != v39 )
    {
      v55[0] = 0LL;
      v55[1] = v39;
      NtSetInformationThread(-2LL, 30LL, v55, 16LL);
      NtSetInformationThread(-2LL, 13LL, &v49, 4LL);
    }
  }
  v17 = v14;
  if ( *(_DWORD *)(a1 + 428) != -1
    || *(_DWORD *)(a2 + 348) < 0x10u
    || (unsigned int)TppAreNodeWorkersSteadyState(a1, v15) )
  {
    v18 = 3 * v14;
    v47 = 0LL;
    v19 = (__int64 *)(a1 + 16);
    v53 = 3 * v14;
    v51 = a1 + 16;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = *v19;
      v52 = v20;
      v22 = (volatile signed __int64 *)(v21 + 8 * v18);
      RtlAcquireSRWLockExclusive(v22 + 2);
      v23 = *v22;
      if ( *(volatile signed __int64 **)(*v22 + 8) != v22
        || (v24 = *(_QWORD *)v23, *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23) )
      {
        __fastfail(3u);
      }
      *v22 = v24;
      v25 = v22 + 2;
      *(_QWORD *)(v24 + 8) = v22;
      v26 = _InterlockedCompareExchange64(v22 + 2, 0LL, 1LL);
      if ( v26 != 1 )
      {
        do
        {
          v41 = 3LL;
          v42 = v26 & 6;
          if ( v42 != 2 )
            v41 = -1LL;
          v43 = v26 + v41;
          v44 = v26;
          v26 = _InterlockedCompareExchange64(v25, v43, v26);
        }
        while ( v44 != v26 );
        if ( v42 == 2 )
          RtlpWakeSRWLock(v25, v43, 0LL);
      }
      if ( (volatile signed __int64 *)v23 == v22 )
        v23 = 0LL;
      if ( v23 )
        break;
      v20 = v47 + 1;
      v18 = v53;
      v19 = (__int64 *)(v51 + 8);
      ++v47;
      v51 += 8LL;
      if ( v52 >= 2 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    if ( *(_BYTE *)(a1 + 377) )
      return 0LL;
    v31 = (_QWORD *)(a1 + 16);
LABEL_32:
    v32 = 0LL;
    v48 = v31;
    v33 = v31;
    while ( 1 )
    {
      v23 = TppQueueRemoveHead(*v33 + 24LL * v17);
      if ( v23 )
        break;
      v33 = v48;
      v17 = v17 + 1 < TppNumberNodes ? v17 + 1 : 0;
      if ( v17 == (_DWORD)v14 )
      {
        v33 = v48 + 1;
        ++v32;
        ++v48;
        if ( v32 > 2 )
        {
          v31 = (_QWORD *)(a1 + 16);
          if ( !*(_BYTE *)(a1 + 377) )
            goto LABEL_32;
          return 0LL;
        }
      }
    }
  }
  *v54 = v23 - 16;
  v27 = *(unsigned int *)(a2 + 344);
  v50 = *(unsigned __int8 *)(v23 - 16 + 12);
  v28 = *(_DWORD *)(a1 + 428);
  if ( v17 == (_DWORD)v27 )
  {
    if ( v28 == -1 && !*(_BYTE *)(a2 + 352) )
    {
      *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v17));
    }
  }
  else
  {
    if ( v28 == -1 )
    {
      if ( *(_BYTE *)(a2 + 352) )
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v27), 0xFFFFFFFF);
      else
        *(_BYTE *)(a2 + 352) = 1;
      v34 = v17;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v17));
    }
    else
    {
      v34 = v17;
    }
    *(_DWORD *)(a2 + 344) = v17;
    v35 = *(_QWORD *)(a1 + 48);
    v36 = *(_WORD *)(v35 + 16 * v34 + 8);
    v45 = *(_WORD *)(v35 + 16 * v27 + 8);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v35) )
      v37 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v37 = 2147353478LL;
    if ( *(_BYTE *)v37 )
      TppETWWorkerNodeSwitch(a1, v27, v17, v45, v36);
    if ( v45 != v36 )
    {
      v56[0] = 0LL;
      v56[1] = v36;
      NtSetInformationThread(-2LL, 30LL, v56, 16LL);
      NtSetInformationThread(-2LL, 13LL, &v50, 4LL);
    }
  }
  if ( v17 == (_DWORD)v14 )
  {
    v29 = *(_DWORD *)(a2 + 348);
    v9 = v29 + 1;
    if ( v29 >= 0x10 )
      v9 = 16;
  }
  *(_DWORD *)(a2 + 348) = v9;
  return 1LL;
}
