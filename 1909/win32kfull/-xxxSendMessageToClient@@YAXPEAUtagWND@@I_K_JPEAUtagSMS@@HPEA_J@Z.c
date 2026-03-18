/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0040E40
 * Callers:
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F07DC (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        HICON a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  HICON v7; // r14
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rdi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v22; // r8d
  __int64 v23; // rdx
  unsigned __int16 v24; // cx
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // rax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  signed __int32 v39[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  unsigned int v42; // [rsp+30h] [rbp-88h]
  struct tagSMS *v43; // [rsp+38h] [rbp-80h]
  unsigned int v44; // [rsp+50h] [rbp-68h]
  __int64 v45; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v46; // [rsp+68h] [rbp-50h]
  __int64 v47; // [rsp+70h] [rbp-48h]
  unsigned int v48; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v49; // [rsp+D0h] [rbp+18h] BYREF
  HICON v50; // [rsp+D8h] [rbp+20h] BYREF

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( ((a2 - 577 <= 3 || a2 - 581 <= 0x12 && a2 != 589) && a2 != 595 || a2 == 528 && (_WORD)a3 == 582)
    && (_WORD)a3 != 1 )
  {
    if ( !(unsigned int)PrepareSentPointerMessageForClient(&v48, &v49, &v50, 0LL) )
    {
      *a7 = 0LL;
      return;
    }
    v7 = v50;
    v8 = v49;
    v9 = v48;
  }
  v11 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 18LL) >> 3) & 1;
  v44 = v11;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    v19 = *(_QWORD *)(v16 + 472);
    v20 = *(_QWORD **)(v19 + 248);
    _InterlockedOr(v39, 0);
    if ( v20 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17);
      v22 = 4;
      if ( CurrentProcessWow64Process )
        v22 = 1;
      ProbeForRead(v20, 0x20uLL, v22);
      if ( *v20 )
      {
        *(_QWORD *)(v19 + 224) |= 0x100uLL;
        v7 = v50;
        v8 = v49;
        v9 = v48;
LABEL_39:
        v37 = *((_QWORD *)a1 + 5);
        if ( (v9 & 0x1FFFF) < 0x400 )
        {
          v30 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, HICON, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
                  a1,
                  v9,
                  v8,
                  v7,
                  *(_QWORD *)(v37 + 120),
                  *(_QWORD *)(gpsi + 752LL),
                  v11,
                  a5);
          goto LABEL_42;
        }
        v38 = *(_QWORD *)(v37 + 120);
        v43 = a5;
        v42 = v11;
        v41 = *(_QWORD *)(gpsi + 752LL);
        v40 = v38;
        goto LABEL_33;
      }
    }
    v7 = v50;
    v8 = v49;
    v9 = v48;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_39;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_39;
  if ( v9 == 90 )
    goto LABEL_39;
  v23 = *((_QWORD *)a1 + 5);
  v24 = *(_WORD *)(v23 + 42) & 0x3FFF;
  if ( (unsigned __int16)(v24 - 673) > 9u )
    goto LABEL_39;
  v25 = v24;
  v26 = v24 - 666LL;
  v27 = *(_QWORD *)(v23 + 120);
  if ( v27 != *(_QWORD *)(gpsi + 8 * v26 + 584) && v27 != *(_QWORD *)(gpsi + 8 * v26 + 392) )
    goto LABEL_39;
  v28 = 2 * v26;
  v29 = gSharedInfo[v28 + 6];
  if ( !v29
    || v9 <= LODWORD(gSharedInfo[v28 + 5])
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v29)) != 0
    || (*(_BYTE *)(v23 + 18) & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v30 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, HICON, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v11,
              *(_QWORD *)(gpsi + 8 * v25 - 4608),
              v11,
              a5);
      goto LABEL_42;
    }
    v43 = a5;
    v42 = v11;
    v41 = *(_QWORD *)(gpsi + 8 * v25 - 4608);
    v40 = v11;
LABEL_33:
    v30 = SfnDWORD(a1, v9, v8, (__int64)v7, v40, v41);
LABEL_42:
    *a7 = v30;
    return;
  }
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v31 = a6;
  if ( a6 )
  {
    v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v45 = *(_QWORD *)(v32 + 408);
    *(_QWORD *)(v32 + 408) = &v45;
    v46 = a1;
    HMLockObject(a1);
    v7 = v50;
    v8 = v49;
    v9 = v48;
  }
  v33 = xxxDefWindowProc(a1, v9, v8, v7);
  v36 = a7;
  *a7 = v33;
  if ( v31 )
    ThreadUnlock1(v36, v34, v35);
}
