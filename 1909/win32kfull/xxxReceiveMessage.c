/*
 * XREFs of xxxReceiveMessage @ 0x1C003F6A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00FEDC8 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010DC0C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01EB5EC (xxxUserYield.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     UnlinkSendListSms @ 0x1C002A88C (UnlinkSendListSms.c)
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0040E40 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C020C35C (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v17; // rcx
  int v18; // edi
  unsigned int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rax
  __int64 *v24; // rax
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __m128i *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __m128i *v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // ecx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // al
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  bool v67; // zf
  _DWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  __int64 *v81; // rax
  _QWORD *v82; // rbx
  ULONG_PTR v83; // r9
  unsigned __int64 v84; // r8
  char v85; // r15
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rcx
  void *v90; // rbx
  __int64 v91; // rcx
  unsigned __int64 v92; // rax
  __int64 v93; // r15
  __int64 *v94; // rax
  int *v95; // rdx
  int v96; // ebx
  __int64 v97; // rax
  __int64 *v98; // rax
  _DWORD *v99; // rax
  __int64 v101; // [rsp+50h] [rbp-1A8h]
  int v102; // [rsp+58h] [rbp-1A0h]
  __int64 v103; // [rsp+60h] [rbp-198h] BYREF
  __int64 v104; // [rsp+68h] [rbp-190h] BYREF
  unsigned int v105; // [rsp+70h] [rbp-188h]
  __int64 v106; // [rsp+78h] [rbp-180h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-178h]
  __int64 v108; // [rsp+88h] [rbp-170h] BYREF
  __int64 v109; // [rsp+90h] [rbp-168h]
  __int64 v110; // [rsp+98h] [rbp-160h]
  int v111[2]; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v112; // [rsp+A8h] [rbp-150h]
  __int64 v113; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD *v114; // [rsp+B8h] [rbp-140h]
  __int64 v115; // [rsp+C0h] [rbp-138h]
  __int64 v116; // [rsp+C8h] [rbp-130h] BYREF
  _QWORD *v117; // [rsp+D0h] [rbp-128h]
  __int64 v118; // [rsp+D8h] [rbp-120h]
  __int64 v119; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v120; // [rsp+E8h] [rbp-110h]
  __int64 v121; // [rsp+F0h] [rbp-108h]
  __int64 v122[3]; // [rsp+F8h] [rbp-100h] BYREF
  __int64 v123[2]; // [rsp+110h] [rbp-E8h] BYREF
  int v124; // [rsp+120h] [rbp-D8h]
  __int64 v125; // [rsp+128h] [rbp-D0h]
  _QWORD *v126; // [rsp+130h] [rbp-C8h]
  __int64 v127[3]; // [rsp+138h] [rbp-C0h] BYREF
  int v128; // [rsp+150h] [rbp-A8h]
  __int64 v129; // [rsp+158h] [rbp-A0h]
  _QWORD *v130; // [rsp+160h] [rbp-98h]
  _DWORD v131[2]; // [rsp+168h] [rbp-90h] BYREF
  __int64 v132; // [rsp+170h] [rbp-88h]
  __int64 v133; // [rsp+178h] [rbp-80h]
  __int64 v134; // [rsp+180h] [rbp-78h]
  __int128 v135; // [rsp+188h] [rbp-70h]
  __m128i v136; // [rsp+1A0h] [rbp-58h] BYREF
  __m128i v137; // [rsp+1B0h] [rbp-48h]
  __int64 v138; // [rsp+1C0h] [rbp-38h]

  v103 = a1;
  v2 = 0LL;
  v106 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v3 = (_QWORD *)(a1 + 512);
  v4 = *(_QWORD **)(a1 + 512);
  if ( v4 == (_QWORD *)(a1 + 512) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= ~0x40u;
    v5 = *(_QWORD *)(a1 + 440);
    *(_WORD *)(v5 + 4) &= ~0x40u;
    return v5;
  }
  v6 = v4 - 2;
  --*(_DWORD *)(a1 + 528);
  v7 = *v4;
  v8 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v8 != v4 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *v4 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v4 - 2);
  *((_DWORD *)v6 + 21) |= 0x4010u;
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) &= ~0x40u;
  }
  v12 = v6[4];
  v104 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD **)(a1 + 472);
    if ( (*(_DWORD *)(v12 + 480) & 0x100) != 0 )
      *v13 |= 0x1000uLL;
    else
      *v13 &= ~0x1000uLL;
  }
  v14 = *((_DWORD *)v6 + 21);
  if ( (v14 & 0x200) != 0 )
  {
    if ( !v12 )
    {
      v15 = v6[14];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v108 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v108;
      v109 = v15;
      if ( v15 )
        HMLockObject(v15);
    }
    if ( (*((_DWORD *)v6 + 21) & 0x400) != 0 )
    {
      v17 = *(_DWORD **)(gptiCurrent + 440LL);
      v18 = *v17 & 8;
      *v17 |= 4u;
      **(_DWORD **)(gptiCurrent + 440LL) |= 8u;
      v19 = *((_DWORD *)v6 + 26);
      if ( v19 == 576 || v19 == 281 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v19]])(
          v6[14],
          v19,
          v6[7],
          v6[9],
          v6[6],
          *(_QWORD *)(gpsi + 752LL),
          1,
          0LL);
      else
        SfnDWORD((_QWORD *)v6[14], v19, v6[7], v6[9], v6[6], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 440LL) &= ~4u;
      v23 = *(_DWORD **)(gptiCurrent + 440LL);
      if ( v18 )
        *v23 |= 8u;
      else
        *v23 &= ~8u;
    }
    else
    {
      v24 = (__int64 *)v6[14];
      if ( v24 )
        v2 = *v24;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v6[6])(v2, *((unsigned int *)v6 + 26), v6[7], v6[9]);
    }
    if ( !v12 )
      ThreadUnlock1(v21, v20, v22);
    goto LABEL_29;
  }
  if ( (v14 & 7) == 0 )
  {
    v26 = *(_DWORD **)(a1 + 440);
    v27 = *v26 & 8;
    v102 = v27;
    v112 = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(a1 + 504) = v6;
    *v26 |= 2u;
    **(_DWORD **)(a1 + 440) |= 8u;
    if ( !v12 )
    {
      v28 = v6[14];
      v29 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v9 = *(_QWORD *)(v29 + 408);
      v108 = v9;
      *(_QWORD *)(v29 + 408) = &v108;
      v109 = v28;
      if ( v28 )
        HMLockObject(v28);
    }
    if ( *((_DWORD *)v6 + 26) == 788 )
    {
      v136 = 0uLL;
      v137 = 0uLL;
      v138 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = v6[12];
      v101 = v32;
      v33 = *(__m128i **)(v32 + 16);
      v34 = *(int *)(*(_QWORD *)v32 + 48LL);
      v105 = v34;
      BugCheckParameter3 = *(_QWORD *)(a1 + 1376);
      switch ( (int)v34 )
      {
        case 0:
        case 1:
          if ( !v33 )
            goto LABEL_72;
          v136 = *v33;
          v137.m128i_i64[0] = v33[1].m128i_i64[0];
          if ( (unsigned int)(_mm_cvtsi128_si32(v136) - 512) > 0xE )
            goto LABEL_49;
          v35 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v32, v34) + 280) >> 8;
          LOWORD(v35) = v35 & 0x1FF;
          v36 = *((unsigned int *)v6 + 33);
          if ( (_WORD)v35 != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
            goto LABEL_47;
          v38 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v35, 511LL) + 280);
          LOBYTE(v38) = v38 & 0xF;
          if ( (_BYTE)v38 != 2
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38, v37),
                v40 = 1,
                (*(_DWORD *)(CurrentProcessWin32Process + 280) & 0x20000000) == 0) )
          {
            v40 = 0;
          }
          v36 = *((unsigned int *)v6 + 33);
          if ( (*((_DWORD *)v6 + 33) & 0xF) != 2 || (v41 = 1, (v36 & 0x20000000) == 0) )
            v41 = 0;
          if ( v40 != v41 )
          {
LABEL_47:
            v103 = *(__int64 *)((char *)v136.m128i_i64 + 4);
            LogicalToPhysicalDPIPoint(&v103, &v103, v36, 0LL);
            v44 = PsGetCurrentProcessWin32Process(v43, v42);
            PhysicalToLogicalDPIPoint(&v103, &v103, *(unsigned int *)(v44 + 280), 0LL);
            *(__int64 *)((char *)v136.m128i_i64 + 4) = v103;
          }
          goto LABEL_48;
        case 2:
        case 10:
          goto LABEL_71;
        case 7:
          if ( !v33 )
            goto LABEL_72;
          v136 = *v33;
          v137 = v33[1];
          v138 = v33[2].m128i_i64[0];
          v46 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v32, v34) + 280) >> 8;
          LOWORD(v46) = v46 & 0x1FF;
          v47 = *((unsigned int *)v6 + 33);
          if ( (_WORD)v46 != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
            goto LABEL_60;
          v49 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v46, 511LL) + 280);
          LOBYTE(v49) = v49 & 0xF;
          if ( (_BYTE)v49 != 2
            || (v50 = PsGetCurrentProcessWin32Process(v49, v48), v51 = 1, (*(_DWORD *)(v50 + 280) & 0x20000000) == 0) )
          {
            v51 = 0;
          }
          v47 = *((unsigned int *)v6 + 33);
          if ( (*((_DWORD *)v6 + 33) & 0xF) != 2 || (v52 = 1, (v47 & 0x20000000) == 0) )
            v52 = 0;
          if ( v51 != v52 )
          {
LABEL_60:
            LogicalToPhysicalDPIPoint(&v136, &v136, v47, 0LL);
            v55 = PsGetCurrentProcessWin32Process(v54, v53);
            PhysicalToLogicalDPIPoint(&v136, &v136, *(unsigned int *)(v55 + 280), 0LL);
          }
LABEL_48:
          v32 = v101;
          goto LABEL_49;
        case 13:
          if ( v33 )
          {
            v136 = *v33;
            v137.m128i_i64[0] = v33[1].m128i_i64[0];
            if ( *(_DWORD *)(v32 + 24) != -1 )
            {
              v56 = CheckAccess(v32 + 24, *(_QWORD *)(a1 + 416) + 872LL);
              v32 = v101;
              if ( !v56 )
                v136.m128i_i32[2] |= 2u;
            }
          }
          goto LABEL_65;
        case 14:
          InputTraceLogging::Mouse::HandleLowLevelHook();
          v32 = v101;
          if ( v33 )
          {
            v136 = *v33;
            v137 = v33[1];
            if ( *(_DWORD *)(v101 + 24) != -1 )
            {
              v57 = CheckAccess(v101 + 24, *(_QWORD *)(a1 + 416) + 872LL);
              v32 = v101;
              if ( !v57 )
                v136.m128i_i32[3] |= 2u;
            }
          }
LABEL_65:
          v30 = *(_QWORD *)(a1 + 1360);
          v31 = *(_QWORD *)(a1 + 1368);
          *(_QWORD *)(a1 + 1360) = *(_QWORD *)(v32 + 24);
          *(_QWORD *)(a1 + 1368) = *(_QWORD *)(v32 + 32);
          *(_QWORD *)(a1 + 1376) = &v136;
LABEL_49:
          if ( !v33 )
            goto LABEL_72;
          v45 = &v136;
          break;
        default:
          UserSetLastError(87LL, v34, 0x1C0000000LL, v11);
          v32 = v101;
LABEL_71:
          v33 = 0LL;
LABEL_72:
          v45 = *(__m128i **)(v32 + 16);
          break;
      }
      v106 = xxxCallHook2(*(struct tagHOOK **)v32, *(_DWORD *)(v32 + 8), v6[11], (__int64)v45, v111, 0);
      v58 = v105;
      if ( v105 - 13 <= 1 )
      {
        *(_QWORD *)(a1 + 1360) = v30;
        *(_QWORD *)(a1 + 1368) = v31;
        *(_QWORD *)(a1 + 1376) = BugCheckParameter3;
      }
      if ( (*((_DWORD *)v6 + 21) & 5) != 0 || !v33 || (int)v58 < 0 )
        goto LABEL_83;
      if ( (int)v58 <= 1 )
      {
        if ( (unsigned int)(v136.m128i_i32[0] - 512) <= 0xE )
        {
          v75 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v58, v9) + 280) >> 8;
          v9 = 511LL;
          LOWORD(v75) = v75 & 0x1FF;
          if ( (_WORD)v75 != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
            goto LABEL_114;
          v77 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v75, 511LL) + 280);
          LOBYTE(v77) = v77 & 0xF;
          if ( (_BYTE)v77 != 2
            || (v78 = PsGetCurrentProcessWin32Process(v77, v76), v9 = 1LL, (*(_DWORD *)(v78 + 280) & 0x20000000) == 0) )
          {
            v9 = 0LL;
          }
          v75 = *((unsigned int *)v6 + 33);
          if ( (*((_DWORD *)v6 + 33) & 0xF) != 2 || (v79 = 1, (v75 & 0x20000000) == 0) )
            v79 = 0;
          if ( (_DWORD)v9 != v79 )
          {
LABEL_114:
            v104 = *(__int64 *)((char *)v136.m128i_i64 + 4);
            v80 = PsGetCurrentProcessWin32Process(v75, v9);
            LogicalToPhysicalDPIPoint(&v104, &v104, *(unsigned int *)(v80 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v104, &v104, *((unsigned int *)v6 + 33), 0LL);
            *(__int64 *)((char *)v136.m128i_i64 + 4) = v104;
          }
        }
      }
      else
      {
        if ( (_DWORD)v58 == 7 )
        {
          v69 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v58, v9) + 280) >> 8;
          v9 = 511LL;
          LOWORD(v69) = v69 & 0x1FF;
          if ( (_WORD)v69 != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
            goto LABEL_103;
          v71 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v69, 511LL) + 280);
          LOBYTE(v71) = v71 & 0xF;
          if ( (_BYTE)v71 != 2
            || (v72 = PsGetCurrentProcessWin32Process(v71, v70), v9 = 1LL, (*(_DWORD *)(v72 + 280) & 0x20000000) == 0) )
          {
            v9 = 0LL;
          }
          v69 = *((unsigned int *)v6 + 33);
          if ( (*((_DWORD *)v6 + 33) & 0xF) != 2 || (v73 = 1, (v69 & 0x20000000) == 0) )
            v73 = 0;
          if ( (_DWORD)v9 != v73 )
          {
LABEL_103:
            v74 = PsGetCurrentProcessWin32Process(v69, v9);
            LogicalToPhysicalDPIPoint(&v136, &v136, *(unsigned int *)(v74 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v136, &v136, *((unsigned int *)v6 + 33), 0LL);
          }
          *v33 = v136;
          v33[1] = v137;
          v33[2].m128i_i64[0] = v138;
          goto LABEL_83;
        }
        if ( (_DWORD)v58 != 13 )
        {
          if ( (_DWORD)v58 == 14 )
          {
            *v33 = v136;
            v33[1] = v137;
          }
          goto LABEL_83;
        }
      }
      *v33 = v136;
      v33[1].m128i_i64[0] = v137.m128i_i64[0];
    }
    else
    {
      v105 = *(_DWORD *)(gptiCurrent + 1412LL);
      *(_DWORD *)(gptiCurrent + 1412LL) = *((_DWORD *)v6 + 32);
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x20) != 0 )
      {
        v9 = *((unsigned int *)v6 + 26);
        if ( (unsigned int)v9 >= 0x400
          || (v10 = 0x4000LL, (MessageTable[v9] & 0x4000) == 0)
          || (*(_BYTE *)(*(_QWORD *)(v6[14] + 40LL) + 18LL) & 4) == 0 )
        {
          v81 = (__int64 *)v6[14];
          if ( v81 )
            v125 = *v81;
          else
            v125 = 0LL;
          v124 = v9;
          v123[1] = v6[11];
          v123[0] = v6[12];
          v126 = v6;
          xxxCallHook(0, 1uLL, (__int64)v123, 4);
        }
      }
      if ( (*((_DWORD *)v6 + 21) & 7) != 0 )
        goto LABEL_84;
      v82 = (_QWORD *)v6[14];
      if ( !v82 )
        goto LABEL_84;
      v83 = 0LL;
      BugCheckParameter3 = 0LL;
      v84 = (unsigned __int16)*v82;
      v111[1] = (unsigned __int16)*v82;
      if ( v84 >= *(_QWORD *)(gpsi + 8LL)
        || (v83 = gSharedInfo[1] + (unsigned int)(v84 * LODWORD(gSharedInfo[2])),
            *(_QWORD **)(gpKernelHandleTable + 24 * v84) != v82)
        || *(_BYTE *)(v83 + 24) != 1 )
      {
        KeBugCheckEx(0x197u, 1uLL, v6[14], v83, 1uLL);
      }
      if ( (*(_BYTE *)(v82[5] + 18LL) & 4) != 0 )
      {
        v113 = 0LL;
        v114 = 0LL;
        v115 = 0LL;
        memset(v122, 0, sizeof(v122));
        v85 = 0;
        v86 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v113 = *(_QWORD *)(v86 + 408);
        *(_QWORD *)(v86 + 408) = &v113;
        v114 = v82;
        HMLockObject(v82);
        v89 = *((unsigned int *)v6 + 26);
        if ( (unsigned int)v89 < 0x400 )
        {
          v87 = 512LL;
          if ( (MessageTable[v89] & 0x200) != 0 || (_DWORD)v89 == 537 && (v6[11] & 0x8000LL) != 0 )
          {
            *((_DWORD *)v6 + 21) |= 0x20u;
            if ( v12 )
            {
              v85 = 1;
              v90 = *(void **)v12;
              PushW32ThreadLock(*(_QWORD *)v12, v122, (__int64)DereferenceKernelStack);
              ObfReferenceObject(v90);
              PsReferenceKernelStack(v90);
            }
          }
        }
        v91 = v6[14];
        v92 = *(_QWORD *)(*(_QWORD *)(v91 + 40) + 120LL);
        if ( v92 < 7 )
          v106 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v92])(
                   v91,
                   *((unsigned int *)v6 + 26),
                   v6[11],
                   v6[12]);
        if ( v85 )
          PopAndFreeW32ThreadLock(v122);
      }
      else
      {
        v116 = 0LL;
        v117 = 0LL;
        v118 = 0LL;
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread();
        v93 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(gpKernelHandleTable, 3 * v84, v84) )
        {
          v94 = (__int64 *)PsGetThreadWin32Thread(BugCheckParameter3);
          if ( v94 )
            v93 = *v94;
        }
        v116 = *(_QWORD *)(v93 + 408);
        *(_QWORD *)(v93 + 408) = &v116;
        v117 = v82;
        HMLockObject(v82);
        v95 = *(int **)(gptiCurrent + 440LL);
        v96 = *v95;
        *v95 |= 0x10u;
        xxxSendMessageToClient(
          (struct tagWND *)v6[14],
          *((_DWORD *)v6 + 26),
          v6[11],
          v6[12],
          (struct tagSMS *)v6,
          1,
          &v106);
        v91 = gptiCurrent;
        v87 = *(_QWORD *)(gptiCurrent + 440LL);
        *(_DWORD *)v87 ^= ((unsigned __int8)*(_DWORD *)v87 ^ (unsigned __int8)v96) & 0x10;
      }
      ThreadUnlock1(v91, v87, v88);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL));
      if ( ((*(_WORD *)(a1 + 672) | *(_WORD *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x2000) != 0
        && (*((_DWORD *)v6 + 21) & 4) == 0 )
      {
        v9 = *((unsigned int *)v6 + 26);
        if ( (unsigned int)v9 >= 0x400
          || (MessageTable[v9] & 0x4000) == 0
          || (v97 = v6[14]) != 0 && (*(_BYTE *)(*(_QWORD *)(v97 + 40) + 18LL) & 4) == 0 )
        {
          v98 = (__int64 *)v6[14];
          if ( v98 )
            v129 = *v98;
          else
            v129 = 0LL;
          v128 = v9;
          v127[2] = v6[11];
          v127[1] = v6[12];
          v127[0] = v106;
          v130 = v6;
          xxxCallHook(0, 1uLL, (__int64)v127, 12);
        }
      }
      *(_DWORD *)(gptiCurrent + 1412LL) = v105;
    }
LABEL_83:
    v27 = v102;
LABEL_84:
    v59 = *((unsigned int *)v6 + 21);
    if ( (*((_DWORD *)v6 + 21) & 0x101) == 0x100 )
    {
      v131[1] = 0;
      v135 = 0LL;
      v59 = (unsigned int)v59 | 1;
      *((_DWORD *)v6 + 21) = v59;
      if ( (v59 & 4) == 0 )
      {
        v119 = 0LL;
        v120 = 0LL;
        v121 = 0LL;
        v60 = 33;
        if ( (v59 & 0x400) != 0 )
          v60 = 289;
        v131[0] = v60;
        v132 = v6[6];
        v133 = v6[7];
        v134 = v106;
        v61 = v6[14];
        v62 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v119 = *(_QWORD *)(v62 + 408);
        *(_QWORD *)(v62 + 408) = &v119;
        v120 = v61;
        if ( v61 )
          HMLockObject(v61);
        xxxInterSendMsgEx(
          v6[14],
          *((unsigned int *)v6 + 26),
          0LL,
          0LL,
          0,
          v6[8],
          v131,
          1,
          *((_DWORD *)v6 + 21) & 0x10000);
        ThreadUnlock1(v64, v63, v65);
      }
    }
    if ( !v12 )
      ThreadUnlock1(v59, v9, v10);
    v66 = v112;
    *(_QWORD *)(a1 + 504) = v112;
    v67 = v66 == 0;
    v68 = *(_DWORD **)(a1 + 440);
    if ( v67 )
      *v68 &= ~2u;
    else
      *v68 |= 2u;
    v99 = *(_DWORD **)(a1 + 440);
    if ( v27 )
      *v99 |= 8u;
    else
      *v99 &= ~8u;
  }
LABEL_29:
  LODWORD(v5) = EtwTraceEndRetrieveSendMessage(v6);
  v25 = *((_DWORD *)v6 + 21) & 0xFFFFBFFF;
  *((_DWORD *)v6 + 21) = v25;
  if ( (v25 & 8) != 0 )
  {
    LODWORD(v5) = UnlinkSendListSms(v6);
  }
  else if ( (v25 & 1) == 0 )
  {
    LODWORD(v5) = v106;
    v6[9] = v106;
    *((_DWORD *)v6 + 21) = v25 | 1;
    if ( v12 )
    {
      LODWORD(v5) = *(_DWORD *)(v12 + 480);
      if ( (v5 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v12 + 440) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v12 + 440) + 4LL) |= 0x200u;
        v5 = *(_QWORD *)(v12 + 440);
        if ( (*(_WORD *)(v5 + 10) & 0x200) != 0 )
          LODWORD(v5) = KeSetEvent(*(PRKEVENT *)(v12 + 728), 2, 0);
      }
    }
  }
  return v5;
}
