/*
 * XREFs of MiProcessWorkingSets @ 0x140047BB0
 * Callers:
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnWsToExpansionList @ 0x14004AD10 (MiReturnWsToExpansionList.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiLogProcessWorkingSetsStop @ 0x14008A670 (MiLogProcessWorkingSetsStop.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     MiComputeSystemTrimCriteria @ 0x1400F3484 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140122A74 (MiComputeAgingPercent.c)
 *     MiDrainZeroLookasides @ 0x140126FFC (MiDrainZeroLookasides.c)
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019AE8C (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x1402A5108 (KeRetryOutswapProcess.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402C7F3C (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x1402C87B0 (MiOrderTrimList.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  PRKEVENT v2; // rdi
  _QWORD *v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // rdx
  ULONG64 v7; // r8
  const struct _TlgProvider_t *v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // r14
  int v12; // r15d
  __int16 v13; // r13
  _QWORD *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdi
  int v17; // ecx
  _QWORD *v18; // rax
  int v19; // eax
  _QWORD *v20; // rcx
  char v21; // r13
  unsigned int v22; // eax
  int Blink; // r12d
  _QWORD *v25; // rax
  bool v26; // zf
  _QWORD *v27; // rcx
  struct _LIST_ENTRY *v28; // rcx
  _QWORD *v29; // r9
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int16 v36; // cx
  __int64 v37; // rax
  _QWORD *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // eax
  const GUID *v42; // [rsp+20h] [rbp-E0h]
  const GUID *v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  __int16 v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+54h] [rbp-ACh]
  unsigned int v52; // [rsp+58h] [rbp-A8h]
  _QWORD *v53; // [rsp+60h] [rbp-A0h]
  PRKEVENT Event; // [rsp+68h] [rbp-98h]
  unsigned int v55; // [rsp+70h] [rbp-90h] BYREF
  int v56; // [rsp+74h] [rbp-8Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int16 *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  unsigned int *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  __int64 *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  __int64 *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  __int64 *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]

  v2 = *(PRKEVENT *)(a1 + 7800);
  v49 = a2;
  v4 = (_QWORD *)a1;
  v53 = (_QWORD *)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Event = v2;
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters();
  MiComputeAgingPercent(v4);
  v5 = MiComputeSystemTrimCriteria(v4, a2);
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    v48 = *(_BYTE *)(a2 + 2);
    v35 = v4[975];
    v55 = v5;
    v65 = v6;
    v67 = 2LL;
    v36 = *(_WORD *)(v35 + 2354);
    v58 = *(_QWORD *)(a2 + 80);
    v59 = *(_QWORD *)(a2 + 72);
    v60 = v4[1008];
    v61 = v4[1056];
    v62 = v4[1070];
    v64 = &v48;
    v66 = &v50;
    v68 = &v55;
    v70 = &v58;
    v72 = &v59;
    v74 = &v60;
    v76 = &v61;
    v78 = &v62;
    v50 = v36;
    v69 = 4LL;
    v71 = 8LL;
    v73 = 8LL;
    v75 = 8LL;
    v77 = 8LL;
    v79 = 8LL;
    TlgWriteEx(v8, &unk_14038D96B, v7, (ULONG)v8, v42, v43, 0xAu, &pData);
  }
  if ( (v5 & 5) != 0 )
    MiDrainZeroLookasides(v4, 0LL, 0LL, 0LL);
  v51 = 0;
  v52 = 0;
  if ( (v5 & 5) != 0 )
    LOBYTE(v2[2].Header.SignalState) = 1;
  if ( (v5 & 2) != 0 )
    ++HIDWORD(v2[3].Header.WaitListHead.Blink);
  v9 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    if ( *(_WORD *)&v2[98].Header.Size > 0xAu )
      *(_WORD *)&v2[98].Header.Size = 10;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( BYTE2(v2[2].Header.SignalState) == 1 )
    {
      v29 = v4 + 976;
      BYTE2(v2[2].Header.SignalState) = 0;
      v30 = (_QWORD *)v4[976];
      if ( v30 != v4 + 976 )
      {
        do
        {
          v31 = v30;
          v32 = v30;
          v30 = (_QWORD *)*v30;
          if ( (struct _LIST_ENTRY *)v31[9] >= v2[2].Header.WaitListHead.Blink )
          {
            if ( (_QWORD *)v30[1] != v32
              || (v33 = (_QWORD *)v32[1], (_QWORD *)*v33 != v32)
              || (*v33 = v30, v30[1] = v33, v34 = *v29, *(_QWORD **)(*v29 + 8LL) != v29) )
            {
LABEL_75:
              __fastfail(3u);
            }
            *v32 = v34;
            v32[1] = v29;
            *(_QWORD *)(v34 + 8) = v32;
            *v29 = v32;
          }
        }
        while ( v30 != v29 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  v10 = v49;
  v11 = v4 + 976;
  BYTE1(v2[2].Header.SignalState) = 1;
LABEL_18:
  while ( 2 )
  {
    v12 = 0;
    v56 = v5 & 1;
    if ( (v5 & 1) != 0 )
    {
      v37 = MiOrderTrimList(v4, MiTrimPassToAge[*(_BYTE *)v10 & 0x7F]);
      v10 = v49;
      *(_QWORD *)(v49 + 104) = v37;
    }
    v13 = ++LOWORD(v2[98].Header.Lock);
    *(_QWORD *)(v10 + 88) = *(_QWORD *)(v10 + 80) - *(_QWORD *)(v10 + 96);
    while ( 1 )
    {
      v14 = (_QWORD *)*v11;
      if ( (_QWORD *)*v11 == v11 )
        goto LABEL_40;
      if ( (_QWORD *)v14[1] != v11 )
        goto LABEL_75;
      v15 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
        goto LABEL_75;
      *v11 = v15;
      v16 = v14 - 3;
      *(_QWORD *)(v15 + 8) = v11;
      *v14 = 0LL;
      if ( *((_WORD *)v14 + 74) == v13 )
      {
        v25 = (_QWORD *)*v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 )
          goto LABEL_75;
        v26 = v56 == 0;
        v4 = v53;
        *v14 = v25;
        v14[1] = v11;
        v25[1] = v14;
        *v11 = v14;
        if ( v26 )
          goto LABEL_41;
        v41 = MiCheckSystemTrimEndCriteria(v4, v10, &LockHandle);
        v10 = v49;
        v2 = Event;
        if ( v41 )
          goto LABEL_41;
        goto LABEL_18;
      }
      *((_WORD *)v16 + 86) = v13;
      if ( (v5 & 0x40) != 0 && (struct _LIST_ENTRY *)v16[12] < Event[2].Header.WaitListHead.Blink )
        break;
      if ( v16[17] > 1uLL || (v16[23] & 7) != 0 )
      {
        v44 = *((_DWORD *)v16 + 46);
        BYTE1(v44) = BYTE1(v44) & 0xF9 | 2;
        *((_WORD *)v16 + 92) = v44;
        if ( *(_BYTE *)(v10 + 2) != 2 || (v39 = v16[17], v40 = v16[14], v39 > v40) && v39 - v40 >= 0x40000 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v12 = MiTrimOrAgeWorkingSet(v16, v49, v5);
          if ( v12 == 1 )
            *(_BYTE *)(v49 + 4) = 2;
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        }
        if ( (v5 & 0x40) == 0
          || (v17 = 0, (struct _LIST_ENTRY *)v16[12] < Event[2].Header.WaitListHead.Blink)
          || v16[13] )
        {
          v17 = 1;
        }
        v45 = *((_DWORD *)v16 + 46);
        if ( v17 )
        {
          BYTE1(v45) &= 0xF9u;
          *((_WORD *)v16 + 92) = v45;
          MiReturnWsToExpansionList(v16, 0LL);
        }
        else
        {
          BYTE1(v45) |= 6u;
          *((_WORD *)v16 + 92) = v45;
          v16[4] = v9;
          v9 = v16 + 4;
        }
        v10 = v49;
        if ( v12 == 1 )
          goto LABEL_40;
      }
      else if ( v16[13] )
      {
        v38 = (_QWORD *)v11[1];
        if ( (_QWORD *)*v38 != v11 )
          goto LABEL_75;
        *v14 = v11;
        v14[1] = v38;
        *v38 = v14;
        v11[1] = v14;
      }
      else
      {
        v46 = *((_DWORD *)v16 + 46);
        BYTE1(v46) |= 6u;
        *((_WORD *)v16 + 92) = v46;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeRetryOutswapProcess(v16 - 160);
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v47 = *((_DWORD *)v16 + 46);
        BYTE1(v47) &= 0xF9u;
        *((_WORD *)v16 + 92) = v47;
        MiReturnWsToExpansionList(v16, 0LL);
        v10 = v49;
      }
    }
    v18 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v18 != v11 )
      goto LABEL_75;
    *v14 = v11;
    v14[1] = v18;
    *v18 = v14;
    v11[1] = v14;
LABEL_40:
    v4 = v53;
LABEL_41:
    if ( (v5 & 0x40) != 0 )
    {
      while ( v9 )
      {
        v19 = *((_DWORD *)v9 + 38);
        v20 = v9 - 4;
        v9 = (_QWORD *)*v9;
        *((_WORD *)v20 + 92) = v19 & 0xF9FF;
        MiReturnWsToExpansionList(v20, 1LL);
      }
      v10 = v49;
    }
    v2 = Event;
    v21 = v5 | v51;
    v51 |= v5;
    if ( v12 != 1 )
    {
      v22 = v5 & 0xFFFFFF3C | v52;
      Blink = (int)Event[1].Header.WaitListHead.Blink;
      v52 = v22;
      if ( v22 == Blink )
      {
        BYTE1(Event[2].Header.SignalState) = 0;
        if ( (v21 & 5) != 0 )
          LOBYTE(v2[2].Header.SignalState) = 0;
        if ( Blink )
        {
          LODWORD(v2[1].Header.WaitListHead.Blink) = 0;
          KeSetEvent(v2, 0, 0);
        }
        if ( (v21 & 0x83) != 0 )
        {
          v27 = (_QWORD *)v49;
          *(_QWORD *)&v2[101].Header.Lock = *(_QWORD *)(v49 + 8);
          v2[101].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v27[2];
          v2[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v27[3];
          *(_QWORD *)&v2[102].Header.Lock = v27[4];
          v2[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v27[5];
          v2[102].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v27[6];
          *(_QWORD *)&v2[103].Header.Lock = v27[7];
          v28 = (struct _LIST_ENTRY *)v27[8];
          v2[103].Header.WaitListHead.Flink = v28;
          v2[100].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v28 + *(_QWORD *)&v2[103].Header.Lock);
        }
        goto LABEL_53;
      }
      v5 = v22 ^ Blink;
      if ( (v5 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v10 + 2) = 7;
      continue;
    }
    break;
  }
  BYTE1(Event[2].Header.SignalState) = 0;
  if ( (v21 & 5) != 0 )
    LOBYTE(v2[2].Header.SignalState) = 0;
LABEL_53:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return MiLogProcessWorkingSetsStop(v4);
}
