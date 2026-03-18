/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A0070
 * Callers:
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     SfnDWORD @ 0x1C0024FB0 (SfnDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F095C (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        HWND a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r14
  HWND v8; // rdi
  unsigned int v9; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rdi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v23; // r8d
  __int64 v24; // rdx
  unsigned __int16 v25; // cx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  signed __int32 v40[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+28h] [rbp-90h]
  unsigned int v43; // [rsp+30h] [rbp-88h]
  struct tagSMS *v44; // [rsp+38h] [rbp-80h]
  unsigned int v45; // [rsp+50h] [rbp-68h]
  __int64 v46; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+70h] [rbp-48h]
  unsigned int v49; // [rsp+C8h] [rbp+10h] BYREF
  HWND v50; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v51; // [rsp+D8h] [rbp+20h] BYREF

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( ((a2 - 577 <= 3 || a2 - 581 <= 0x12 && a2 != 589) && a2 != 595 || a2 == 528 && (_WORD)a3 == 582)
    && (_WORD)a3 != 1 )
  {
    if ( !(unsigned int)PrepareSentPointerMessageForClient(&v49, &v50, &v51, 0LL) )
    {
      *a7 = 0LL;
      return;
    }
    v7 = v51;
    v8 = v50;
    v9 = v49;
  }
  v11 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 18LL) >> 3) & 1;
  v45 = v11;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14, v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    v20 = *(_QWORD *)(v17 + 472);
    v21 = *(_QWORD **)(v20 + 248);
    _InterlockedOr(v40, 0);
    if ( v21 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18);
      v23 = 4;
      if ( CurrentProcessWow64Process )
        v23 = 1;
      ProbeForRead(v21, 0x20uLL, v23);
      if ( *v21 )
      {
        *(_QWORD *)(v20 + 224) |= 0x100uLL;
        v7 = v51;
        v8 = v50;
        v9 = v49;
LABEL_39:
        v38 = *((_QWORD *)a1 + 5);
        if ( (v9 & 0x1FFFF) < 0x400 )
        {
          v31 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
                  a1,
                  v9,
                  v8,
                  v7,
                  *(_QWORD *)(v38 + 120),
                  *(_QWORD *)(gpsi + 752LL),
                  v11,
                  a5);
          goto LABEL_42;
        }
        v39 = *(_QWORD *)(v38 + 120);
        v44 = a5;
        v43 = v11;
        v42 = *(_QWORD *)(gpsi + 752LL);
        v41 = v39;
        goto LABEL_33;
      }
    }
    v7 = v51;
    v8 = v50;
    v9 = v49;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_39;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_39;
  if ( v9 == 90 )
    goto LABEL_39;
  v24 = *((_QWORD *)a1 + 5);
  v25 = *(_WORD *)(v24 + 42) & 0x3FFF;
  if ( (unsigned __int16)(v25 - 673) > 9u )
    goto LABEL_39;
  v26 = v25;
  v27 = v25 - 666LL;
  v28 = *(_QWORD *)(v24 + 120);
  if ( v28 != *(_QWORD *)(gpsi + 8 * v27 + 584) && v28 != *(_QWORD *)(gpsi + 8 * v27 + 392) )
    goto LABEL_39;
  v29 = 2 * v27;
  v30 = gSharedInfo[v29 + 6];
  if ( !v30
    || v9 <= LODWORD(gSharedInfo[v29 + 5])
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v30)) != 0
    || (*(_BYTE *)(v24 + 18) & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v31 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v11,
              *(_QWORD *)(gpsi + 8 * v26 - 4608),
              v11,
              a5);
      goto LABEL_42;
    }
    v44 = a5;
    v43 = v11;
    v42 = *(_QWORD *)(gpsi + 8 * v26 - 4608);
    v41 = v11;
LABEL_33:
    v31 = SfnDWORD(a1, v9, (__int64)v8, v7, v41, v42);
LABEL_42:
    *a7 = v31;
    return;
  }
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v32 = a6;
  if ( a6 )
  {
    v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, gpsi, v26);
    v46 = *(_QWORD *)(v33 + 408);
    *(_QWORD *)(v33 + 408) = &v46;
    v47 = a1;
    HMLockObject(a1);
    v7 = v51;
    v8 = v50;
    v9 = v49;
  }
  v34 = xxxDefWindowProc(a1, v9, v8, v7);
  v37 = a7;
  *a7 = v34;
  if ( v32 )
    ThreadUnlock1(v37, v35, v36);
}
