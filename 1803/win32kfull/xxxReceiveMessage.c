/*
 * XREFs of xxxReceiveMessage @ 0x1C0049610
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C006009C (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010BB84 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01B381C (xxxUserYield.c)
 * Callees:
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00431F0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r15
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v17; // rcx
  int v18; // edi
  unsigned int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // r8
  int *v22; // rcx
  int v23; // eax
  __int64 *v24; // rax
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  int v27; // edi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  _QWORD *v32; // rcx
  __m128i *v33; // r15
  __int64 v34; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  __m128i *v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // rdx
  unsigned int *v59; // rcx
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 *v66; // rax
  __int64 v67; // rbx
  ULONG_PTR v68; // r9
  unsigned __int64 v69; // r8
  __int64 v70; // rdx
  char v71; // di
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rcx
  void *v76; // rbx
  __int64 v77; // rcx
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 *v81; // rax
  int *v82; // rdx
  int v83; // ebx
  __int64 *v84; // rax
  int *v85; // rcx
  int v86; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-1F8h]
  int v89; // [rsp+50h] [rbp-1C8h]
  _QWORD *v90; // [rsp+58h] [rbp-1C0h]
  int v91; // [rsp+60h] [rbp-1B8h]
  int v92; // [rsp+60h] [rbp-1B8h]
  __int64 v93; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v94; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v95; // [rsp+78h] [rbp-1A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-198h]
  __int64 v97; // [rsp+88h] [rbp-190h]
  __int64 v98; // [rsp+90h] [rbp-188h]
  int v99[2]; // [rsp+98h] [rbp-180h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-178h]
  __int64 v101; // [rsp+A8h] [rbp-170h]
  __int64 v102; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-160h]
  __int64 v104[2]; // [rsp+C8h] [rbp-150h] BYREF
  int v105; // [rsp+D8h] [rbp-140h]
  __int64 v106; // [rsp+E0h] [rbp-138h]
  _QWORD *v107; // [rsp+E8h] [rbp-130h]
  __int64 v108[3]; // [rsp+F0h] [rbp-128h] BYREF
  int v109; // [rsp+108h] [rbp-110h]
  __int64 v110; // [rsp+110h] [rbp-108h]
  _QWORD *v111; // [rsp+118h] [rbp-100h]
  _QWORD v112[3]; // [rsp+128h] [rbp-F0h] BYREF
  _QWORD v113[3]; // [rsp+140h] [rbp-D8h] BYREF
  _QWORD v114[3]; // [rsp+158h] [rbp-C0h] BYREF
  int v115; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v116; // [rsp+178h] [rbp-A0h]
  __int64 v117; // [rsp+180h] [rbp-98h]
  __int64 v118; // [rsp+188h] [rbp-90h]
  _BYTE v119[24]; // [rsp+1A0h] [rbp-78h] BYREF
  __m128i v120; // [rsp+1B8h] [rbp-60h] BYREF
  __m128i v121; // [rsp+1C8h] [rbp-50h]
  __int64 v122; // [rsp+1D8h] [rbp-40h]

  v97 = a1;
  v101 = a1;
  v2 = 0LL;
  v95 = 0LL;
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
  v11 = v6[4];
  v98 = v11;
  if ( v11 )
  {
    v9 = *(_QWORD *)(a1 + 472);
    v12 = *(_QWORD *)v9;
    if ( (*(_DWORD *)(v11 + 480) & 0x100) != 0 )
      v13 = v12 | 0x1000;
    else
      v13 = v12 & 0xFFFFFFFFFFFFEFFFuLL;
    *(_QWORD *)v9 = v13;
  }
  v14 = *((_DWORD *)v6 + 21);
  if ( (v14 & 0x200) != 0 )
  {
    if ( !v11 )
    {
      v15 = v6[14];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
      v102 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v102;
      v103 = v15;
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
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
        SfnDWORD((volatile signed __int32 *)v6[14], v19, v6[7], v6[9], v6[6], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 440LL) &= ~4u;
      v22 = *(int **)(gptiCurrent + 440LL);
      v23 = *v22;
      if ( v18 )
        *v22 = v23 | 8;
      else
        *v22 = v23 & 0xFFFFFFF7;
    }
    else
    {
      v24 = (__int64 *)v6[14];
      if ( v24 )
        v2 = *v24;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v6[6])(v2, *((unsigned int *)v6 + 26), v6[7], v6[9]);
    }
    if ( !v11 )
      ThreadUnlock1(v22, v20, v21);
    goto LABEL_30;
  }
  if ( (v14 & 7) == 0 )
  {
    v26 = *(_DWORD **)(a1 + 440);
    v27 = *v26 & 8;
    v89 = v27;
    v100 = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(a1 + 504) = v6;
    *v26 |= 2u;
    **(_DWORD **)(a1 + 440) |= 8u;
    if ( !v11 )
    {
      v28 = v6[14];
      v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
      v102 = *(_QWORD *)(v29 + 408);
      *(_QWORD *)(v29 + 408) = &v102;
      v103 = v28;
      if ( v28 )
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
    }
    if ( *((_DWORD *)v6 + 26) == 788 )
    {
      v120 = 0uLL;
      v121 = 0uLL;
      v122 = 0LL;
      v30 = 0LL;
      v97 = 0LL;
      v31 = 0LL;
      v98 = 0LL;
      v32 = (_QWORD *)v6[12];
      v90 = v32;
      v33 = (__m128i *)v32[2];
      v34 = *(int *)(*v32 + 48LL);
      v91 = v34;
      BugCheckParameter3 = *(_QWORD *)(a1 + 1360);
      switch ( (int)v34 )
      {
        case 0:
        case 1:
          if ( !v33 )
            goto LABEL_43;
          v120 = *v33;
          v121.m128i_i64[0] = v33[1].m128i_i64[0];
          if ( (unsigned int)(_mm_cvtsi128_si32(v120) - 512) > 0xE )
            goto LABEL_43;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
          v36 = *((unsigned int *)v6 + 33);
          if ( ((*(_DWORD *)(CurrentProcessWin32Process + 280) >> 8) & 0x1FF) != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
          {
            v93 = *(__int64 *)((char *)v120.m128i_i64 + 4);
            LogicalToPhysicalDPIPoint(&v93, &v93, v36, 0LL);
            v38 = PsGetCurrentProcessWin32Process(v37);
            PhysicalToLogicalDPIPoint(&v93, &v93, *(unsigned int *)(v38 + 280), 0LL);
            *(__int64 *)((char *)v120.m128i_i64 + 4) = v93;
          }
          goto LABEL_42;
        case 2:
        case 10:
          goto LABEL_69;
        case 7:
          if ( v33 )
          {
            v120 = *v33;
            v121 = v33[1];
            v122 = v33[2].m128i_i64[0];
            if ( ((*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 280) >> 8) & 0x1FF) != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
            {
              LogicalToPhysicalDPIPoint(&v120, &v120, *((unsigned int *)v6 + 33), 0LL);
              v41 = PsGetCurrentProcessWin32Process(v40);
              PhysicalToLogicalDPIPoint(&v120, &v120, *(unsigned int *)(v41 + 280), 0LL);
            }
LABEL_42:
            v32 = v90;
          }
          goto LABEL_43;
        case 13:
          if ( v33 )
          {
            v120 = *v33;
            v121.m128i_i64[0] = v33[1].m128i_i64[0];
            if ( *((_DWORD *)v32 + 6) != -1 )
            {
              v42 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 872LL);
              v43 = v32[3];
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v43 <= (unsigned int)v42 )
                {
                  if ( (_DWORD)v43 != (_DWORD)v42
                    || (v44 = HIDWORD(v43), v45 = HIDWORD(v42), (_DWORD)v44 != (_DWORD)v45)
                    && (_DWORD)v44 != -1
                    && (_DWORD)v45 != -1 )
                  {
                    v120.m128i_i32[2] |= 2u;
                  }
                }
              }
            }
          }
          goto LABEL_57;
        case 14:
          if ( v33 )
          {
            v120 = *v33;
            v121 = v33[1];
            if ( *((_DWORD *)v32 + 6) != -1 )
            {
              v46 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 872LL);
              v47 = v32[3];
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v47 <= (unsigned int)v46 )
                {
                  if ( (_DWORD)v47 != (_DWORD)v46
                    || (v48 = HIDWORD(v46), v49 = HIDWORD(v47), (_DWORD)v49 != (_DWORD)v48)
                    && (_DWORD)v49 != -1
                    && (_DWORD)v48 != -1 )
                  {
                    v120.m128i_i32[3] |= 2u;
                  }
                }
              }
            }
          }
LABEL_57:
          v30 = *(_QWORD *)(a1 + 1344);
          v97 = v30;
          v31 = *(_QWORD *)(a1 + 1352);
          v98 = v31;
          *(_QWORD *)(a1 + 1344) = v32[3];
          *(_QWORD *)(a1 + 1352) = v32[4];
          *(_QWORD *)(a1 + 1360) = &v120;
LABEL_43:
          if ( !v33 )
            goto LABEL_70;
          v39 = &v120;
          break;
        default:
          UserSetLastError(87LL, v34);
          v32 = v90;
LABEL_69:
          v33 = 0LL;
LABEL_70:
          v39 = (__m128i *)v32[2];
          break;
      }
      v95 = xxxCallHook2((struct tagHOOK *)*v32, *((_DWORD *)v32 + 2), v6[11], (__int64)v39, v99, 0);
      if ( (unsigned int)(v91 - 13) <= 1 )
      {
        *(_QWORD *)(a1 + 1344) = v30;
        *(_QWORD *)(a1 + 1352) = v31;
        *(_QWORD *)(a1 + 1360) = BugCheckParameter3;
      }
      if ( (*((_DWORD *)v6 + 21) & 5) != 0 || !v33 || v91 < 0 )
        goto LABEL_81;
      if ( v91 <= 1 )
      {
        if ( (unsigned int)(v120.m128i_i32[0] - 512) <= 0xE )
        {
          v64 = *(_DWORD *)(PsGetCurrentProcessWin32Process((unsigned int)v91) + 280) >> 8;
          LOWORD(v64) = v64 & 0x1FF;
          if ( (_WORD)v64 != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
          {
            v94 = *(__int64 *)((char *)v120.m128i_i64 + 4);
            v65 = PsGetCurrentProcessWin32Process(v64);
            LogicalToPhysicalDPIPoint(&v94, &v94, *(unsigned int *)(v65 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v94, &v94, *((unsigned int *)v6 + 33), 0LL);
            *(__int64 *)((char *)v120.m128i_i64 + 4) = v94;
          }
        }
      }
      else
      {
        if ( v91 == 7 )
        {
          v62 = *(_DWORD *)(PsGetCurrentProcessWin32Process(7LL) + 280) >> 8;
          LOWORD(v62) = v62 & 0x1FF;
          if ( (_WORD)v62 != ((*((_DWORD *)v6 + 33) >> 8) & 0x1FF) )
          {
            v63 = PsGetCurrentProcessWin32Process(v62);
            LogicalToPhysicalDPIPoint(&v120, &v120, *(unsigned int *)(v63 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v120, &v120, *((unsigned int *)v6 + 33), 0LL);
          }
          *v33 = v120;
          v33[1] = v121;
          v33[2].m128i_i64[0] = v122;
          goto LABEL_81;
        }
        if ( v91 != 13 )
        {
          if ( v91 == 14 )
          {
            *v33 = v120;
            v33[1] = v121;
          }
          goto LABEL_81;
        }
      }
      *v33 = v120;
      v33[1].m128i_i64[0] = v121.m128i_i64[0];
    }
    else
    {
      v92 = *(_DWORD *)(gptiCurrent + 1396LL);
      *(_DWORD *)(gptiCurrent + 1396LL) = *((_DWORD *)v6 + 32);
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x20) != 0 )
      {
        v9 = *((unsigned int *)v6 + 26);
        if ( (unsigned int)v9 >= 0x400
          || (v10 = 0x4000LL, (MessageTable[v9] & 0x4000) == 0)
          || (*(_BYTE *)(*(_QWORD *)(v6[14] + 40LL) + 18LL) & 4) == 0 )
        {
          v66 = (__int64 *)v6[14];
          if ( v66 )
            v106 = *v66;
          else
            v106 = 0LL;
          v105 = v9;
          v104[1] = v6[11];
          v104[0] = v6[12];
          v107 = v6;
          xxxCallHook(0, 1uLL, (__int64)v104, 4);
        }
      }
      if ( (*((_DWORD *)v6 + 21) & 7) != 0 )
        goto LABEL_82;
      v67 = v6[14];
      if ( !v67 )
        goto LABEL_82;
      v68 = 0LL;
      BugCheckParameter3 = 0LL;
      v69 = (unsigned __int16)*(_QWORD *)v67;
      v99[1] = (unsigned __int16)*(_QWORD *)v67;
      if ( v69 >= *(_QWORD *)(gpsi + 8LL)
        || (v68 = gSharedInfo[1] + (unsigned int)(v69 * LODWORD(gSharedInfo[2])),
            v70 = 3 * v69,
            *(_QWORD *)(gpKernelHandleTable + 24 * v69) != v67)
        || *(_BYTE *)(v68 + 24) != 1 )
      {
        KeBugCheckEx(0x197u, 1uLL, v6[14], v68, 1uLL);
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v67 + 40) + 18LL) & 4) != 0 )
      {
        v71 = 0;
        v72 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70);
        v112[0] = *(_QWORD *)(v72 + 408);
        *(_QWORD *)(v72 + 408) = v112;
        v112[1] = v67;
        _InterlockedIncrement((volatile signed __int32 *)(v67 + 8));
        v75 = *((unsigned int *)v6 + 26);
        if ( (unsigned int)v75 < 0x400 )
        {
          v73 = 512LL;
          if ( (MessageTable[v75] & 0x200) != 0 || (_DWORD)v75 == 537 && (v6[11] & 0x8000LL) != 0 )
          {
            *((_DWORD *)v6 + 21) |= 0x20u;
            if ( v11 )
            {
              v71 = 1;
              v76 = *(void **)v11;
              PushW32ThreadLock(*(_QWORD *)v11, v119, DereferenceKernelStack);
              ObfReferenceObject(v76);
              PsReferenceKernelStack(v76);
            }
          }
        }
        v77 = v6[14];
        v78 = *(_QWORD *)(*(_QWORD *)(v77 + 40) + 120LL);
        if ( v78 < 7 )
          v79 = (*(&gServerHandlers + v78))((struct tagWND *)v77, *((_DWORD *)v6 + 26), (HWND)v6[11], v6[12]);
        else
          v79 = 0LL;
        v95 = v79;
        if ( v71 )
          PopAndFreeW32ThreadLock(v119);
      }
      else
      {
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread();
        v80 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(gpKernelHandleTable, v70) )
        {
          v81 = (__int64 *)PsGetThreadWin32Thread(BugCheckParameter3);
          if ( v81 )
            v80 = *v81;
        }
        v113[0] = *(_QWORD *)(v80 + 408);
        *(_QWORD *)(v80 + 408) = v113;
        v113[1] = v67;
        _InterlockedIncrement((volatile signed __int32 *)(v67 + 8));
        v82 = *(int **)(gptiCurrent + 440LL);
        v83 = *v82;
        *v82 |= 0x10u;
        xxxSendMessageToClient(
          (struct tagWND *)v6[14],
          *((_DWORD *)v6 + 26),
          (HWND)v6[11],
          v6[12],
          (struct tagSMS *)v6,
          1,
          &v95);
        v77 = gptiCurrent;
        v73 = *(_QWORD *)(gptiCurrent + 440LL);
        *(_DWORD *)v73 ^= ((unsigned __int8)*(_DWORD *)v73 ^ (unsigned __int8)v83) & 0x10;
      }
      ThreadUnlock1(v77, v73, v74);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL));
      if ( ((*(_WORD *)(a1 + 672) | *(_WORD *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x2000) != 0
        && (*((_DWORD *)v6 + 21) & 4) == 0 )
      {
        v9 = *((unsigned int *)v6 + 26);
        if ( (unsigned int)v9 >= 0x400
          || (MessageTable[v9] & 0x4000) == 0
          || (*(_BYTE *)(*(_QWORD *)(v6[14] + 40LL) + 18LL) & 4) == 0 )
        {
          v84 = (__int64 *)v6[14];
          if ( v84 )
            v110 = *v84;
          else
            v110 = 0LL;
          v109 = v9;
          v108[2] = v6[11];
          v108[1] = v6[12];
          v108[0] = v95;
          v111 = v6;
          xxxCallHook(0, 1uLL, (__int64)v108, 12);
        }
      }
      *(_DWORD *)(gptiCurrent + 1396LL) = v92;
    }
LABEL_81:
    v27 = v89;
LABEL_82:
    v50 = *((unsigned int *)v6 + 21);
    if ( (*((_DWORD *)v6 + 21) & 0x101) == 0x100 )
    {
      v50 = (unsigned int)v50 | 1;
      *((_DWORD *)v6 + 21) = v50;
      if ( (v50 & 4) == 0 )
      {
        v51 = 33;
        if ( (v50 & 0x400) != 0 )
          v51 = 289;
        v115 = v51;
        v116 = v6[6];
        v117 = v6[7];
        v118 = v95;
        v52 = v6[14];
        v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
        v114[0] = *(_QWORD *)(v53 + 408);
        *(_QWORD *)(v53 + 408) = v114;
        v114[1] = v52;
        if ( v52 )
          _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
        LODWORD(BugCheckParameter4) = 0;
        xxxInterSendMsgEx(
          (_QWORD *)v6[14],
          *((_DWORD *)v6 + 26),
          0LL,
          0LL,
          BugCheckParameter4,
          v6[8],
          &v115,
          1,
          *((_DWORD *)v6 + 21) & 0x10000);
        ThreadUnlock1(v55, v54, v56);
      }
    }
    if ( !v11 )
      ThreadUnlock1(v50, v9, v10);
    v57 = v100;
    *(_QWORD *)(a1 + 504) = v100;
    v58 = v101;
    v59 = *(unsigned int **)(v101 + 440);
    v60 = *v59;
    if ( v57 )
      v61 = v60 | 2;
    else
      v61 = v60 & 0xFFFFFFFD;
    *v59 = v61;
    v85 = *(int **)(v58 + 440);
    v86 = *v85;
    if ( v27 )
      *v85 = v86 | 8;
    else
      *v85 = v86 & 0xFFFFFFF7;
  }
LABEL_30:
  LODWORD(v5) = EtwTraceEndRetrieveSendMessage(v6);
  v25 = *((_DWORD *)v6 + 21) & 0xFFFFBFFF;
  *((_DWORD *)v6 + 21) = v25;
  if ( (v25 & 8) != 0 )
  {
    LODWORD(v5) = UnlinkSendListSms(v6);
  }
  else if ( (v25 & 1) == 0 )
  {
    LODWORD(v5) = v95;
    v6[9] = v95;
    *((_DWORD *)v6 + 21) = v25 | 1;
    if ( v11 )
    {
      LODWORD(v5) = *(_DWORD *)(v11 + 480);
      if ( (v5 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v11 + 440) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v11 + 440) + 4LL) |= 0x200u;
        v5 = *(_QWORD *)(v11 + 440);
        if ( (*(_WORD *)(v5 + 10) & 0x200) != 0 )
          LODWORD(v5) = KeSetEvent(*(PRKEVENT *)(v11 + 720), 2, 0);
      }
    }
  }
  return v5;
}
