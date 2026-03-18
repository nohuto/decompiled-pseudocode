/*
 * XREFs of xxxHkCallHook @ 0x1C0043F00
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00446E0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     fnHkINLPMSG @ 0x1C0047160 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C004BF20 (fnHkINDWORD.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0094764 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00FAEA4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015A020 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C021CF30 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C021D104 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C021D270 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C021D3E4 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C021D5D0 (fnHkOPTINLPEVENTMSG.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0243528 (--1CCheckLLHookTime@@QEAA@XZ.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v6; // edi
  __int64 v8; // rbx
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // r12
  __int64 *v15; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 *v19; // r9
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // rbx
  __int64 result; // rax
  __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rdi
  struct _KTHREAD *v38; // r12
  __int64 *v39; // rax
  unsigned __int64 *v40; // r12
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned int v43; // r15d
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 (__fastcall **v46)(int, int, int, int, __int64, __int64); // rbx
  unsigned int v47; // edi
  __int64 v48; // rax
  unsigned int v49; // r15d
  _QWORD *v50; // rax
  __int64 (__fastcall **v51)(int, int, int, int, __int64, __int64); // rbx
  unsigned int v52; // edi
  __int64 v53; // rax
  __int64 *v54; // [rsp+50h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B8h]
  __int64 v56; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-A0h]
  __int64 *v59; // [rsp+70h] [rbp-98h]
  __int64 *v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h] BYREF
  int v62; // [rsp+88h] [rbp-80h]
  __int64 v63; // [rsp+90h] [rbp-78h]
  __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  int v65; // [rsp+A0h] [rbp-68h]
  __int64 v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v69; // [rsp+110h] [rbp+8h]
  unsigned int v70; // [rsp+110h] [rbp+8h]

  v6 = a2;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 68) != -1 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    a2 = *(int *)(a1 + 68);
    v9 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v11 + 416) + 8 * a2 + 408);
    if ( (_DWORD)a2 != -1 )
    {
      v69 = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, v12) )
      {
        v15 = (__int64 *)PsGetThreadWin32Thread(v69);
        if ( v15 )
          v14 = *v15;
      }
      *(_QWORD *)(*(_QWORD *)(v14 + 472) + 224LL) |= 0x200uLL;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v70 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
  v17 = *(_DWORD *)(a1 + 64) & 2;
  v18 = gpsi;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
  {
    v59 = (__int64 *)(gpsi + 536LL);
    v54 = (__int64 *)(gpsi + 528LL);
    v19 = (__int64 *)(gpsi + 544LL);
  }
  else
  {
    v59 = (__int64 *)(gpsi + 728LL);
    v54 = (__int64 *)(gpsi + 720LL);
    v19 = (__int64 *)(gpsi + 736LL);
  }
  v20 = *(unsigned int *)(a1 + 48);
  v21 = (_DWORD)v20 == 4;
  if ( (_DWORD)v20 == 4 )
  {
    v36 = a4[4];
LABEL_38:
    v56 = v36;
    v37 = 0LL;
    if ( !v21 )
      v37 = a4;
    v60 = v37;
    if ( !v21 )
      a4 = 0LL;
    if ( !v36 || (*(_DWORD *)(v36 + 84) & 5) == 0 )
    {
      v38 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v20) )
      {
        v39 = (__int64 *)PsGetThreadWin32Thread(v38);
        if ( v39 )
          v8 = *v39;
      }
      v40 = *(unsigned __int64 **)(v8 + 472);
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v55 = *v54;
      }
      else
      {
        v55 = *v59;
        v40[13] = *v37;
      }
      v41 = *v40;
      v58 = *v40 & 0x10;
      v67 = v58;
      v57 = v40[13];
      v68 = v57;
      if ( a3 )
        v42 = v41 | 0x10;
      else
        v42 = v41 & 0xFFFFFFFFFFFFFFEFuLL;
      *v40 = v42;
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v43 = *((_DWORD *)a4 + 4);
        if ( (v43 & 0x1FFFF) < 0x400 )
        {
          v46 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v43]];
          v47 = (*(_DWORD *)(a1 + 64) & 2 | 4u) >> 1;
          v48 = _HMObjectFromHandle(a4[3]);
          v45 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, __int64))*v46)(
                  v48,
                  v43,
                  a4[1],
                  *a4,
                  v9,
                  v55,
                  v47,
                  v56);
        }
        else
        {
          v44 = (_QWORD *)_HMObjectFromHandle(a4[3]);
          v45 = SfnDWORD(v44, v43, a4[1], *a4, v9, v55);
        }
      }
      else
      {
        v49 = *((_DWORD *)v37 + 6);
        if ( (v49 & 0x1FFFF) < 0x400 )
        {
          v51 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v49]];
          v52 = (*(_DWORD *)(a1 + 64) & 2 | 4u) >> 1;
          v53 = _HMObjectFromHandle(v60[4]);
          v45 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, __int64))*v51)(
                  v53,
                  v49,
                  v60[2],
                  v60[1],
                  v9,
                  v55,
                  v52,
                  v56);
        }
        else
        {
          v50 = (_QWORD *)_HMObjectFromHandle(v37[4]);
          v45 = SfnDWORD(v50, v49, v37[2], v37[1], v9, v55);
        }
      }
      v8 = v45;
      *v40 ^= ((unsigned __int8)v58 ^ (unsigned __int8)*v40) & 0x10;
      v40[13] = v57;
    }
LABEL_61:
    W32SetCurrentThreadDpiAwarenessContext(v70);
    return v8;
  }
  else if ( (_DWORD)v20 == 3 )
  {
LABEL_34:
    LOBYTE(v8) = (_DWORD)v17 != 0;
    v35 = fnHkINLPMSG((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, (_DWORD)a4, v9, *v19, v8, a1 + 64);
    W32SetCurrentThreadDpiAwarenessContext(v70);
    return v35;
  }
  else
  {
    v18 = 0x1C0000000uLL;
    switch ( (int)v20 )
    {
      case -1:
      case 6:
        goto LABEL_34;
      case 0:
        v30 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, (_DWORD)a4, v9, *v19);
        W32SetCurrentThreadDpiAwarenessContext(v70);
        return v30;
      case 1:
        v28 = fnHkOPTINLPEVENTMSG(
                (unsigned __int16)v6 | ((unsigned __int16)v20 << 16),
                *(_QWORD *)a1,
                (_DWORD)a4,
                v9,
                *v19);
        *(_DWORD *)(a1 + 64) &= ~4u;
        v29 = v28;
        W32SetCurrentThreadDpiAwarenessContext(v70);
        return v29;
      case 2:
      case 11:
        goto LABEL_21;
      case 5:
        if ( v6 == 3 )
        {
          LOBYTE(v8) = (_DWORD)v17 != 0;
          v26 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v20 << 16) | 3u, a3, (_DWORD)a4, v9, v8);
          W32SetCurrentThreadDpiAwarenessContext(v70);
          result = v26;
        }
        else if ( v6 )
        {
          if ( v6 == 5 )
          {
            v24 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v20 << 16) | 5u, a3, (_DWORD)a4, v9, *v19);
            W32SetCurrentThreadDpiAwarenessContext(v70);
            result = v24;
          }
          else if ( v6 == 6 )
          {
LABEL_33:
            v34 = fnHkINLPMOUSEHOOKSTRUCTEX(
                    (unsigned __int16)v6 | ((unsigned __int16)v20 << 16),
                    a3,
                    (_DWORD)a4,
                    v9,
                    *v19,
                    a1 + 64);
            W32SetCurrentThreadDpiAwarenessContext(v70);
            result = v34;
          }
          else
          {
LABEL_21:
            v22 = fnHkINDWORD((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, (_DWORD)a4, v9, *v19, a1 + 64);
            W32SetCurrentThreadDpiAwarenessContext(v70);
            result = v22;
          }
        }
        else
        {
          v25 = (unsigned __int16)v20 << 16;
LABEL_27:
          v27 = fnHkINLPRECT(v25, a3, (_DWORD)a4, v9, *v19);
          W32SetCurrentThreadDpiAwarenessContext(v70);
          result = v27;
        }
        break;
      case 7:
        goto LABEL_33;
      case 9:
        v31 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v20 << 16), a3, a4, v9, *v19);
        W32SetCurrentThreadDpiAwarenessContext(v70);
        return v31;
      case 10:
        if ( v6 != 5 )
          goto LABEL_21;
        v25 = ((unsigned __int16)v20 << 16) | 5;
        goto LABEL_27;
      case 12:
        v21 = (_DWORD)v20 == 4;
        v36 = a4[5];
        goto LABEL_38;
      case 13:
        v61 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v62 = v20;
        v63 = v9;
        *(_DWORD *)(gptiCurrent + 688LL) = 1;
        v32 = fnHkINLPKBDLLHOOKSTRUCT(
                (unsigned __int16)v6 | (*(unsigned __int16 *)(a1 + 48) << 16),
                a3,
                (_DWORD)a4,
                v9,
                *v19);
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v61);
        W32SetCurrentThreadDpiAwarenessContext(v70);
        return v32;
      case 14:
        v64 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        v65 = v20;
        v66 = v9;
        *(_DWORD *)(gptiCurrent + 688LL) = 1;
        v33 = fnHkINLPMSLLHOOKSTRUCT(
                (unsigned __int16)v6 | (*(unsigned __int16 *)(a1 + 48) << 16),
                a3,
                (_DWORD)a4,
                v9,
                *v19);
        CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v64);
        W32SetCurrentThreadDpiAwarenessContext(v70);
        return v33;
      default:
        goto LABEL_61;
    }
  }
  return result;
}
