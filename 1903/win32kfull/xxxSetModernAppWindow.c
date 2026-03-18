/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0010F40
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0010414 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     LockQCursor @ 0x1C0011F20 (LockQCursor.c)
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0014388 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     VerifyChildMenu @ 0x1C0164690 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  struct tagWND *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v20[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  __int64 v22; // [rsp+40h] [rbp-39h]
  __int64 v23; // [rsp+48h] [rbp-31h]
  __int64 v24; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h]
  __int64 v26; // [rsp+60h] [rbp-19h]
  __int64 v27; // [rsp+68h] [rbp-11h] BYREF
  struct tagWND *v28; // [rsp+70h] [rbp-9h]
  __int64 v29; // [rsp+78h] [rbp-1h]
  __int128 v30; // [rsp+80h] [rbp+7h]
  __int128 v31[4]; // [rsp+90h] [rbp+17h] BYREF
  int v32; // [rsp+E0h] [rbp+67h]
  int v33; // [rsp+F0h] [rbp+77h]
  char v34; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v5 = 0LL;
  v32 = 0;
  v6 = *(_QWORD *)(v2 + 1400);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (*(_DWORD *)(v2 + 1224) & 0x40000) == 0 )
    goto LABEL_58;
  v7 = *(struct tagWND **)(v2 + 1392);
  if ( !v7 || v7 != a1 )
    goto LABEL_58;
  if ( v2 == gptiCurrent )
  {
    if ( a2 )
    {
      v9 = ValidateHwnd(a2);
      v5 = v9;
      if ( !v9
        || (struct tagWND *)v9 == a1
        || *(struct tagWND **)(v9 + 104) == a1
        || v9 == *(_QWORD *)(v2 + 1400)
        || *(_QWORD *)(v9 + 16) == v2 )
      {
        v8 = 1400LL;
        goto LABEL_59;
      }
    }
    if ( !v6 )
    {
LABEL_17:
      if ( gpqForeground
        && v6
        && (v10 = *(_QWORD *)(v2 + 424), gpqForeground == v10)
        && (v11 = *(_QWORD *)(v6 + 16), *(_QWORD *)(v11 + 424) == v10)
        && gptiForeground == v11 )
      {
        v32 = 1;
      }
      else if ( gpqForeground != *(_QWORD *)(v2 + 424) )
      {
        v33 = 1;
        if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
LABEL_26:
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v21 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
          v22 = v5;
          if ( v5 )
            HMLockObject(v5);
          v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v24 = *(_QWORD *)(v13 + 408);
          *(_QWORD *)(v13 + 408) = &v24;
          v25 = v6;
          if ( v6 )
            HMLockObject(v6);
          v14 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v27 = *(_QWORD *)(v14 + 408);
          *(_QWORD *)(v14 + 408) = &v27;
          v28 = a1;
          HMLockObject(a1);
          *(_QWORD *)&v30 = v2 + 1400;
          *((_QWORD *)&v30 + 1) = v5;
          v31[0] = v30;
          HMAssignmentLock(v31);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v34);
          if ( v6 )
          {
            v15 = *(_QWORD *)(v2 + 424);
            if ( *(struct tagWND **)(v15 + 128) == a1 )
            {
              xxxSendNotifyMessage(
                v6,
                841LL,
                (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                0LL,
                0);
              v15 = *(_QWORD *)(v2 + 424);
            }
            if ( *(_QWORD *)(v15 + 120) == v6 )
            {
              xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 120LL);
            }
          }
          if ( v5 )
          {
            v16 = *(_QWORD *)(v5 + 16);
            if ( *(_QWORD *)(*(_QWORD *)(v16 + 424) + 128LL) == v5 )
            {
              xxxSendNotifyMessage(
                v5,
                841LL,
                (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) << 16,
                0LL,
                0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 128LL);
              v16 = *(_QWORD *)(v5 + 16);
            }
            if ( *(_QWORD *)(*(_QWORD *)(v16 + 424) + 120LL) == v5 )
            {
              xxxSendNotifyMessage(v5, 8LL, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 120LL);
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v34);
          if ( v5 )
          {
            SetOrClrWF(0LL, v5, 3968LL, 1LL);
            SetOrClrWF(1LL, v5, 3904LL, 1LL);
            VerifyChildMenu((struct tagWND *)v5);
            xxxSetWindowStyle((struct tagWND *)v5);
            xxxSetParentWorker((struct tagWND *)v5, a1, (struct tagWND *)v6, 0);
            if ( *(struct tagWND **)(v5 + 104) != a1
              || (v17 = *(_QWORD *)(v2 + 424), *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) != v17) )
            {
LABEL_57:
              ThreadUnlock1();
              ThreadUnlock1();
              ThreadUnlock1();
              return v3;
            }
            if ( *(_QWORD *)(v2 + 1400) == v5 && *(struct tagWND **)(v17 + 128) == a1 )
            {
              xxxSendNotifyMessage(v5, 841LL, 1LL, 0LL, 0);
              xxxDeliverRestoreFocusMessage((struct tagWND *)v5);
            }
          }
          if ( v6 )
          {
            if ( *(struct tagWND **)(v6 + 104) == a1 )
            {
              xxxSetParentWorker((struct tagWND *)v6, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
              SetOrClrWF(0LL, v6, 3904LL, 1LL);
              SetOrClrWF(1LL, v6, 3968LL, 1LL);
              VerifyChildMenu((struct tagWND *)v6);
              xxxSetWindowStyle((struct tagWND *)v6);
              v18 = *(_QWORD *)(v6 + 16);
              if ( *(_QWORD *)(v18 + 424) == *(_QWORD *)(v2 + 424) )
              {
                zzzAttachThreadInput(v2, v18, 0LL);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
                LockQCursor(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL), gasyscur[1]);
                if ( v32 && gptiForeground == *(_QWORD *)(v6 + 16) && *(_QWORD *)(v2 + 424) == gpqForeground )
                  xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
                if ( v33 )
                {
                  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                    xxxSetForegroundWindow2(a1, 0LL, 2LL);
                }
              }
            }
          }
          v3 = 1;
          goto LABEL_57;
        }
      }
      v33 = 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v6 + 16) != v2 )
    {
      if ( *(struct tagWND **)(v6 + 104) != a1 )
        v6 = 0LL;
      goto LABEL_17;
    }
LABEL_58:
    v8 = 87LL;
    goto LABEL_59;
  }
  v8 = 5LL;
LABEL_59:
  UserSetLastError(v8);
  return 0LL;
}
