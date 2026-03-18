/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C001F240
 * Callers:
 *     <none>
 * Callees:
 *     IsProcessedByInputService @ 0x1C0012034 (IsProcessedByInputService.c)
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 *     HasHidTable @ 0x1C001E790 (HasHidTable.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0025940 (AdjustPwndPtiPqForDelegation.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetMouseKeyFlags @ 0x1C0083C88 (GetMouseKeyFlags.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        int a12,
        void *a13,
        __int64 a14,
        unsigned __int16 a15)
{
  __int64 v16; // r9
  __int64 v17; // rdi
  int v18; // r14d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // r12
  int v24; // esi
  char v25; // al
  __int64 v26; // rax
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v28; // rax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 *v33; // rbx
  __int64 v34; // rax
  __int128 *v35; // r11
  __int64 v36; // rax
  __int128 *v37; // r10
  __int64 v38; // r9
  __int128 *v39; // r8
  __int64 v40; // xmm1_8
  __int128 v41; // xmm0
  __int64 v42; // xmm1_8
  __int128 v43; // xmm0
  __int64 v44; // xmm1_8
  __int128 v45; // xmm0
  __int64 v46; // xmm1_8
  __int128 v47; // xmm0
  __int64 v48; // xmm1_8
  __int128 v49; // xmm0
  __int64 v50; // xmm1_8
  __int128 v51; // xmm0
  __int64 v52; // xmm1_8
  int v53; // [rsp+78h] [rbp-49h] BYREF
  __int128 *v54; // [rsp+80h] [rbp-41h] BYREF
  __int64 v55; // [rsp+88h] [rbp-39h] BYREF
  __int64 v56; // [rsp+90h] [rbp-31h] BYREF
  __int128 v57; // [rsp+98h] [rbp-29h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-19h]
  _BYTE v59[24]; // [rsp+B0h] [rbp-11h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL)
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 48LL)
    || a4
    || (gafAsyncKeyState[4] & 0x10) == 0
    || (a5 != 9 || (a6 & 1) != 0) && (a5 != 27 || (a6 & 2) != 0) )
  {
    if ( !gpqForeground )
    {
      if ( !a4 && ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 6u )
        PostShellHookMessagesEx(0xCu, (unsigned __int64)(unsigned __int16)(a5 - 165) << 16, 0LL);
      return 0LL;
    }
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v59, gpqForeground);
    v18 = a5;
    v53 = a5;
    v19 = *(_QWORD *)(gpqForeground + 32LL);
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL))
      || (v20 = PtiKbdFromQ(gpqForeground), !(unsigned int)HasHidTable(v20))
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 824LL) + 100LL) & 0x20) == 0
      || (v22 = PtiKbdFromQ(v21), (unsigned int)HasHidTable(v22))
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 824LL) + 100LL) & 0x400) != 0
      && (unsigned __int8)(a5 + 90) <= 0x11u )
    {
      if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
      {
        v23 = 0;
        v18 = (a7 << 16) | a5;
        v53 = v18;
      }
      else
      {
        v23 = a7;
      }
      v24 = ((a9 | v23) << 16) | 1;
      if ( v19
        && *(_DWORD *)(v19 + 24) == a15
        && ((a15 - 256) & 0xFFFB) == 0
        && *(_QWORD *)(v19 + 32) == v18
        && !IsProcessedByInputService(v19)
        && *(_WORD *)(v19 + 42) == HIWORD(v24) )
      {
        if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL))
          || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
        {
          v25 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL));
          CKeyboardProcessor::ForwardInputToISM(a1 != 0, v23, a8, a10, a13, a12, v25 == 0, 0LL);
        }
        if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL)) )
        {
          *(_QWORD *)(v19 + 40) = (HIWORD(v24) << 16) | (unsigned __int16)(*(_WORD *)(v19 + 40) + 1);
          WakeSomeone(gpqForeground, 0LL, a15, v19);
        }
        return 0LL;
      }
      if ( (unsigned __int8)(a5 + 90) > 0x11u )
        goto LABEL_48;
      if ( !a4 && gpqForeground )
      {
        if ( (unsigned __int8)(a5 + 83) <= 2u )
        {
          v26 = *(_QWORD *)(gpqForeground + 120LL);
          if ( v26 || (v26 = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v26 + 16) + 424LL) )
            {
              MouseKeyFlags = GetMouseKeyFlags();
              PostShellHookMessagesEx(0xCu, ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | MouseKeyFlags, 0LL);
            }
          }
        }
        else
        {
          PostEventMessageEx(*(struct tagTHREADINFO **)(gpqForeground + 104LL), 0, 0LL, a5, (__int64)a11);
        }
      }
      if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL))
        || (v28 = PtiKbdFromQ(gpqForeground), !(unsigned int)HasHidTable(v28))
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 824LL) + 100LL) & 0x20) == 0 )
      {
LABEL_48:
        if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL))
          || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
        {
          v30 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL));
          CKeyboardProcessor::ForwardInputToISM(a1 != 0, v23, a8, a10, a13, a12, v30 == 0, 0LL);
        }
        if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL)) )
        {
          PostPendingMouseMove(gpqForeground);
          v56 = 0LL;
          v55 = 0LL;
          v54 = (__int128 *)gpqForeground;
          v53 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (unsigned int)&v54,
                               (unsigned int)&v56,
                               (unsigned int)&v55,
                               a15,
                               (__int64)a11,
                               (__int64)&v53) )
          {
            v31 = *((_QWORD *)v54 + 16);
            if ( v31 )
              v32 = *(_QWORD *)(v31 + 16);
            else
              v32 = 0LL;
            v33 = (__int128 *)gObjDummyLock;
            if ( v32 )
              v33 = (__int128 *)(v32 + 384);
            v34 = *((_QWORD *)v54 + 12);
            v35 = (__int128 *)gObjDummyLock;
            if ( v34 )
              v35 = (__int128 *)(v34 + 384);
            v36 = *((_QWORD *)v54 + 13);
            v37 = (__int128 *)gObjDummyLock;
            if ( v36 )
              v37 = (__int128 *)(v36 + 384);
            v38 = gObjDummyLock;
            if ( v55 )
              v38 = v55 + 384;
            v39 = (__int128 *)gObjDummyLock;
            if ( v56 )
              v39 = (__int128 *)(v56 + 56);
            v40 = *((_QWORD *)&gpsiLock + 2);
            v57 = gpsiLock;
            v41 = *v39;
            v58 = v40;
            v42 = *((_QWORD *)v39 + 2);
            v57 = v41;
            v43 = *(_OWORD *)v38;
            v58 = v42;
            v44 = *(_QWORD *)(v38 + 16);
            v57 = v43;
            v45 = *v54;
            v58 = v44;
            v46 = *((_QWORD *)v54 + 2);
            v57 = v45;
            v47 = *v37;
            v58 = v46;
            v48 = *((_QWORD *)v37 + 2);
            v57 = v47;
            v49 = *v35;
            v58 = v48;
            v50 = *((_QWORD *)v35 + 2);
            v57 = v49;
            v51 = *v33;
            v58 = v50;
            v52 = *((_QWORD *)v33 + 2);
            v57 = v51;
            v58 = v52;
            PostInputMessage(gpqForeground, 0LL, a15, v24, a12, 0LL, a14, 0, a11, (__int64)a13, 0LL, v53, v55);
          }
        }
        return 0LL;
      }
    }
    return 1LL;
  }
  v57 = 0uLL;
  v58 = 0LL;
  v17 = gpqForeground;
  if ( !gpqForeground )
    v17 = *(_QWORD *)(gptiRit + 424LL);
  ++*(_DWORD *)(v17 + 404);
  PushW32ThreadLock(v17, &v57, UnlockQueue, v16);
  xxxNextWindow(v17, a5);
  PopAndFreeAlwaysW32ThreadLock(&v57);
  return 0LL;
}
