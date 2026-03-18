/*
 * XREFs of UsbhDmTimerDpc @ 0x1C000DB30
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r13
  __int64 v6; // r15
  KSPIN_LOCK *v7; // r12
  __int64 ****v8; // rbx
  KIRQL v9; // r11
  __int64 ***v10; // rdx
  __int64 **v11; // rax
  __int64 ***v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG TimeIncrement; // eax
  __int64 *v24; // rax
  __int64 *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 **v34; // rax
  __int64 *v35; // r10
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  ULONG v39; // eax
  __int64 v40; // r8
  __int64 v41; // rdx
  KIRQL v42; // r14
  __int64 v43; // rsi
  _QWORD *v44; // rbx
  _QWORD *v45; // rcx
  _QWORD *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r12d
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // ecx
  int v64; // eax
  _BYTE *v65; // [rsp+28h] [rbp-89h]
  __int64 v66; // [rsp+30h] [rbp-81h]
  _DWORD *v67; // [rsp+38h] [rbp-79h]
  __int64 v68; // [rsp+40h] [rbp-71h]
  _QWORD *v69; // [rsp+48h] [rbp-69h]
  int v70; // [rsp+50h] [rbp-61h]
  __int64 v71; // [rsp+58h] [rbp-59h]
  KIRQL v72; // [rsp+6Ch] [rbp-45h]
  __int64 *v73; // [rsp+88h] [rbp-29h] BYREF
  __int64 **v74; // [rsp+90h] [rbp-21h]
  _DWORD v75[4]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-9h]
  int v77; // [rsp+B0h] [rbp-1h]
  _BYTE v78[40]; // [rsp+B8h] [rbp+7h] BYREF

  v73 = 0LL;
  v5 = 1;
  v74 = 0LL;
  if ( !DeferredContext )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = DeferredContext[8];
  if ( !v6 )
    goto LABEL_100;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v7 = (KSPIN_LOCK *)(v6 + 3728);
  v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v8 = (__int64 ****)(v6 + 3744);
  v9 = v72;
  v74 = &v73;
  v73 = (__int64 *)&v73;
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 == (__int64 ***)v8 )
      break;
    if ( v10[1] != (__int64 **)v8 )
      goto LABEL_95;
    v11 = *v10;
    if ( (*v10)[1] != (__int64 *)v10 )
      goto LABEL_95;
    *v8 = (__int64 ***)v11;
    v12 = v10 - 7;
    v11[1] = (__int64 *)v8;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v13 = DeferredContext[8];
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 827616612;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v10;
      }
    }
    v15 = *((_DWORD *)v12 + 1) == 1;
    v12[8] = 0LL;
    *v10 = 0LL;
    if ( v15 )
    {
      v16 = *((int *)v12 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v17 = DeferredContext[8];
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 826633572;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v12;
          *(_QWORD *)(v18 + 24) = v16;
        }
      }
      *((_DWORD *)v12 + 1) = 2;
      v19 = v74;
      if ( *v74 != (__int64 *)&v73 )
        goto LABEL_95;
      v10[1] = v74;
      *v10 = &v73;
      *v19 = v10;
      v74 = (__int64 **)v10;
      v20 = *((int *)v12 + 3);
      if ( (int)v20 <= 0 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v51 = DeferredContext[8];
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
            *(_DWORD *)v52 = 860188004;
            *(_QWORD *)(v52 + 8) = 0LL;
            *(_QWORD *)(v52 + 16) = v12;
            *(_QWORD *)(v52 + 24) = 0LL;
          }
        }
        KeReleaseSpinLock(v7, v9);
        v53 = *((_DWORD *)v12 + 6);
        v75[0] = v53;
        v76 = 0LL;
        v77 = 0;
        memset(v78, 0, 0x24uLL);
        if ( dword_1C006F650 )
        {
          v62 = FdoExt(DeferredContext);
          LODWORD(v76) = *(_DWORD *)(v62 + 5192);
          WORD2(v76) = *(_WORD *)(v62 + 5196);
          v63 = *(_DWORD *)(v62 + 5200);
          HIWORD(v76) = v63;
          v75[2] = v63;
          v77 = *(_DWORD *)(v62 + 5228);
          UsbhEtwGetHubInfo(v62, v78);
          v71 = 0LL;
          v70 = 4;
          v69 = v12 + 9;
          v68 = 4LL;
          v67 = v75;
          HIDWORD(v66) = 0;
          v65 = v78;
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK, 0LL);
          v53 = *((_DWORD *)v12 + 6);
        }
        LODWORD(v66) = *((_DWORD *)v12 + 8);
        LODWORD(v65) = *((_DWORD *)v12 + 7);
        v54 = ((unsigned int (__fastcall *)(__int64 ***, _QWORD *, _QWORD, __int64 **, _BYTE *, __int64, _DWORD *, __int64, _QWORD *, int, __int64))v12[6])(
                v12,
                DeferredContext,
                v53,
                v12[5],
                v65,
                v66,
                v67,
                v68,
                v69,
                v70,
                v71);
        v55 = *((_DWORD *)v12 + 4);
        *((_DWORD *)v12 + 5) = v54;
        *((_DWORD *)v12 + 3) = v55;
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v56 = DeferredContext[8];
          if ( v56 )
          {
            v57 = *(_QWORD *)(v56 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v56 + 880)) & *(_DWORD *)(v56 + 884));
            *(_DWORD *)v57 = 1381133668;
            *(_QWORD *)(v57 + 8) = 0LL;
            *(_QWORD *)(v57 + 16) = v12;
            *(_QWORD *)(v57 + 24) = v54;
          }
        }
        v7 = (KSPIN_LOCK *)(v6 + 3728);
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
        v72 = v9;
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v58 = DeferredContext[8];
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
            *(_DWORD *)v59 = 876965220;
            *(_QWORD *)(v59 + 8) = 0LL;
            *(_QWORD *)(v59 + 16) = v12;
            *(_QWORD *)(v59 + 24) = 0LL;
          }
        }
      }
      else
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v21 = DeferredContext[8];
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v22 = 843410788;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 16) = v12;
            *(_QWORD *)(v22 + 24) = v20;
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        v9 = v72;
        *((_DWORD *)v12 + 5) = 1;
        *((_DWORD *)v12 + 3) += -15 - (TimeIncrement - 1) / 0x2710;
      }
    }
  }
  while ( 1 )
  {
    v35 = v73;
    if ( v73 == (__int64 *)&v73 )
      break;
    if ( (__int64 **)v73[1] != &v73 )
      goto LABEL_95;
    v24 = (__int64 *)*v73;
    if ( *(__int64 **)(*v73 + 8) != v73 )
      goto LABEL_95;
    v73 = (__int64 *)*v73;
    v24[1] = (__int64)&v73;
    v25 = v35 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v26 = DeferredContext[8];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 827485540;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = v25;
        *(_QWORD *)(v27 + 24) = v35;
      }
    }
    v28 = *((_DWORD *)v25 + 1);
    if ( v28 == 2 )
    {
      v29 = *((int *)v25 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v30 = DeferredContext[8];
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1112698212;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = v25;
          *(_QWORD *)(v31 + 24) = v29;
        }
      }
      if ( *((_DWORD *)v25 + 5) )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v32 = DeferredContext[8];
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 844262756;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 16) = v25;
            *(_QWORD *)(v33 + 24) = 0LL;
          }
        }
        *((_DWORD *)v25 + 1) = 1;
LABEL_35:
        v34 = *(__int64 ***)(v6 + 3752);
        if ( *v34 != (__int64 *)v8 )
          goto LABEL_95;
        *v35 = (__int64)v8;
        v35[1] = (__int64)v34;
        *v34 = v35;
        *(_QWORD *)(v6 + 3752) = v35;
      }
      else
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v60 = DeferredContext[8];
          if ( v60 )
          {
            v61 = *(_QWORD *)(v60 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v60 + 880)) & *(_DWORD *)(v60 + 884));
            *(_DWORD *)v61 = 861039972;
            *(_QWORD *)(v61 + 8) = 0LL;
            *(_QWORD *)(v61 + 16) = v25;
            *(_QWORD *)(v61 + 24) = 0LL;
          }
        }
        *((_DWORD *)v25 + 1) = 0;
      }
    }
    else if ( v28 == 1 )
    {
      Log((_DWORD)DeferredContext, 0x2000, 1684886068, (_DWORD)v25, 0LL);
      goto LABEL_35;
    }
  }
  v36 = *(int *)(v6 + 3736);
  if ( !(_DWORD)v36 )
  {
    Log((_DWORD)DeferredContext, 0x2000, 1680948785, 0, 0LL);
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    goto LABEL_44;
  }
  if ( *v8 == (__int64 ***)v8 )
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v47 = DeferredContext[8];
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
        *(_DWORD *)v48 = 1414360420;
        *(_QWORD *)(v48 + 8) = 0LL;
        *(_QWORD *)(v48 + 16) = 0LL;
        *(_QWORD *)(v48 + 24) = 0LL;
        LODWORD(v36) = *(_DWORD *)(v6 + 3736);
      }
    }
    if ( (_DWORD)v36 )
      *(_DWORD *)(v6 + 3736) = 2;
  }
  else
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v37 = DeferredContext[8];
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 1414807140;
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_QWORD *)(v38 + 16) = 0LL;
        *(_QWORD *)(v38 + 24) = v36;
      }
    }
    v39 = KeQueryTimeIncrement();
    KeSetTimer((PKTIMER)(v6 + 3848), (LARGE_INTEGER)(int)(-149999 - v39), (PKDPC)(v6 + 3784));
    v5 = 0;
LABEL_44:
    v9 = v72;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v40 = DeferredContext[8];
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 827878756;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = 0LL;
      *(_QWORD *)(v41 + 24) = 0LL;
    }
  }
  KeReleaseSpinLock(v7, v9);
  if ( !v5 )
    return;
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v43 = DeferredContext[8];
  if ( !v43 )
LABEL_100:
    UsbhTrapFatal_Dbg(DeferredContext, 0LL);
  if ( *(_DWORD *)v43 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v44 = (_QWORD *)(v43 + 2512);
  v45 = *(_QWORD **)(v43 + 2512);
  if ( v45 != (_QWORD *)(v43 + 2512) )
  {
    v46 = 0LL;
    if ( v45 )
    {
      while ( v45 != v44 )
      {
        v46 = v45 - 3;
        if ( v45 != (_QWORD *)24 && *(_DWORD *)v46 == 1397515890 )
        {
          if ( v46[2] == v6 + 3848 )
            break;
          v45 = (_QWORD *)*v45;
          if ( v45 )
            continue;
        }
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
      }
      if ( v46 && v45 != v44 )
      {
        v49 = (_QWORD *)*v45;
        if ( *(_QWORD **)(*v45 + 8LL) == v45 )
        {
          v50 = (_QWORD *)v45[1];
          if ( (_QWORD *)*v50 == v45 )
          {
            *v50 = v49;
            v49[1] = v50;
            ExFreePoolWithTag(v46, 0);
            goto LABEL_69;
          }
        }
LABEL_95:
        __fastfail(3u);
      }
    }
  }
  v64 = *(_DWORD *)(v43 + 2528);
  if ( v64 )
    *(_DWORD *)(v43 + 2528) = v64 - 1;
LABEL_69:
  if ( (_QWORD *)*v44 == v44 && !*(_DWORD *)(v43 + 2528) )
    KeSetEvent((PRKEVENT)(v43 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v42);
}
