/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C002D410
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 * Callees:
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01DB1BC (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  bool v11; // zf
  __int64 v12; // r15
  BOOL v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rdi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v23; // r8d
  char v24; // dl
  __int64 v25; // r9
  unsigned __int16 v26; // cx
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r11
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rcx
  __int64 v39; // r9
  signed __int32 v40[8]; // [rsp+0h] [rbp-B8h] BYREF
  BOOL v41; // [rsp+30h] [rbp-88h]
  struct tagSMS *v42; // [rsp+38h] [rbp-80h]
  char v43; // [rsp+50h] [rbp-68h]
  char v44; // [rsp+51h] [rbp-67h]
  BOOL v45; // [rsp+54h] [rbp-64h]
  _QWORD v46[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v48; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v49; // [rsp+D8h] [rbp+20h] BYREF

  v49 = a4;
  v48 = a3;
  v47 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( ((a2 - 577 <= 3 || a2 - 581 <= 0x12 && a2 != 589) && a2 != 595 || a2 == 528 && (_WORD)a3 == 582)
    && (_WORD)a3 != 1 )
  {
    if ( !(unsigned int)PrepareSentPointerMessageForClient(&v47, &v48, &v49, 0LL) )
    {
      *a7 = 0LL;
      return;
    }
    v7 = v49;
    v8 = v48;
    v9 = v47;
  }
  v11 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) == 0;
  v43 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8;
  v44 = v43;
  v12 = 0LL;
  v13 = !v11;
  v45 = v13;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    v20 = *(_QWORD *)(v17 + 480);
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
        v7 = v49;
        v8 = v48;
        v9 = v47;
LABEL_39:
        v39 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL);
        if ( (v9 & 0x1FFFF) < 0x400 )
        {
          v33 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
                  a1,
                  v9,
                  v8,
                  v7,
                  v39,
                  *(_QWORD *)(gpsi + 752LL),
                  v13,
                  a5);
        }
        else
        {
          v42 = a5;
          v41 = v13;
          v33 = SfnDWORD((_DWORD)a1, v9, v8, v7, v39, *(_QWORD *)(gpsi + 752LL));
        }
LABEL_42:
        *a7 = v33;
        return;
      }
    }
    v7 = v49;
    v8 = v48;
    v9 = v47;
    v24 = v43;
  }
  else
  {
    v24 = v43;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_39;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_39;
  if ( v9 == 90 )
    goto LABEL_39;
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(_WORD *)(v25 + 42) & 0x2FFF;
  if ( (unsigned __int16)(v26 - 673) > 9u )
    goto LABEL_39;
  v27 = v26;
  v28 = v26 - 666LL;
  v29 = *(_QWORD *)(v25 + 120);
  if ( v29 != *(_QWORD *)(gpsi + 8 * v28 + 584) && v29 != *(_QWORD *)(gpsi + 8 * v28 + 392) )
    goto LABEL_39;
  v30 = 2 * v28;
  v31 = *((_QWORD *)&gSharedInfo + v30 + 6);
  if ( !v31
    || v9 <= *((_DWORD *)&gSharedInfo + 2 * v30 + 10)
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v31)) != 0
    || (*(_BYTE *)(v25 + 18) & 1) != 0 )
  {
    LOBYTE(v12) = v24 != 0;
    v32 = gpsi + 8 * v27;
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v33 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v12,
              *(_QWORD *)(v32 - 4608),
              v13,
              a5);
    }
    else
    {
      v42 = a5;
      v41 = v13;
      v33 = SfnDWORD((_DWORD)a1, v9, v8, v7, v12, *(_QWORD *)(v32 - 4608));
    }
    goto LABEL_42;
  }
  v34 = a6;
  if ( a6 )
  {
    v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v46[0] = *(_QWORD *)(v35 + 416);
    *(_QWORD *)(v35 + 416) = v46;
    v46[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  }
  v36 = xxxDefWindowProc(a1);
  v38 = a7;
  *a7 = v36;
  if ( v34 )
    ThreadUnlock1(v38, v37);
}
