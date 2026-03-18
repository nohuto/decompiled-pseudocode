/*
 * XREFs of xxxReceiveMessage @ 0x1C003156C
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C011CAA8 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012B584 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01D604C (xxxUserYield.c)
 * Callees:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C002D410 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     UnlinkSendListSms @ 0x1C00D4EBC (UnlinkSendListSms.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C01F5668 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v15; // rcx
  int v16; // r12d
  unsigned int v17; // r10d
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  _QWORD *v27; // r10
  __int64 v28; // r12
  int v29; // eax
  ULONG_PTR v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  _BYTE *v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r8
  unsigned int *v58; // rdx
  unsigned int v59; // ecx
  unsigned int *v60; // rcx
  unsigned int v61; // eax
  unsigned int v62; // eax
  BOOL v63; // ecx
  __int64 *v64; // rax
  __int64 v65; // rbx
  ULONG_PTR v66; // r9
  unsigned __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  void *v72; // rbx
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 *v77; // rax
  int *v78; // rdx
  int v79; // ebx
  _DWORD *v80; // rdx
  BOOL v81; // ecx
  __int64 *v82; // rax
  unsigned int v83; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-1F8h]
  char v86; // [rsp+50h] [rbp-1C8h]
  _QWORD *v87; // [rsp+58h] [rbp-1C0h]
  int v88; // [rsp+60h] [rbp-1B8h]
  int v89; // [rsp+60h] [rbp-1B8h]
  __int64 v90; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v91; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v92; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v93; // [rsp+80h] [rbp-198h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-190h]
  __int64 v95; // [rsp+90h] [rbp-188h]
  __int64 v96; // [rsp+98h] [rbp-180h]
  int v97; // [rsp+A0h] [rbp-178h]
  int v98[3]; // [rsp+A4h] [rbp-174h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-168h]
  __int64 v100; // [rsp+B8h] [rbp-160h]
  __int64 v101; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-150h]
  __int64 v103[2]; // [rsp+D8h] [rbp-140h] BYREF
  int v104; // [rsp+E8h] [rbp-130h]
  __int64 v105; // [rsp+F0h] [rbp-128h]
  _QWORD *v106; // [rsp+F8h] [rbp-120h]
  __int64 v107[3]; // [rsp+100h] [rbp-118h] BYREF
  int v108; // [rsp+118h] [rbp-100h]
  __int64 v109; // [rsp+120h] [rbp-F8h]
  _QWORD *v110; // [rsp+128h] [rbp-F0h]
  _QWORD v111[3]; // [rsp+138h] [rbp-E0h] BYREF
  _QWORD v112[3]; // [rsp+150h] [rbp-C8h] BYREF
  _QWORD v113[3]; // [rsp+168h] [rbp-B0h] BYREF
  int v114; // [rsp+180h] [rbp-98h] BYREF
  __int64 v115; // [rsp+188h] [rbp-90h]
  __int64 v116; // [rsp+190h] [rbp-88h]
  __int64 v117; // [rsp+198h] [rbp-80h]
  _BYTE v118[24]; // [rsp+1B0h] [rbp-68h] BYREF
  _BYTE v119[40]; // [rsp+1C8h] [rbp-50h] BYREF

  v95 = a1;
  v100 = a1;
  v92 = 0LL;
  v2 = (_QWORD *)(a1 + 520);
  v3 = *(_QWORD **)(a1 + 520);
  if ( v3 == (_QWORD *)(a1 + 520) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) &= ~0x40u;
    v4 = *(_QWORD *)(a1 + 448);
    *(_WORD *)(v4 + 4) &= ~0x40u;
    return v4;
  }
  v5 = v3 - 2;
  --*(_DWORD *)(a1 + 536);
  v6 = *v3;
  v7 = (_QWORD *)v3[1];
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v7 != v3 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *v3 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v3 - 2);
  *((_DWORD *)v5 + 21) |= 0x4010u;
  if ( (_QWORD *)*v2 == v2 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 4LL) &= ~0x40u;
  }
  v9 = v5[4];
  v93 = v9;
  v96 = v9;
  if ( v9 )
  {
    v8 = *(_QWORD *)(a1 + 480);
    v10 = *(_QWORD *)v8;
    if ( (*(_DWORD *)(v9 + 488) & 0x100) != 0 )
      v11 = v10 | 0x1000;
    else
      v11 = v10 & 0xFFFFFFFFFFFFEFFFuLL;
    *(_QWORD *)v8 = v11;
  }
  v12 = *((_DWORD *)v5 + 21);
  if ( (v12 & 0x200) != 0 )
  {
    if ( !v9 )
    {
      v13 = v5[14];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v101 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v101;
      v102 = v13;
      if ( v13 )
        _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    }
    if ( (*((_DWORD *)v5 + 21) & 0x400) != 0 )
    {
      v15 = *(_DWORD **)(gptiCurrent + 448LL);
      v16 = *v15 & 8;
      *v15 |= 4u;
      **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
      v17 = *((_DWORD *)v5 + 26);
      if ( v17 == 576 || v17 == 281 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v17]])(
          v5[14],
          v17,
          v5[7],
          v5[9],
          v5[6],
          *(_QWORD *)(gpsi + 752LL),
          1,
          0LL);
      else
        SfnDWORD((volatile signed __int32 *)v5[14], v17, v5[7], v5[9], v5[6], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
      v18 = *(_DWORD **)(gptiCurrent + 448LL);
      v19 = *v18 | 8u;
      if ( !v16 )
        v19 = *v18 & 0xFFFFFFF7;
      *v18 = v19;
    }
    else
    {
      v20 = (__int64 *)v5[14];
      if ( v20 )
        v21 = *v20;
      else
        v21 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v5[6])(v21, *((unsigned int *)v5 + 26), v5[7], v5[9]);
    }
    if ( !v9 )
      ThreadUnlock1(v19, v18);
    goto LABEL_156;
  }
  if ( (v12 & 7) == 0 )
  {
    v22 = *(_DWORD **)(a1 + 448);
    v97 = *v22 & 8;
    v99 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v5;
    *v22 |= 2u;
    **(_DWORD **)(a1 + 448) |= 8u;
    if ( !v9 )
    {
      v23 = v5[14];
      v24 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v101 = *(_QWORD *)(v24 + 416);
      *(_QWORD *)(v24 + 416) = &v101;
      v102 = v23;
      if ( v23 )
        _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
    }
    if ( *((_DWORD *)v5 + 26) == 788 )
    {
      memset(v119, 0, sizeof(v119));
      v25 = 0LL;
      v95 = 0LL;
      v26 = 0LL;
      v96 = 0LL;
      v27 = (_QWORD *)v5[12];
      v87 = v27;
      v28 = v27[2];
      v29 = *(_DWORD *)(*v27 + 48LL);
      v88 = v29;
      v30 = *(_QWORD *)(a1 + 1352);
      BugCheckParameter3 = v30;
      if ( v29 < 0 )
      {
LABEL_71:
        UserSetLastError(87LL);
        v28 = 0LL;
        goto LABEL_72;
      }
      if ( v29 <= 1 )
      {
        if ( v28 )
        {
          *(_OWORD *)v119 = *(_OWORD *)v28;
          *(_QWORD *)&v119[16] = *(_QWORD *)(v28 + 16);
          if ( (unsigned int)(_mm_cvtsi128_si32(*(__m128i *)v119) - 512) > 0xE )
            goto LABEL_73;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
          v42 = *((unsigned int *)v5 + 33);
          if ( ((*(_DWORD *)(CurrentProcessWin32Process + 280) >> 8) & 0x1FF) != ((*((_DWORD *)v5 + 33) >> 8) & 0x1FF) )
          {
            v90 = *(_QWORD *)&v119[4];
            LogicalToPhysicalDPIPoint(&v90, &v90, v42, 0LL);
            v44 = PsGetCurrentProcessWin32Process(v43);
            PhysicalToLogicalDPIPoint(&v90, &v90, *(unsigned int *)(v44 + 280), 0LL);
            *(_QWORD *)&v119[4] = v90;
          }
LABEL_72:
          v27 = v87;
LABEL_73:
          v45 = v119;
          if ( v28 )
            goto LABEL_75;
        }
      }
      else
      {
        if ( v29 == 2 )
        {
LABEL_66:
          v28 = 0LL;
          goto LABEL_74;
        }
        if ( v29 != 7 )
        {
          if ( v29 != 10 )
          {
            if ( v29 == 13 )
            {
              if ( v28 )
              {
                *(_OWORD *)v119 = *(_OWORD *)v28;
                *(_QWORD *)&v119[16] = *(_QWORD *)(v28 + 16);
                if ( *((_DWORD *)v27 + 6) != -1 )
                {
                  v35 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 880LL);
                  v36 = v27[3];
                  if ( gbEnforceUIPI )
                  {
                    if ( (unsigned int)v36 <= (unsigned int)v35 )
                    {
                      if ( (_DWORD)v36 != (_DWORD)v35
                        || (v37 = HIDWORD(v35), v38 = HIDWORD(v36), (_DWORD)v38 != (_DWORD)v37)
                        && (_DWORD)v38 != -1
                        && (_DWORD)v37 != -1 )
                      {
                        *(_DWORD *)&v119[8] |= 2u;
                      }
                    }
                  }
                }
              }
              goto LABEL_62;
            }
            if ( v29 == 14 )
            {
              InputTraceLogging::Mouse::HandleLowLevelHook();
              v27 = v87;
              if ( v28 )
              {
                *(_OWORD *)v119 = *(_OWORD *)v28;
                *(_OWORD *)&v119[16] = *(_OWORD *)(v28 + 16);
                if ( *((_DWORD *)v87 + 6) != -1 )
                {
                  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 880LL);
                  v32 = v87[3];
                  if ( gbEnforceUIPI )
                  {
                    if ( (unsigned int)v32 <= (unsigned int)v31 )
                    {
                      if ( (_DWORD)v32 != (_DWORD)v31
                        || (v33 = HIDWORD(v32), v34 = HIDWORD(v31), (_DWORD)v33 != (_DWORD)v34)
                        && (_DWORD)v33 != -1
                        && (_DWORD)v34 != -1 )
                      {
                        *(_DWORD *)&v119[12] |= 2u;
                      }
                    }
                  }
                }
              }
LABEL_62:
              v25 = *(_QWORD *)(a1 + 1336);
              v95 = v25;
              v26 = *(_QWORD *)(a1 + 1344);
              v96 = v26;
              *(_QWORD *)(a1 + 1336) = v27[3];
              *(_QWORD *)(a1 + 1344) = v27[4];
              *(_QWORD *)(a1 + 1352) = v119;
              goto LABEL_73;
            }
            goto LABEL_71;
          }
          goto LABEL_66;
        }
        if ( v28 )
        {
          *(_OWORD *)v119 = *(_OWORD *)v28;
          *(_OWORD *)&v119[16] = *(_OWORD *)(v28 + 16);
          *(_QWORD *)&v119[32] = *(_QWORD *)(v28 + 32);
          if ( ((*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 280) >> 8) & 0x1FF) != ((*((_DWORD *)v5 + 33) >> 8) & 0x1FF) )
          {
            LogicalToPhysicalDPIPoint(v119, v119, *((unsigned int *)v5 + 33), 0LL);
            v40 = PsGetCurrentProcessWin32Process(v39);
            PhysicalToLogicalDPIPoint(v119, v119, *(unsigned int *)(v40 + 280), 0LL);
          }
          goto LABEL_72;
        }
      }
LABEL_74:
      v45 = (_BYTE *)v27[2];
LABEL_75:
      v92 = xxxCallHook2((struct tagHOOK *)*v27, *((_DWORD *)v27 + 2), v5[11], (__int64)v45, v98, 0);
      if ( (unsigned int)(v88 - 13) <= 1 )
      {
        *(_QWORD *)(a1 + 1336) = v25;
        *(_QWORD *)(a1 + 1344) = v26;
        *(_QWORD *)(a1 + 1352) = BugCheckParameter3;
      }
      if ( (*((_DWORD *)v5 + 21) & 5) != 0 || !v28 || v88 < 0 )
        goto LABEL_92;
      if ( v88 <= 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v119 - 512) <= 0xE )
        {
          v48 = *(_DWORD *)(PsGetCurrentProcessWin32Process((unsigned int)v88) + 280) >> 8;
          v8 = 511LL;
          LOWORD(v48) = v48 & 0x1FF;
          if ( (_WORD)v48 != ((*((_DWORD *)v5 + 33) >> 8) & 0x1FF) )
          {
            v91 = *(_QWORD *)&v119[4];
            v49 = PsGetCurrentProcessWin32Process(v48);
            LogicalToPhysicalDPIPoint(&v91, &v91, *(unsigned int *)(v49 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v91, &v91, *((unsigned int *)v5 + 33), 0LL);
            *(_QWORD *)&v119[4] = v91;
          }
        }
      }
      else
      {
        if ( v88 == 7 )
        {
          v46 = *(_DWORD *)(PsGetCurrentProcessWin32Process(7LL) + 280) >> 8;
          v8 = 511LL;
          LOWORD(v46) = v46 & 0x1FF;
          if ( (_WORD)v46 != ((*((_DWORD *)v5 + 33) >> 8) & 0x1FF) )
          {
            v47 = PsGetCurrentProcessWin32Process(v46);
            LogicalToPhysicalDPIPoint(v119, v119, *(unsigned int *)(v47 + 280), 0LL);
            PhysicalToLogicalDPIPoint(v119, v119, *((unsigned int *)v5 + 33), 0LL);
          }
          *(_OWORD *)v28 = *(_OWORD *)v119;
          *(_OWORD *)(v28 + 16) = *(_OWORD *)&v119[16];
          *(_QWORD *)(v28 + 32) = *(_QWORD *)&v119[32];
          goto LABEL_92;
        }
        if ( v88 != 13 )
        {
          if ( v88 == 14 )
          {
            *(_OWORD *)v28 = *(_OWORD *)v119;
            *(_OWORD *)(v28 + 16) = *(_OWORD *)&v119[16];
          }
          goto LABEL_92;
        }
      }
      *(_OWORD *)v28 = *(_OWORD *)v119;
      *(_QWORD *)(v28 + 16) = *(_QWORD *)&v119[16];
LABEL_92:
      v9 = v93;
LABEL_93:
      v50 = *((unsigned int *)v5 + 21);
      if ( (*((_DWORD *)v5 + 21) & 0x101) == 0x100 )
      {
        v50 = (unsigned int)v50 | 1;
        *((_DWORD *)v5 + 21) = v50;
        if ( (v50 & 4) == 0 )
        {
          v51 = 33;
          if ( (v50 & 0x400) != 0 )
            v51 = 289;
          v114 = v51;
          v115 = v5[6];
          v116 = v5[7];
          v117 = v92;
          v52 = v5[14];
          v53 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v113[0] = *(_QWORD *)(v53 + 416);
          *(_QWORD *)(v53 + 416) = v113;
          v113[1] = v52;
          if ( v52 )
            _InterlockedAdd((volatile signed __int32 *)(v52 + 8), 1u);
          LODWORD(BugCheckParameter4) = 0;
          xxxInterSendMsgEx(
            (_QWORD *)v5[14],
            *((_DWORD *)v5 + 26),
            0LL,
            0LL,
            BugCheckParameter4,
            v5[8],
            &v114,
            1,
            *((_DWORD *)v5 + 21) & 0x10000);
          ThreadUnlock1(v55, v54);
        }
      }
      if ( !v9 )
        ThreadUnlock1(v50, v8);
      v56 = v99;
      *(_QWORD *)(a1 + 512) = v99;
      v57 = v100;
      v58 = *(unsigned int **)(v100 + 448);
      v59 = *v58 | 2;
      if ( !v56 )
        v59 = *v58 & 0xFFFFFFFD;
      *v58 = v59;
      v60 = *(unsigned int **)(v57 + 448);
      v61 = *v60;
      if ( v97 )
        v62 = v61 | 8;
      else
        v62 = v61 & 0xFFFFFFF7;
      *v60 = v62;
      goto LABEL_156;
    }
    v89 = *(_DWORD *)(gptiCurrent + 1388LL);
    *(_DWORD *)(gptiCurrent + 1388LL) = *((_DWORD *)v5 + 32);
    if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x20) != 0 )
    {
      v8 = *((unsigned int *)v5 + 26);
      v63 = (unsigned int)v8 < 0x400 && ((unsigned __int16)MessageTable[v8] >> 14) & 1;
      if ( !v63 || (*(_BYTE *)(*(_QWORD *)(v5[14] + 40LL) + 18LL) & 4) == 0 )
      {
        v64 = (__int64 *)v5[14];
        if ( v64 )
          v105 = *v64;
        else
          v105 = 0LL;
        v104 = v8;
        v103[1] = v5[11];
        v103[0] = v5[12];
        v106 = v5;
        xxxCallHook(0, 1uLL, (__int64)v103, 4);
      }
    }
    if ( (*((_DWORD *)v5 + 21) & 7) != 0 )
      goto LABEL_93;
    v65 = v5[14];
    if ( !v65 )
      goto LABEL_93;
    v66 = 0LL;
    BugCheckParameter3 = 0LL;
    v67 = (unsigned __int16)*(_QWORD *)v65;
    v98[1] = (unsigned __int16)*(_QWORD *)v65;
    if ( v67 >= *(_QWORD *)(gpsi + 8LL)
      || (v66 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v67 * *((_DWORD *)&gSharedInfo + 4)),
          *(_QWORD *)(gpKernelHandleTable + 24 * v67) != v65)
      || *(_BYTE *)(v66 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, v5[14], v66, 1uLL);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v65 + 40) + 18LL) & 4) == 0 )
    {
      BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread();
      v76 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(gpKernelHandleTable, 3 * v67) )
      {
        v77 = (__int64 *)PsGetThreadWin32Thread(BugCheckParameter3);
        if ( v77 )
          v76 = *v77;
      }
      v112[0] = *(_QWORD *)(v76 + 416);
      *(_QWORD *)(v76 + 416) = v112;
      v112[1] = v65;
      _InterlockedAdd((volatile signed __int32 *)(v65 + 8), 1u);
      v78 = *(int **)(gptiCurrent + 448LL);
      v79 = *v78;
      *v78 |= 0x10u;
      xxxSendMessageToClient(
        (struct tagWND *)v5[14],
        *((_DWORD *)v5 + 26),
        v5[11],
        v5[12],
        (struct tagSMS *)v5,
        1,
        &v92);
      v80 = *(_DWORD **)(gptiCurrent + 448LL);
      *v80 ^= ((unsigned __int8)*v80 ^ (unsigned __int8)v79) & 0x10;
      ThreadUnlock1(gptiCurrent, v80);
      goto LABEL_142;
    }
    v86 = 0;
    v68 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v111[0] = *(_QWORD *)(v68 + 416);
    *(_QWORD *)(v68 + 416) = v111;
    v111[1] = v65;
    _InterlockedAdd((volatile signed __int32 *)(v65 + 8), 1u);
    v70 = *((unsigned int *)v5 + 26);
    if ( (unsigned int)v70 >= 0x400 )
    {
      v71 = 0;
    }
    else
    {
      v69 = 512LL;
      if ( (MessageTable[v70] & 0x200) == 0 && ((_DWORD)v70 != 537 || (v5[11] & 0x8000LL) == 0) )
      {
LABEL_132:
        v73 = v5[14];
        v74 = *(_QWORD *)(*(_QWORD *)(v73 + 40) + 120LL);
        if ( v74 < 7 )
          v75 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v74))(
                  v73,
                  *((unsigned int *)v5 + 26),
                  v5[11],
                  v5[12]);
        else
          v75 = 0LL;
        v92 = v75;
        if ( v86 )
          PopAndFreeW32ThreadLock(v118);
        ThreadUnlock1(v73, v69);
LABEL_142:
        v8 = (unsigned int)(*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL));
        if ( ((*(_WORD *)(a1 + 680) | *(_WORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x2000) != 0
          && (*((_DWORD *)v5 + 21) & 4) == 0 )
        {
          v8 = *((unsigned int *)v5 + 26);
          v81 = (unsigned int)v8 < 0x400 && ((unsigned __int16)MessageTable[v8] >> 14) & 1;
          if ( !v81 || (*(_BYTE *)(*(_QWORD *)(v5[14] + 40LL) + 18LL) & 4) == 0 )
          {
            v82 = (__int64 *)v5[14];
            if ( v82 )
              v109 = *v82;
            else
              v109 = 0LL;
            v108 = v8;
            v107[2] = v5[11];
            v107[1] = v5[12];
            v107[0] = v92;
            v110 = v5;
            xxxCallHook(0, 1uLL, (__int64)v107, 12);
          }
        }
        *(_DWORD *)(gptiCurrent + 1388LL) = v89;
        goto LABEL_93;
      }
      v71 = 1;
    }
    if ( v71 )
    {
      *((_DWORD *)v5 + 21) |= 0x20u;
      if ( v9 )
      {
        v86 = 1;
        v72 = *(void **)v9;
        PushW32ThreadLock(*(_QWORD *)v9, v118, DereferenceKernelStack);
        ObfReferenceObject(v72);
        PsReferenceKernelStack(v72);
      }
    }
    goto LABEL_132;
  }
LABEL_156:
  LODWORD(v4) = EtwTraceEndRetrieveSendMessage(v5);
  v83 = *((_DWORD *)v5 + 21) & 0xFFFFBFFF;
  *((_DWORD *)v5 + 21) = v83;
  if ( (v83 & 8) != 0 )
  {
    LODWORD(v4) = UnlinkSendListSms(v5);
  }
  else if ( (v83 & 1) == 0 )
  {
    LODWORD(v4) = v92;
    v5[9] = v92;
    *((_DWORD *)v5 + 21) = v83 | 1;
    if ( v9 )
    {
      LODWORD(v4) = *(_DWORD *)(v9 + 488);
      if ( (v4 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v9 + 448) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v9 + 448) + 4LL) |= 0x200u;
        v4 = *(_QWORD *)(v9 + 448);
        if ( (*(_WORD *)(v4 + 10) & 0x200) != 0 )
          LODWORD(v4) = KeSetEvent(*(PRKEVENT *)(v9 + 736), 2, 0);
      }
    }
  }
  return v4;
}
