/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00431F0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01B8568 (PrepareSentPointerMessageForClient.c)
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
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v24; // r8d
  __int64 v25; // r8
  unsigned __int16 v26; // cx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // r11
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 *v39; // rcx
  __int64 v40; // r9
  signed __int32 v41[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+30h] [rbp-88h]
  struct tagSMS *v43; // [rsp+38h] [rbp-80h]
  unsigned int v44; // [rsp+50h] [rbp-68h]
  _QWORD v45[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp+10h] BYREF
  HWND v47; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v48; // [rsp+D8h] [rbp+20h] BYREF

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( ((a2 - 577 <= 3 || a2 - 581 <= 0x12 && a2 != 589) && a2 != 595 || a2 == 528 && (_WORD)a3 == 582)
    && (_WORD)a3 != 1 )
  {
    if ( !(unsigned int)PrepareSentPointerMessageForClient(&v46, &v47, &v48, 0LL) )
    {
      *a7 = 0LL;
      return;
    }
    v7 = v48;
    v8 = v47;
    v9 = v46;
  }
  v11 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 18LL) >> 3) & 1;
  v44 = v11;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    v21 = *(_QWORD *)(v15 + 472);
    v22 = *(_QWORD **)(v21 + 248);
    _InterlockedOr(v41, 0);
    if ( v22 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16, v18, v19);
      v24 = 4;
      if ( CurrentProcessWow64Process )
        v24 = 1;
      ProbeForRead(v22, 0x20uLL, v24);
      if ( *v22 )
      {
        *(_QWORD *)(v21 + 224) |= 0x100uLL;
        v7 = v48;
        v8 = v47;
        v9 = v46;
LABEL_38:
        v40 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL);
        if ( (v9 & 0x1FFFF) < 0x400 )
        {
          v33 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, __int64, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
                  a1,
                  v9,
                  v8,
                  v7,
                  v40,
                  *(_QWORD *)(gpsi + 752LL),
                  v11,
                  a5);
        }
        else
        {
          v43 = a5;
          v42 = v11;
          v33 = SfnDWORD((_DWORD)a1, v9, (_DWORD)v8, v7, v40, *(_QWORD *)(gpsi + 752LL));
        }
LABEL_41:
        *a7 = v33;
        return;
      }
    }
    v7 = v48;
    v8 = v47;
    v9 = v46;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_38;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_38;
  if ( v9 == 90 )
    goto LABEL_38;
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(_WORD *)(v25 + 42) & 0x3FFF;
  if ( (unsigned __int16)(v26 - 673) > 9u )
    goto LABEL_38;
  v27 = v26;
  v28 = v26 - 666LL;
  v29 = *(_QWORD *)(v25 + 120);
  if ( v29 != *(_QWORD *)(gpsi + 8 * v28 + 584) && v29 != *(_QWORD *)(gpsi + 8 * v28 + 392) )
    goto LABEL_38;
  v30 = 2 * v28;
  v31 = gSharedInfo[v30 + 6];
  if ( !v31
    || v9 <= LODWORD(gSharedInfo[v30 + 5])
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v31)) != 0
    || (*(_BYTE *)(v25 + 18) & 1) != 0 )
  {
    v32 = gpsi + 8 * v27;
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v33 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v11,
              *(_QWORD *)(v32 - 4608),
              v11,
              a5);
    }
    else
    {
      v43 = a5;
      v42 = v11;
      v33 = SfnDWORD((_DWORD)a1, v9, (_DWORD)v8, v7, v11, *(_QWORD *)(v32 - 4608));
    }
    goto LABEL_41;
  }
  v34 = a6;
  if ( a6 )
  {
    v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
    v45[0] = *(_QWORD *)(v35 + 408);
    *(_QWORD *)(v35 + 408) = v45;
    v45[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v7 = v48;
    v8 = v47;
    v9 = v46;
  }
  v36 = xxxDefWindowProc(a1, v9, v8, v7);
  v39 = a7;
  *a7 = v36;
  if ( v34 )
    ThreadUnlock1(v39, v37, v38);
}
