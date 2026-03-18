/*
 * XREFs of xxxHkCallHook @ 0x1C0042460
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     fnHkINDWORD @ 0x1C001E4B0 (fnHkINDWORD.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0042B50 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C005202C (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00F6CB4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0130A44 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C01E038C (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C01E0548 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C01E06D0 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C01E085C (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C01E0A58 (fnHkOPTINLPEVENTMSG.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v17; // r9d
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 result; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // r15
  __int64 *v37; // rax
  unsigned __int64 *v38; // r15
  __int64 v39; // rdx
  _QWORD *v40; // r10
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  int v44; // r9d
  unsigned int v45; // r10d
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // r11d
  __int64 v49; // rcx
  __int64 v50; // [rsp+50h] [rbp-78h]
  struct _KTHREAD *v51; // [rsp+58h] [rbp-70h]
  __int64 v52; // [rsp+58h] [rbp-70h]
  _QWORD *v53; // [rsp+60h] [rbp-68h]
  unsigned __int64 v54; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *v55; // [rsp+D0h] [rbp+8h]
  unsigned int v56; // [rsp+D0h] [rbp+8h]

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
    v9 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v11 + 416) + 8 * v13 + 408);
    if ( (_DWORD)v13 != -1 )
    {
      v55 = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v13) )
      {
        v15 = (__int64 *)PsGetThreadWin32Thread(v55);
        if ( v15 )
          v14 = *v15;
      }
      *(_QWORD *)(*(_QWORD *)(v14 + 472) + 224LL) |= 0x200uLL;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v56 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
  v17 = *(_DWORD *)(a1 + 64) & 2;
  if ( v17 )
    v18 = (_QWORD *)(gpsi + 392LL);
  else
    v18 = (_QWORD *)(gpsi + 584LL);
  v19 = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)v19 == 4 )
  {
    v34 = *(_QWORD *)(a4 + 32);
LABEL_38:
    v50 = v34;
    v35 = 0LL;
    if ( (_DWORD)v19 != 4 )
      v35 = (_QWORD *)a4;
    v53 = v35;
    if ( (_DWORD)v19 != 4 )
      a4 = 0LL;
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 5) == 0 )
    {
      v51 = KeGetCurrentThread();
      v36 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v34) )
      {
        v37 = (__int64 *)PsGetThreadWin32Thread(v51);
        if ( v37 )
          v36 = *v37;
      }
      v38 = *(unsigned __int64 **)(v36 + 472);
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v39 = v18[17];
        v52 = v39;
        v40 = v53;
      }
      else
      {
        v39 = v18[18];
        v52 = v39;
        v40 = v53;
        v38[13] = *v53;
      }
      v41 = *v38;
      v42 = *v38 & 0x10;
      v54 = v38[13];
      if ( a3 )
        v43 = v41 | 0x10;
      else
        v43 = v41 & 0xFFFFFFFFFFFFFFEFuLL;
      *v38 = v43;
      v44 = *(_DWORD *)(a1 + 64) & 2;
      if ( *(_DWORD *)(a1 + 48) == 4 )
      {
        v45 = *(_DWORD *)(a4 + 16);
        v46 = (unsigned __int16)*(_DWORD *)(a4 + 24);
        if ( (v45 & 0x1FFFF) < 0x400 )
        {
          LOBYTE(v8) = v44 != 0;
          v47 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v45]])(
                  *(_QWORD *)(gpKernelHandleTable + 24 * v46),
                  v45,
                  *(_QWORD *)(a4 + 8),
                  *(_QWORD *)a4,
                  v9,
                  v52,
                  (int)v8 + 2,
                  v50);
        }
        else
        {
          v47 = SfnDWORD(*(_QWORD *)(gpKernelHandleTable + 24 * v46), v45, *(_QWORD *)(a4 + 8), *(_QWORD *)a4, v9, v39);
        }
      }
      else
      {
        v48 = *((_DWORD *)v40 + 6);
        v49 = (unsigned __int16)*((_DWORD *)v40 + 8);
        if ( (v48 & 0x1FFFF) < 0x400 )
        {
          LOBYTE(v8) = v44 != 0;
          v47 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v48]])(
                  *(_QWORD *)(gpKernelHandleTable + 24 * v49),
                  v48,
                  v40[2],
                  v40[1],
                  v9,
                  v52,
                  (int)v8 + 2,
                  v50);
        }
        else
        {
          v47 = SfnDWORD(*(_QWORD *)(gpKernelHandleTable + 24 * v49), v48, v40[2], v40[1], v9, v39);
        }
      }
      v8 = v47;
      *v38 ^= ((unsigned __int8)v42 ^ (unsigned __int8)*v38) & 0x10;
      v38[13] = v54;
    }
LABEL_61:
    W32SetCurrentThreadDpiAwarenessContext(v56);
    return v8;
  }
  else if ( (_DWORD)v19 == 3 )
  {
LABEL_35:
    LOBYTE(v8) = v17 != 0;
    v33 = fnHkINLPMSG((unsigned __int16)v6 | ((unsigned __int16)v19 << 16), a3, a4, v9, v18[19], v8, a1 + 64);
    W32SetCurrentThreadDpiAwarenessContext(v56);
    return v33;
  }
  else
  {
    switch ( (int)v19 )
    {
      case -1:
      case 6:
        goto LABEL_35;
      case 0:
        v28 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v19 << 16), a3, a4, v9, v18[19]);
        W32SetCurrentThreadDpiAwarenessContext(v56);
        return v28;
      case 1:
        v26 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v19 << 16), *(_QWORD *)a1, a4, v9, v18[19]);
        *(_DWORD *)(a1 + 64) &= ~4u;
        v27 = v26;
        W32SetCurrentThreadDpiAwarenessContext(v56);
        return v27;
      case 2:
      case 11:
        goto LABEL_22;
      case 5:
        if ( v6 > 6 )
          goto LABEL_22;
        if ( v6 )
        {
          switch ( v6 )
          {
            case 3:
              LOBYTE(v8) = v17 != 0;
              v23 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v19 << 16) | 3u, a3, a4, v9, v8);
              W32SetCurrentThreadDpiAwarenessContext(v56);
              result = v23;
              break;
            case 5:
              v22 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v19 << 16) | 5u, a3, a4, v9, v18[19]);
              W32SetCurrentThreadDpiAwarenessContext(v56);
              result = v22;
              break;
            case 6:
LABEL_34:
              v32 = fnHkINLPMOUSEHOOKSTRUCTEX(
                      (unsigned __int16)v6 | ((unsigned __int16)v19 << 16),
                      a3,
                      a4,
                      v9,
                      v18[19],
                      a1 + 64);
              W32SetCurrentThreadDpiAwarenessContext(v56);
              result = v32;
              break;
            default:
LABEL_22:
              v20 = fnHkINDWORD(
                      (unsigned __int16)v6 | ((unsigned __int16)v19 << 16),
                      a3,
                      a4,
                      v9,
                      v18[19],
                      (_DWORD *)(a1 + 64));
              W32SetCurrentThreadDpiAwarenessContext(v56);
              result = v20;
              break;
          }
        }
        else
        {
          v24 = (unsigned __int16)v19 << 16;
LABEL_28:
          v25 = fnHkINLPRECT(v24, a3, a4, v9, v18[19]);
          W32SetCurrentThreadDpiAwarenessContext(v56);
          result = v25;
        }
        break;
      case 7:
        goto LABEL_34;
      case 9:
        v29 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v19 << 16), a3, a4, v9, v18[19]);
        W32SetCurrentThreadDpiAwarenessContext(v56);
        return v29;
      case 10:
        if ( v6 != 5 )
          goto LABEL_22;
        v24 = ((unsigned __int16)v19 << 16) | 5;
        goto LABEL_28;
      case 12:
        v34 = *(_QWORD *)(a4 + 40);
        goto LABEL_38;
      case 13:
        v30 = fnHkINLPKBDLLHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v19 << 16), a3, a4, v9, v18[19]);
        W32SetCurrentThreadDpiAwarenessContext(v56);
        return v30;
      case 14:
        v31 = fnHkINLPMSLLHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v19 << 16), a3, a4, v9, v18[19]);
        W32SetCurrentThreadDpiAwarenessContext(v56);
        return v31;
      default:
        goto LABEL_61;
    }
  }
  return result;
}
