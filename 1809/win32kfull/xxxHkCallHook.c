/*
 * XREFs of xxxHkCallHook @ 0x1C002AC90
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     fnHkINLPMSG @ 0x1C0016960 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C001975C (fnHkINDWORD.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C002B480 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0107828 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0112CE4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0150BD4 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0205C8C (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0205E60 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0206000 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C02061A4 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02063B0 (fnHkOPTINLPEVENTMSG.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C022AC40 (--1CCheckLLHookTime@@QEAA@XZ.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 *v15; // rax
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v17; // r13
  __int64 v18; // rdx
  unsigned __int64 *v19; // r9
  int v20; // r8d
  __int64 v21; // rbx
  __int64 result; // rax
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // r14
  __int64 *v38; // rax
  unsigned __int64 *v39; // r14
  __int64 v40; // rdx
  _QWORD *v41; // r10
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  int v44; // r9d
  unsigned int v45; // r10d
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // r11d
  __int64 v49; // rcx
  __int64 *v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+58h] [rbp-B0h]
  _QWORD *v53; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v54; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-A0h]
  __int64 *v57; // [rsp+70h] [rbp-98h]
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+80h] [rbp-88h]
  unsigned __int64 v60; // [rsp+88h] [rbp-80h]
  __int64 v61; // [rsp+90h] [rbp-78h] BYREF
  int v62; // [rsp+98h] [rbp-70h]
  unsigned __int64 v63; // [rsp+A0h] [rbp-68h]
  __int64 v64; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v65; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v66; // [rsp+110h] [rbp+8h]
  unsigned int v67; // [rsp+110h] [rbp+8h]

  v6 = a2;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 68) != -1 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v13 = *(int *)(a1 + 68);
    v9 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v11 + 424) + 8 * v13 + 416);
    if ( (_DWORD)v13 != -1 )
    {
      v66 = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v13) )
      {
        v15 = (__int64 *)PsGetThreadWin32Thread(v66);
        if ( v15 )
          v14 = *v15;
      }
      *(_QWORD *)(*(_QWORD *)(v14 + 480) + 224LL) |= 0x200uLL;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v67 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
  v17 = (_DWORD *)(a1 + 64);
  v18 = *(_DWORD *)(a1 + 64) & 2;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
  {
    v57 = (__int64 *)(gpsi + 536LL);
    v50 = (__int64 *)(gpsi + 528LL);
    v19 = (unsigned __int64 *)(gpsi + 544LL);
  }
  else
  {
    v57 = (__int64 *)(gpsi + 728LL);
    v50 = (__int64 *)(gpsi + 720LL);
    v19 = (unsigned __int64 *)(gpsi + 736LL);
  }
  v20 = *(_DWORD *)(a1 + 48);
  if ( v20 == 4 )
  {
    v35 = *(_QWORD *)(a4 + 32);
LABEL_37:
    v52 = v35;
    v36 = 0LL;
    if ( v20 != 4 )
      v36 = (_QWORD *)a4;
    v53 = v36;
    if ( v20 != 4 )
      a4 = 0LL;
    if ( !v35 || (*(_DWORD *)(v35 + 84) & 5) == 0 )
    {
      v55 = KeGetCurrentThread();
      v37 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v18) )
      {
        v38 = (__int64 *)PsGetThreadWin32Thread(v55);
        if ( v38 )
          v37 = *v38;
      }
      v39 = *(unsigned __int64 **)(v37 + 480);
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v40 = *v50;
        v51 = *v50;
        v41 = v53;
      }
      else
      {
        v40 = *v57;
        v51 = *v57;
        v41 = v53;
        v39[13] = *v53;
      }
      v42 = *v39;
      v56 = *v39 & 0x10;
      v64 = v56;
      v54 = v39[13];
      v65 = v54;
      if ( a3 )
        v43 = v42 | 0x10;
      else
        v43 = v42 & 0xFFFFFFFFFFFFFFEFuLL;
      *v39 = v43;
      v44 = *v17 & 2;
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v45 = *(_DWORD *)(a4 + 16);
        v46 = (unsigned __int16)*(_DWORD *)(a4 + 24);
        if ( (v45 & 0x1FFFF) < 0x400 )
        {
          LOBYTE(v8) = v44 != 0;
          v47 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64, __int64, int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v45]])(
                  *(_QWORD *)(gpKernelHandleTable + 24 * v46),
                  v45,
                  *(_QWORD *)(a4 + 8),
                  *(_QWORD *)a4,
                  v9,
                  v51,
                  (int)v8 + 2,
                  v52);
        }
        else
        {
          v47 = SfnDWORD(*(_QWORD *)(gpKernelHandleTable + 24 * v46), v45, *(_QWORD *)(a4 + 8), *(_QWORD *)a4, v9, v40);
        }
      }
      else
      {
        v48 = *((_DWORD *)v41 + 6);
        v49 = (unsigned __int16)*((_DWORD *)v41 + 8);
        if ( (v48 & 0x1FFFF) < 0x400 )
        {
          LOBYTE(v8) = v44 != 0;
          v47 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64, __int64, int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v48]])(
                  *(_QWORD *)(gpKernelHandleTable + 24 * v49),
                  v48,
                  v41[2],
                  v41[1],
                  v9,
                  v51,
                  (int)v8 + 2,
                  v52);
        }
        else
        {
          v47 = SfnDWORD(*(_QWORD *)(gpKernelHandleTable + 24 * v49), v48, v41[2], v41[1], v9, v40);
        }
      }
      v8 = v47;
      *v39 ^= ((unsigned __int8)v56 ^ (unsigned __int8)*v39) & 0x10;
      v39[13] = v54;
    }
LABEL_60:
    W32SetCurrentThreadDpiAwarenessContext(v67);
    return v8;
  }
  else if ( v20 == 3 )
  {
LABEL_34:
    LOBYTE(v8) = (_DWORD)v18 != 0;
    v34 = fnHkINLPMSG((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, a4, v9, *v19, v8, (_DWORD *)(a1 + 64));
    W32SetCurrentThreadDpiAwarenessContext(v67);
    return v34;
  }
  else
  {
    switch ( v20 )
    {
      case -1:
      case 6:
        goto LABEL_34;
      case 0:
        v29 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, a4, v9, *v19);
        W32SetCurrentThreadDpiAwarenessContext(v67);
        return v29;
      case 1:
        v27 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), *(_QWORD *)a1, a4, v9, *v19);
        *v17 &= ~4u;
        v28 = v27;
        W32SetCurrentThreadDpiAwarenessContext(v67);
        return v28;
      case 2:
      case 11:
        goto LABEL_21;
      case 5:
        if ( v6 == 3 )
        {
          LOBYTE(v8) = (_DWORD)v18 != 0;
          v25 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v20 << 16) | 3u, a3, a4, v9, v8);
          W32SetCurrentThreadDpiAwarenessContext(v67);
          result = v25;
        }
        else if ( v6 )
        {
          if ( v6 == 5 )
          {
            v23 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v20 << 16) | 5u, a3, a4, v9, *v19);
            W32SetCurrentThreadDpiAwarenessContext(v67);
            result = v23;
          }
          else if ( v6 == 6 )
          {
LABEL_33:
            v33 = fnHkINLPMOUSEHOOKSTRUCTEX(
                    (unsigned __int16)v6 | ((unsigned __int16)v20 << 16),
                    a3,
                    a4,
                    v9,
                    *v19,
                    a1 + 64);
            W32SetCurrentThreadDpiAwarenessContext(v67);
            result = v33;
          }
          else
          {
LABEL_21:
            v21 = fnHkINDWORD(
                    (unsigned __int16)v6 | ((unsigned __int16)v20 << 16),
                    a3,
                    a4,
                    v9,
                    *v19,
                    (_DWORD *)(a1 + 64));
            W32SetCurrentThreadDpiAwarenessContext(v67);
            result = v21;
          }
        }
        else
        {
          v24 = (unsigned __int16)v20 << 16;
LABEL_27:
          v26 = fnHkINLPRECT(v24, a3, a4, v9, *v19);
          W32SetCurrentThreadDpiAwarenessContext(v67);
          result = v26;
        }
        break;
      case 7:
        goto LABEL_33;
      case 9:
        v30 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, a4, v9, *v19);
        W32SetCurrentThreadDpiAwarenessContext(v67);
        return v30;
      case 10:
        if ( v6 != 5 )
          goto LABEL_21;
        v24 = ((unsigned __int16)v20 << 16) | 5;
        goto LABEL_27;
      case 12:
        v35 = *(_QWORD *)(a4 + 40);
        goto LABEL_37;
      case 13:
        v58 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v59 = v20;
        v60 = v9;
        *(_DWORD *)(gptiCurrent + 696LL) = 1;
        v31 = fnHkINLPKBDLLHOOKSTRUCT((unsigned __int16)v6 | (*(unsigned __int16 *)(a1 + 48) << 16), a3, a4, v9, *v19);
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v58);
        W32SetCurrentThreadDpiAwarenessContext(v67);
        return v31;
      case 14:
        v61 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v62 = v20;
        v63 = v9;
        *(_DWORD *)(gptiCurrent + 696LL) = 1;
        v32 = fnHkINLPMSLLHOOKSTRUCT((unsigned __int16)v6 | (*(unsigned __int16 *)(a1 + 48) << 16), a3, a4, v9, *v19);
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v61);
        W32SetCurrentThreadDpiAwarenessContext(v67);
        return v32;
      default:
        goto LABEL_60;
    }
  }
  return result;
}
