/*
 * XREFs of UsbhDmTimerDpc @ 0x1C000D480
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001FF30 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r12
  __int64 v6; // r15
  __int64 ****v7; // rbx
  KIRQL v8; // r11
  __int64 ***v9; // rdx
  __int64 **v10; // rax
  __int64 ***v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  ULONG TimeIncrement; // eax
  __int64 *v23; // rax
  __int64 *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 **v33; // rax
  __int64 *v34; // r10
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  ULONG v38; // eax
  __int64 v39; // r8
  __int64 v40; // rdx
  KIRQL v41; // r14
  __int64 v42; // rsi
  _QWORD *v43; // rbx
  _QWORD *v44; // rcx
  _QWORD *v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // ecx
  int v63; // eax
  _BYTE *v64; // [rsp+28h] [rbp-89h]
  __int64 v65; // [rsp+30h] [rbp-81h]
  _DWORD *v66; // [rsp+38h] [rbp-79h]
  __int64 v67; // [rsp+40h] [rbp-71h]
  _QWORD *v68; // [rsp+48h] [rbp-69h]
  int v69; // [rsp+50h] [rbp-61h]
  __int64 v70; // [rsp+58h] [rbp-59h]
  KIRQL v71; // [rsp+6Ch] [rbp-45h]
  __int64 *v72; // [rsp+88h] [rbp-29h] BYREF
  __int64 **v73; // [rsp+90h] [rbp-21h]
  _DWORD v74[5]; // [rsp+98h] [rbp-19h] BYREF
  __int16 v75; // [rsp+ACh] [rbp-5h]
  __int16 v76; // [rsp+AEh] [rbp-3h]
  __int16 v77; // [rsp+B0h] [rbp-1h]
  __int16 v78; // [rsp+B2h] [rbp+1h]
  _BYTE v79[40]; // [rsp+B8h] [rbp+7h] BYREF

  v5 = 1;
  if ( !DeferredContext )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = DeferredContext[8];
  if ( !v6 )
    goto LABEL_100;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v7 = (__int64 ****)(v6 + 3744);
  v8 = v71;
  v73 = &v72;
  v72 = (__int64 *)&v72;
  while ( 1 )
  {
    v9 = *v7;
    if ( *v7 == (__int64 ***)v7 )
      break;
    if ( v9[1] != (__int64 **)v7 )
      goto LABEL_95;
    v10 = *v9;
    if ( (*v9)[1] != (__int64 *)v9 )
      goto LABEL_95;
    *v7 = (__int64 ***)v10;
    v11 = v9 - 7;
    v10[1] = (__int64 *)v7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v12 = DeferredContext[8];
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 827616612;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v11;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
    v14 = *((_DWORD *)v11 + 1) == 1;
    v11[8] = 0LL;
    *v9 = 0LL;
    if ( v14 )
    {
      v15 = *((int *)v11 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v16 = DeferredContext[8];
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 826633572;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = v11;
          *(_QWORD *)(v17 + 24) = v15;
        }
      }
      *((_DWORD *)v11 + 1) = 2;
      v18 = v73;
      if ( *v73 != (__int64 *)&v72 )
        goto LABEL_95;
      v9[1] = v73;
      *v9 = &v72;
      *v18 = v9;
      v73 = (__int64 **)v9;
      v19 = *((int *)v11 + 3);
      if ( (int)v19 <= 0 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v50 = DeferredContext[8];
          if ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
            *(_DWORD *)v51 = 860188004;
            *(_QWORD *)(v51 + 8) = 0LL;
            *(_QWORD *)(v51 + 16) = v11;
            *(_QWORD *)(v51 + 24) = 0LL;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
        v52 = *((unsigned int *)v11 + 6);
        v74[0] = *((_DWORD *)v11 + 6);
        if ( dword_1C006E650 )
        {
          v61 = FdoExt(DeferredContext);
          v74[4] = *(_DWORD *)(v61 + 5192);
          v75 = *(_WORD *)(v61 + 5196);
          v62 = *(_DWORD *)(v61 + 5200);
          v76 = v62;
          v74[2] = v62;
          v77 = *(_WORD *)(v61 + 5228);
          v78 = *(_WORD *)(v61 + 5230);
          UsbhEtwGetHubInfo(v61, v79);
          v70 = 0LL;
          v69 = 4;
          v68 = v11 + 9;
          v67 = 4LL;
          v66 = v74;
          HIDWORD(v65) = 0;
          v64 = v79;
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK, 0LL);
          v52 = *((unsigned int *)v11 + 6);
        }
        LODWORD(v65) = *((_DWORD *)v11 + 8);
        LODWORD(v64) = *((_DWORD *)v11 + 7);
        v53 = ((unsigned int (__fastcall *)(__int64 ***, _QWORD *, __int64, __int64 **, _BYTE *, __int64, _DWORD *, __int64, _QWORD *, int, __int64))v11[6])(
                v11,
                DeferredContext,
                v52,
                v11[5],
                v64,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70);
        v54 = *((_DWORD *)v11 + 4);
        *((_DWORD *)v11 + 5) = v53;
        *((_DWORD *)v11 + 3) = v54;
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v55 = DeferredContext[8];
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
            *(_DWORD *)v56 = 1381133668;
            *(_QWORD *)(v56 + 8) = 0LL;
            *(_QWORD *)(v56 + 16) = v11;
            *(_QWORD *)(v56 + 24) = v53;
          }
        }
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
        v71 = v8;
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v57 = DeferredContext[8];
          if ( v57 )
          {
            v58 = *(_QWORD *)(v57 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
            *(_DWORD *)v58 = 876965220;
            *(_QWORD *)(v58 + 8) = 0LL;
            *(_QWORD *)(v58 + 16) = v11;
            *(_QWORD *)(v58 + 24) = 0LL;
          }
        }
      }
      else
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v20 = DeferredContext[8];
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
            *(_DWORD *)v21 = 843410788;
            *(_QWORD *)(v21 + 8) = 0LL;
            *(_QWORD *)(v21 + 16) = v11;
            *(_QWORD *)(v21 + 24) = v19;
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        v8 = v71;
        *((_DWORD *)v11 + 5) = 1;
        *((_DWORD *)v11 + 3) += -15 - (TimeIncrement - 1) / 0x2710;
      }
    }
  }
  while ( 1 )
  {
    v34 = v72;
    if ( v72 == (__int64 *)&v72 )
      break;
    if ( (__int64 **)v72[1] != &v72 )
      goto LABEL_95;
    v23 = (__int64 *)*v72;
    if ( *(__int64 **)(*v72 + 8) != v72 )
      goto LABEL_95;
    v72 = (__int64 *)*v72;
    v23[1] = (__int64)&v72;
    v24 = v34 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v25 = DeferredContext[8];
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 827485540;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v24;
        *(_QWORD *)(v26 + 24) = v34;
      }
    }
    v27 = *((_DWORD *)v24 + 1);
    if ( v27 == 2 )
    {
      v28 = *((int *)v24 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v29 = DeferredContext[8];
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
          *(_DWORD *)v30 = 1112698212;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = v24;
          *(_QWORD *)(v30 + 24) = v28;
        }
      }
      if ( *((_DWORD *)v24 + 5) )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v31 = DeferredContext[8];
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = 844262756;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = v24;
            *(_QWORD *)(v32 + 24) = 0LL;
          }
        }
        *((_DWORD *)v24 + 1) = 1;
LABEL_35:
        v33 = *(__int64 ***)(v6 + 3752);
        if ( *v33 != (__int64 *)v7 )
          goto LABEL_95;
        *v34 = (__int64)v7;
        v34[1] = (__int64)v33;
        *v33 = v34;
        *(_QWORD *)(v6 + 3752) = v34;
      }
      else
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v59 = DeferredContext[8];
          if ( v59 )
          {
            v60 = *(_QWORD *)(v59 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v59 + 880)) & *(_DWORD *)(v59 + 884));
            *(_DWORD *)v60 = 861039972;
            *(_QWORD *)(v60 + 8) = 0LL;
            *(_QWORD *)(v60 + 16) = v24;
            *(_QWORD *)(v60 + 24) = 0LL;
          }
        }
        *((_DWORD *)v24 + 1) = 0;
      }
    }
    else if ( v27 == 1 )
    {
      Log((_DWORD)DeferredContext, 0x2000, 1684886068, (_DWORD)v24, 0LL);
      goto LABEL_35;
    }
  }
  v35 = *(int *)(v6 + 3736);
  if ( !(_DWORD)v35 )
  {
    Log((_DWORD)DeferredContext, 0x2000, 1680948785, 0, 0LL);
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    goto LABEL_44;
  }
  if ( *v7 == (__int64 ***)v7 )
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v46 = DeferredContext[8];
      if ( v46 )
      {
        v47 = *(_QWORD *)(v46 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
        *(_DWORD *)v47 = 1414360420;
        *(_QWORD *)(v47 + 8) = 0LL;
        *(_QWORD *)(v47 + 16) = 0LL;
        *(_QWORD *)(v47 + 24) = 0LL;
        LODWORD(v35) = *(_DWORD *)(v6 + 3736);
      }
    }
    if ( (_DWORD)v35 )
      *(_DWORD *)(v6 + 3736) = 2;
  }
  else
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v36 = DeferredContext[8];
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
        *(_DWORD *)v37 = 1414807140;
        *(_QWORD *)(v37 + 8) = 0LL;
        *(_QWORD *)(v37 + 16) = 0LL;
        *(_QWORD *)(v37 + 24) = v35;
      }
    }
    v38 = KeQueryTimeIncrement();
    KeSetTimer((PKTIMER)(v6 + 3848), (LARGE_INTEGER)(int)(-149999 - v38), (PKDPC)(v6 + 3784));
    v5 = 0;
LABEL_44:
    v8 = v71;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v39 = DeferredContext[8];
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 827878756;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = 0LL;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
  if ( !v5 )
    return;
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v42 = DeferredContext[8];
  if ( !v42 )
LABEL_100:
    UsbhTrapFatal_Dbg(DeferredContext, 0LL);
  if ( *(_DWORD *)v42 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v43 = (_QWORD *)(v42 + 2512);
  v44 = *(_QWORD **)(v42 + 2512);
  if ( v44 != (_QWORD *)(v42 + 2512) )
  {
    v45 = 0LL;
    if ( v44 )
    {
      while ( v44 != v43 )
      {
        v45 = v44 - 3;
        if ( v44 != (_QWORD *)24 && *(_DWORD *)v45 == 1397515890 )
        {
          if ( v45[2] == v6 + 3848 )
            break;
          v44 = (_QWORD *)*v44;
          if ( v44 )
            continue;
        }
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
      }
      if ( v45 && v44 != v43 )
      {
        v48 = (_QWORD *)*v44;
        if ( *(_QWORD **)(*v44 + 8LL) == v44 )
        {
          v49 = (_QWORD *)v44[1];
          if ( (_QWORD *)*v49 == v44 )
          {
            *v49 = v48;
            v48[1] = v49;
            ExFreePoolWithTag(v45, 0);
            goto LABEL_69;
          }
        }
LABEL_95:
        __fastfail(3u);
      }
    }
  }
  v63 = *(_DWORD *)(v42 + 2528);
  if ( v63 )
    *(_DWORD *)(v42 + 2528) = v63 - 1;
LABEL_69:
  if ( (_QWORD *)*v43 == v43 && !*(_DWORD *)(v42 + 2528) )
    KeSetEvent((PRKEVENT)(v42 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v41);
}
