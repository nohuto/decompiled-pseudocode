/*
 * XREFs of xxxHkCallHook @ 0x1C00A3130
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     SfnDWORD @ 0x1C0024FB0 (SfnDWORD.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0076C54 (fnHkINLPCBTCREATESTRUCT.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00A3910 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     fnHkINLPMSG @ 0x1C00A6380 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C00AB0F4 (fnHkINDWORD.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0120634 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0159070 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C021D470 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C021D644 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C021D7B0 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C021D924 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C021DB10 (fnHkOPTINLPEVENTMSG.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0243C68 (--1CCheckLLHookTime@@QEAA@XZ.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // rsi
  int v6; // edi
  __int64 v8; // rbx
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // r12
  __int64 *v16; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 *v20; // r9
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // rbx
  __int64 result; // rax
  __int64 v25; // rbx
  int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 *v38; // rdi
  struct _KTHREAD *v39; // r12
  __int64 *v40; // rax
  unsigned __int64 *v41; // r12
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned int v44; // r15d
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 (__fastcall **v47)(int, int, int, int, __int64, __int64); // rbx
  unsigned int v48; // edi
  __int64 v49; // rax
  unsigned int v50; // r15d
  _QWORD *v51; // rax
  __int64 (__fastcall **v52)(int, int, int, int, __int64, __int64); // rbx
  unsigned int v53; // edi
  __int64 v54; // rax
  __int64 *v55; // [rsp+50h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v58; // [rsp+60h] [rbp-A8h]
  __int64 v59; // [rsp+68h] [rbp-A0h]
  __int64 *v60; // [rsp+70h] [rbp-98h]
  __int64 *v61; // [rsp+78h] [rbp-90h]
  __int64 v62; // [rsp+80h] [rbp-88h] BYREF
  int v63; // [rsp+88h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-78h]
  __int64 v65; // [rsp+98h] [rbp-70h] BYREF
  int v66; // [rsp+A0h] [rbp-68h]
  __int64 v67; // [rsp+A8h] [rbp-60h]
  __int64 v68; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v70; // [rsp+110h] [rbp+8h]
  unsigned int v71; // [rsp+110h] [rbp+8h]

  v4 = a4;
  v6 = a2;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 68) != -1 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    a2 = *(int *)(a1 + 68);
    v9 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v11 + 416) + 8 * a2 + 408);
    if ( (_DWORD)a2 != -1 )
    {
      v70 = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, v12, v13) )
      {
        v16 = (__int64 *)PsGetThreadWin32Thread(v70);
        if ( v16 )
          v15 = *v16;
      }
      *(_QWORD *)(*(_QWORD *)(v15 + 472) + 224LL) |= 0x200uLL;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v71 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
  v18 = *(_DWORD *)(a1 + 64) & 2;
  v19 = gpsi;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
  {
    v60 = (__int64 *)(gpsi + 536LL);
    v55 = (__int64 *)(gpsi + 528LL);
    v20 = (__int64 *)(gpsi + 544LL);
  }
  else
  {
    v60 = (__int64 *)(gpsi + 728LL);
    v55 = (__int64 *)(gpsi + 720LL);
    v20 = (__int64 *)(gpsi + 736LL);
  }
  v21 = *(unsigned int *)(a1 + 48);
  v22 = (_DWORD)v21 == 4;
  if ( (_DWORD)v21 == 4 )
  {
    v37 = v4[4];
LABEL_38:
    v57 = v37;
    v38 = 0LL;
    if ( !v22 )
      v38 = v4;
    v61 = v38;
    if ( !v22 )
      v4 = 0LL;
    if ( !v37 || (*(_DWORD *)(v37 + 84) & 5) == 0 )
    {
      v39 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v21, v20) )
      {
        v40 = (__int64 *)PsGetThreadWin32Thread(v39);
        if ( v40 )
          v8 = *v40;
      }
      v41 = *(unsigned __int64 **)(v8 + 472);
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v56 = *v55;
      }
      else
      {
        v56 = *v60;
        v41[13] = *v38;
      }
      v42 = *v41;
      v59 = *v41 & 0x10;
      v68 = v59;
      v58 = v41[13];
      v69 = v58;
      if ( a3 )
        v43 = v42 | 0x10;
      else
        v43 = v42 & 0xFFFFFFFFFFFFFFEFuLL;
      *v41 = v43;
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v44 = *((_DWORD *)v4 + 4);
        if ( (v44 & 0x1FFFF) < 0x400 )
        {
          v47 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v44]];
          v48 = (*(_DWORD *)(a1 + 64) & 2 | 4u) >> 1;
          v49 = _HMObjectFromHandle(v4[3]);
          v46 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, __int64))*v47)(
                  v49,
                  v44,
                  v4[1],
                  *v4,
                  v9,
                  v56,
                  v48,
                  v57);
        }
        else
        {
          v45 = (_QWORD *)_HMObjectFromHandle(v4[3]);
          v46 = SfnDWORD(v45, v44, v4[1], *v4, v9, v56);
        }
      }
      else
      {
        v50 = *((_DWORD *)v38 + 6);
        if ( (v50 & 0x1FFFF) < 0x400 )
        {
          v52 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v50]];
          v53 = (*(_DWORD *)(a1 + 64) & 2 | 4u) >> 1;
          v54 = _HMObjectFromHandle(v61[4]);
          v46 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, __int64))*v52)(
                  v54,
                  v50,
                  v61[2],
                  v61[1],
                  v9,
                  v56,
                  v53,
                  v57);
        }
        else
        {
          v51 = (_QWORD *)_HMObjectFromHandle(v38[4]);
          v46 = SfnDWORD(v51, v50, v38[2], v38[1], v9, v56);
        }
      }
      v8 = v46;
      *v41 ^= ((unsigned __int8)v59 ^ (unsigned __int8)*v41) & 0x10;
      v41[13] = v58;
    }
LABEL_61:
    W32SetCurrentThreadDpiAwarenessContext(v71);
    return v8;
  }
  else if ( (_DWORD)v21 == 3 )
  {
LABEL_34:
    LOBYTE(v8) = (_DWORD)v18 != 0;
    v36 = fnHkINLPMSG((unsigned __int16)v6 | ((unsigned __int16)v21 << 16), a3, (_DWORD)v4, v9, *v20, v8, a1 + 64);
    W32SetCurrentThreadDpiAwarenessContext(v71);
    return v36;
  }
  else
  {
    v19 = 0x1C0000000uLL;
    switch ( (int)v21 )
    {
      case -1:
      case 6:
        goto LABEL_34;
      case 0:
        v31 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v21 << 16), a3, (_DWORD)v4, v9, *v20);
        W32SetCurrentThreadDpiAwarenessContext(v71);
        return v31;
      case 1:
        v29 = fnHkOPTINLPEVENTMSG(
                (unsigned __int16)v6 | ((unsigned __int16)v21 << 16),
                *(_QWORD *)a1,
                (_DWORD)v4,
                v9,
                *v20);
        *(_DWORD *)(a1 + 64) &= ~4u;
        v30 = v29;
        W32SetCurrentThreadDpiAwarenessContext(v71);
        return v30;
      case 2:
      case 11:
        goto LABEL_21;
      case 5:
        if ( v6 == 3 )
        {
          LOBYTE(v8) = (_DWORD)v18 != 0;
          v27 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v21 << 16) | 3u, a3, v4, v9, v8);
          W32SetCurrentThreadDpiAwarenessContext(v71);
          result = v27;
        }
        else if ( v6 )
        {
          if ( v6 == 5 )
          {
            v25 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v21 << 16) | 5u, a3, (_DWORD)v4, v9, *v20);
            W32SetCurrentThreadDpiAwarenessContext(v71);
            result = v25;
          }
          else if ( v6 == 6 )
          {
LABEL_33:
            v35 = fnHkINLPMOUSEHOOKSTRUCTEX(
                    (unsigned __int16)v6 | ((unsigned __int16)v21 << 16),
                    a3,
                    (_DWORD)v4,
                    v9,
                    *v20,
                    a1 + 64);
            W32SetCurrentThreadDpiAwarenessContext(v71);
            result = v35;
          }
          else
          {
LABEL_21:
            v23 = fnHkINDWORD((unsigned __int16)v6 | ((unsigned __int16)v21 << 16), a3, (_DWORD)v4, v9, *v20, a1 + 64);
            W32SetCurrentThreadDpiAwarenessContext(v71);
            result = v23;
          }
        }
        else
        {
          v26 = (unsigned __int16)v21 << 16;
LABEL_27:
          v28 = fnHkINLPRECT(v26, a3, (_DWORD)v4, v9, *v20);
          W32SetCurrentThreadDpiAwarenessContext(v71);
          result = v28;
        }
        break;
      case 7:
        goto LABEL_33;
      case 9:
        v32 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v21 << 16), a3, v4, v9, *v20);
        W32SetCurrentThreadDpiAwarenessContext(v71);
        return v32;
      case 10:
        if ( v6 != 5 )
          goto LABEL_21;
        v26 = ((unsigned __int16)v21 << 16) | 5;
        goto LABEL_27;
      case 12:
        v22 = (_DWORD)v21 == 4;
        v37 = v4[5];
        goto LABEL_38;
      case 13:
        v62 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v63 = v21;
        v64 = v9;
        *(_DWORD *)(gptiCurrent + 688LL) = 1;
        v33 = fnHkINLPKBDLLHOOKSTRUCT(
                (unsigned __int16)v6 | (*(unsigned __int16 *)(a1 + 48) << 16),
                a3,
                (_DWORD)v4,
                v9,
                *v20);
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v62);
        W32SetCurrentThreadDpiAwarenessContext(v71);
        return v33;
      case 14:
        v65 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v66 = v21;
        v67 = v9;
        *(_DWORD *)(gptiCurrent + 688LL) = 1;
        v34 = fnHkINLPMSLLHOOKSTRUCT(
                (unsigned __int16)v6 | (*(unsigned __int16 *)(a1 + 48) << 16),
                a3,
                (_DWORD)v4,
                v9,
                *v20);
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v65);
        W32SetCurrentThreadDpiAwarenessContext(v71);
        return v34;
      default:
        goto LABEL_61;
    }
  }
  return result;
}
