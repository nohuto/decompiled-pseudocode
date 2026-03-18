/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0138F10
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     LockQCursor @ 0x1C0020550 (LockQCursor.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0115874 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0132EE8 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     VerifyChildMenu @ 0x1C0165C60 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // edi
  __int64 v7; // rsi
  __int64 v8; // r14
  struct tagWND *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct tagWND *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v33[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v34; // [rsp+38h] [rbp-41h] BYREF
  __int64 v35; // [rsp+40h] [rbp-39h]
  __int64 v36; // [rsp+48h] [rbp-31h]
  __int64 v37; // [rsp+50h] [rbp-29h] BYREF
  __int64 v38; // [rsp+58h] [rbp-21h]
  __int64 v39; // [rsp+60h] [rbp-19h]
  __int64 v40; // [rsp+68h] [rbp-11h] BYREF
  struct tagWND *v41; // [rsp+70h] [rbp-9h]
  __int64 v42; // [rsp+78h] [rbp-1h]
  __int128 v43; // [rsp+80h] [rbp+7h]
  _OWORD v44[4]; // [rsp+90h] [rbp+17h] BYREF
  int v45; // [rsp+E0h] [rbp+67h]
  int v46; // [rsp+F0h] [rbp+77h]
  char v47; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = 0;
  v7 = 0LL;
  v45 = 0;
  v8 = *(_QWORD *)(v4 + 1400);
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( (*(_DWORD *)(v4 + 1224) & 0x40000) == 0 )
    goto LABEL_58;
  v9 = *(struct tagWND **)(v4 + 1392);
  if ( !v9 || v9 != a1 )
    goto LABEL_58;
  if ( v4 == gptiCurrent )
  {
    if ( a2 )
    {
      v11 = ValidateHwnd(a2);
      v7 = v11;
      if ( !v11
        || (struct tagWND *)v11 == a1
        || *(struct tagWND **)(v11 + 104) == a1
        || v11 == *(_QWORD *)(v4 + 1400)
        || *(_QWORD *)(v11 + 16) == v4 )
      {
        v10 = 1400LL;
        goto LABEL_59;
      }
    }
    if ( !v8 )
    {
LABEL_17:
      if ( gpqForeground
        && v8
        && (v12 = *(_QWORD *)(v4 + 424), gpqForeground == v12)
        && (a2 = *(_QWORD *)(v8 + 16), *(_QWORD *)(a2 + 424) == v12)
        && gptiForeground == a2 )
      {
        v45 = 1;
      }
      else if ( gpqForeground != *(_QWORD *)(v4 + 424) )
      {
        v46 = 1;
        if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
LABEL_26:
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
          v34 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
          v35 = v7;
          if ( v7 )
            HMLockObject(v7);
          v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
          v37 = *(_QWORD *)(v16 + 408);
          *(_QWORD *)(v16 + 408) = &v37;
          v38 = v8;
          if ( v8 )
            HMLockObject(v8);
          v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18);
          v40 = *(_QWORD *)(v19 + 408);
          *(_QWORD *)(v19 + 408) = &v40;
          v41 = a1;
          HMLockObject(a1);
          *(_QWORD *)&v43 = v4 + 1400;
          *((_QWORD *)&v43 + 1) = v7;
          v44[0] = v43;
          HMAssignmentLock(v44);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v47);
          if ( v8 )
          {
            v20 = *(_QWORD *)(v4 + 424);
            if ( *(struct tagWND **)(v20 + 128) == a1 )
            {
              xxxSendNotifyMessage(
                (struct tagWND *)v8,
                0x349u,
                (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                0LL,
                0);
              v20 = *(_QWORD *)(v4 + 424);
            }
            if ( *(_QWORD *)(v20 + 120) == v8 )
            {
              xxxSendNotifyMessage((struct tagWND *)v8, 8u, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 120LL);
            }
          }
          if ( v7 )
          {
            v21 = *(_QWORD *)(v7 + 16);
            if ( *(_QWORD *)(*(_QWORD *)(v21 + 424) + 128LL) == v7 )
            {
              xxxSendNotifyMessage(
                (struct tagWND *)v7,
                0x349u,
                (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x20) << 16,
                0LL,
                0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) + 128LL);
              v21 = *(_QWORD *)(v7 + 16);
            }
            if ( *(_QWORD *)(*(_QWORD *)(v21 + 424) + 120LL) == v7 )
            {
              xxxSendNotifyMessage((struct tagWND *)v7, 8u, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) + 120LL);
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v47);
          if ( v7 )
          {
            SetOrClrWF(0, v7, 0xF80u, 1);
            SetOrClrWF(1, v7, 0xF40u, 1);
            VerifyChildMenu((struct tagWND *)v7);
            xxxSetWindowStyle((struct tagWND *)v7, -20, *(_DWORD *)(*(_QWORD *)(v7 + 40) + 24LL) | 0x80000);
            xxxSetParentWorker((struct tagWND *)v7, a1, (struct tagWND *)v8, 0);
            if ( *(struct tagWND **)(v7 + 104) != a1
              || (v23 = *(_QWORD *)(v4 + 424), *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) != v23) )
            {
LABEL_57:
              ThreadUnlock1(v23, v22, v24);
              ThreadUnlock1(v27, v26, v28);
              ThreadUnlock1(v30, v29, v31);
              return v5;
            }
            if ( *(_QWORD *)(v4 + 1400) == v7 && *(struct tagWND **)(v23 + 128) == a1 )
            {
              xxxSendNotifyMessage((struct tagWND *)v7, 0x349u, 1LL, 0LL, 0);
              xxxDeliverRestoreFocusMessage((struct tagWND *)v7);
            }
          }
          if ( v8 )
          {
            if ( *(struct tagWND **)(v8 + 104) == a1 )
            {
              xxxSetParentWorker((struct tagWND *)v8, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
              SetOrClrWF(0, v8, 0xF40u, 1);
              SetOrClrWF(1, v8, 0xF80u, 1);
              VerifyChildMenu((struct tagWND *)v8);
              xxxSetWindowStyle((struct tagWND *)v8, -20, *(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL) & 0xFFF7FFFF);
              v22 = *(_QWORD *)(v8 + 16);
              if ( *(_QWORD *)(v22 + 424) == *(_QWORD *)(v4 + 424) )
              {
                zzzAttachThreadInput(v4, v22, 0);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
                LockQCursor(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL), (struct tagCURSOR *)gasyscur[1]);
                if ( v45 && gptiForeground == *(_QWORD *)(v8 + 16) && *(_QWORD *)(v4 + 424) == gpqForeground )
                  xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v4, 0LL, v25);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
                if ( v46 )
                {
                  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                    xxxSetForegroundWindow2((__int64)a1, 0LL, 2);
                }
              }
            }
          }
          v5 = 1;
          goto LABEL_57;
        }
      }
      v46 = 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v8 + 16) != v4 )
    {
      if ( *(struct tagWND **)(v8 + 104) != a1 )
        v8 = 0LL;
      goto LABEL_17;
    }
LABEL_58:
    v10 = 87LL;
    goto LABEL_59;
  }
  v10 = 5LL;
LABEL_59:
  UserSetLastError(v10, a2, a3, a4);
  return 0LL;
}
