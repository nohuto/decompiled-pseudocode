/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0005B60
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00062F8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     VerifyChildMenu @ 0x1C013B334 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // edi
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // r14
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
  _BYTE v20[16]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v21; // [rsp+40h] [rbp-49h]
  __int128 v22; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v24[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v25[10]; // [rsp+90h] [rbp+7h] BYREF
  int v26; // [rsp+F0h] [rbp+67h]
  int v27; // [rsp+100h] [rbp+77h]
  char v28; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v26 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 1384);
  if ( (*(_DWORD *)(v2 + 1200) & 0x40000) == 0 )
    goto LABEL_59;
  v7 = *(struct tagWND **)(v2 + 1376);
  if ( !v7 || v7 != a1 )
    goto LABEL_59;
  if ( v2 == gptiCurrent )
  {
    if ( a2 )
    {
      v9 = ValidateHwnd(a2);
      v5 = v9;
      if ( !v9
        || (struct tagWND *)v9 == a1
        || *(struct tagWND **)(v9 + 80) == a1
        || v9 == *(_QWORD *)(v2 + 1384)
        || *(_QWORD *)(v9 + 16) == v2 )
      {
        v8 = 1400LL;
        goto LABEL_60;
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
        v26 = 1;
      }
      else if ( gpqForeground != *(_QWORD *)(v2 + 424) )
      {
        v27 = 1;
        if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
LABEL_26:
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v23[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v23;
          v23[1] = v5;
          if ( v5 )
            _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
          v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v24[0] = *(_QWORD *)(v13 + 408);
          *(_QWORD *)(v13 + 408) = v24;
          v24[1] = v6;
          if ( v6 )
            _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
          v14 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v25[0] = *(_QWORD *)(v14 + 408);
          *(_QWORD *)(v14 + 408) = v25;
          v25[1] = a1;
          _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
          *(_QWORD *)&v21 = v2 + 1384;
          *((_QWORD *)&v21 + 1) = v5;
          v22 = v21;
          HMAssignmentLock(&v22);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
          if ( v6 )
          {
            v15 = *(_QWORD *)(v2 + 424);
            if ( *(struct tagWND **)(v15 + 120) == a1 )
            {
              xxxSendNotifyMessage(
                v6,
                841LL,
                (unsigned __int8)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                0LL,
                0);
              v15 = *(_QWORD *)(v2 + 424);
            }
            if ( *(_QWORD *)(v15 + 112) == v6 )
            {
              xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 112LL);
            }
          }
          if ( v5 )
          {
            v16 = *(_QWORD *)(v5 + 16);
            if ( *(_QWORD *)(*(_QWORD *)(v16 + 424) + 120LL) == v5 )
            {
              xxxSendNotifyMessage(
                v5,
                841LL,
                (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) << 16,
                0LL,
                0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 120LL);
              v16 = *(_QWORD *)(v5 + 16);
            }
            if ( *(_QWORD *)(*(_QWORD *)(v16 + 424) + 112LL) == v5 )
            {
              xxxSendNotifyMessage(v5, 8LL, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 112LL);
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v28);
          if ( v5 )
          {
            SetOrClrWF(0LL, v5, 3968LL, 1LL);
            SetOrClrWF(1LL, v5, 3904LL, 1LL);
            VerifyChildMenu((struct tagWND *)v5);
            xxxSetWindowStyle(v5);
            xxxSetParentWorker((struct tagWND *)v5, a1, (struct tagWND *)v6, 0);
            if ( *(struct tagWND **)(v5 + 80) != a1
              || (v17 = *(_QWORD *)(v2 + 424), *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) != v17) )
            {
LABEL_58:
              ThreadUnlock1();
              ThreadUnlock1();
              ThreadUnlock1();
              return v3;
            }
            if ( gpqForeground == v17 && *(_QWORD *)(v2 + 1384) == v5 && *(struct tagWND **)(v17 + 120) == a1 )
              xxxSendNotifyMessage(v5, 841LL, 1LL, 0LL, 0);
          }
          if ( v6 )
          {
            if ( *(struct tagWND **)(v6 + 80) == a1 )
            {
              xxxSetParentWorker((struct tagWND *)v6, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
              SetOrClrWF(0LL, v6, 3904LL, 1LL);
              SetOrClrWF(1LL, v6, 3968LL, 1LL);
              VerifyChildMenu((struct tagWND *)v6);
              xxxSetWindowStyle(v6);
              v18 = *(_QWORD *)(v6 + 16);
              if ( *(_QWORD *)(v18 + 424) == *(_QWORD *)(v2 + 424) )
              {
                zzzAttachThreadInput(v2, v18, 0LL);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
                if ( v26 && gptiForeground == *(_QWORD *)(v6 + 16) && *(_QWORD *)(v2 + 424) == gpqForeground )
                  xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
                if ( v27 )
                {
                  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                    xxxSetForegroundWindow2(a1);
                }
              }
            }
          }
          v3 = 1;
          goto LABEL_58;
        }
      }
      v27 = 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v6 + 16) != v2 )
    {
      if ( *(struct tagWND **)(v6 + 80) != a1 )
        v6 = 0LL;
      goto LABEL_17;
    }
LABEL_59:
    v8 = 87LL;
    goto LABEL_60;
  }
  v8 = 5LL;
LABEL_60:
  UserSetLastError(v8);
  return 0LL;
}
