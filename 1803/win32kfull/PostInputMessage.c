/*
 * XREFs of PostInputMessage @ 0x1C0019B84
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0004CB8 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0004DB0 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionPostMouseMoveToQ @ 0x1C00199C0 (EditionPostMouseMoveToQ.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0057DEC (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C006AA30 (EditionPostRawMouseInputMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostInputMessage @ 0x1C00F7B00 (EditionPostInputMessage.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C010FD90 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01A2BA4 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01A5EF0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01ABAD0 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01B7760 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01D64DC (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0019A54 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     GetInputDelegate @ 0x1C0019B34 (GetInputDelegate.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0019B5C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C001C604 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     IsPointerInputMessageWithState @ 0x1C0023E14 (IsPointerInputMessageWithState.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     CalcWakeMask @ 0x1C00488C0 (CalcWakeMask.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E5604 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4B38 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00F7A28 (DwmAsyncNotifyInputActivity.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FE960 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     CleanInputMessage @ 0x1C0104D3C (CleanInputMessage.c)
 */

struct tagQMSG *PostInputMessage(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  int v6; // ebp
  int v7; // eax
  struct tagTHREADINFO *v8; // r11
  struct tagINPUT_MESSAGE_SOURCE *v9; // r15
  int v10; // r12d
  int v11; // r13d
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rdi
  int v15; // r12d
  struct tagQMSG *result; // rax
  struct tagQMSG *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const struct tagINPUT_TRANSFORM *v24; // r9
  void *v25; // rax
  struct tagQMSG *CoalesceableMouseMessage; // rax
  __int64 v27; // rax
  int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rbp
  unsigned __int8 v31; // al
  bool v32; // zf
  struct _KEVENT *v33; // rcx
  __int64 v34; // rax
  _QWORD v35[9]; // [rsp+70h] [rbp-48h] BYREF
  struct tagTHREADINFO *v36; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v39; // [rsp+E0h] [rbp+28h]
  __int64 v40; // [rsp+E8h] [rbp+30h]
  __int64 v41; // [rsp+F0h] [rbp+38h]
  __int64 v42; // [rsp+F8h] [rbp+40h]
  __int64 v43; // [rsp+100h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v44; // [rsp+108h] [rbp+50h]
  __int64 v45; // [rsp+110h] [rbp+58h]
  __int64 v46; // [rsp+118h] [rbp+60h]
  va_list va1; // [rsp+120h] [rbp+68h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v37 = va_arg(va1, _QWORD);
  v39 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, _QWORD);
  v42 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, struct tagINPUT_MESSAGE_SOURCE *);
  v45 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v6 = 0;
  v7 = CalcWakeMask(a3, a3, 0LL);
  v9 = v44;
  v10 = v7;
  v36 = v8;
  if ( !v44 || (v11 = (_DWORD)v8 + 1, *((_DWORD *)v44 + 1) != 2) )
    v11 = (int)v8;
  if ( (a3 == 513 || a3 == 516)
    && a2
    && (*(_DWORD *)(a2 + 256) & 6) != 0
    && *(struct tagTHREADINFO **)(*(_QWORD *)(a2 + 16) + 1232LL) == v8
    && v44
    && ((*(_DWORD *)v44 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( *(struct tagTHREADINFO **)(a1 + 136) == v8 )
    {
      v35[0] = a1 + 136;
      v35[1] = a2;
      HMAssignmentLock(v35);
    }
    *(_BYTE *)(a1 + 144) |= (a3 != 513) + 1;
  }
  else if ( *(_QWORD *)(a1 + 136) )
  {
    if ( a3 == 514 || a3 == 517 )
    {
      a2 = *(_QWORD *)(a1 + 136);
      v31 = (a3 == 514) - 3;
      v32 = (v31 & *(_BYTE *)(a1 + 144)) == 0;
      *(_BYTE *)(a1 + 144) &= v31;
      if ( v32 )
        HMAssignmentUnlock(a1 + 136);
    }
    else if ( a3 == 512 )
    {
      a2 = *(_QWORD *)(a1 + 136);
    }
  }
  InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(a2, v10);
  v13 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    a1 = *((_QWORD *)v13 + 53);
    v6 = 1;
    v36 = v13;
  }
  v14 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 388) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v15 = v43;
  if ( (v43 & 1) != 0 || !v14 || (*(_DWORD *)(v14 + 100) & 2) != 0 )
    v14 = 0LL;
  if ( v14 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, (unsigned __int64 *)va, (struct tagQMSG *)v14, v9);
    v17 = CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      CleanInputMessage(a3, CoalesceableMouseMessage);
LABEL_16:
      *((_DWORD *)v17 + 25) = *((_DWORD *)v17 + 25) & 0xFFFFFFDF | (32 * v6);
      if ( a2 )
      {
        v20 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL);
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 120);
        if ( v18 )
          v19 = *(_QWORD *)(v18 + 16);
        else
          v19 = *(_QWORD *)(a1 + 96);
        v20 = *(_DWORD *)(*(_QWORD *)(v19 + 416) + 280LL);
      }
      StoreQMessage(v17, a2, a3, v37, v39, v40, v41, 0, v42, v15, v9, v20, v45, v46);
      if ( (unsigned int)IsPointerInputMessageWithState(a3) )
        CTouchProcessor::MarkPointerMessageGenerated(
          gpTouchProcessor,
          a3,
          *((_QWORD *)v17 + 5),
          -__CFSHR__(*((_DWORD *)v17 + 25), 6),
          v17);
      if ( IsMiPMouseMessage(a3) )
      {
        if ( v9 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v9) )
          {
            *((_DWORD *)v17 + 25) |= 0x800u;
            if ( a2 )
              *((_DWORD *)v17 + 25) ^= (*((_DWORD *)v17 + 25) ^ ((unsigned int)InputTransform::OnInput(
                                                                                 (InputTransform *)a2,
                                                                                 *((struct tagWND **)v17 + 16),
                                                                                 0LL,
                                                                                 v24) << 13)) & 0x2000;
          }
        }
      }
      if ( v11 )
        goto LABEL_27;
      if ( *(_DWORD *)(a1 + 392) <= 1u )
        goto LABEL_27;
      v22 = gptiCurrent;
      v27 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( *(_QWORD *)(v27 + 48) || *(_QWORD *)(v27 + 56) )
        goto LABEL_27;
      v28 = 0;
      if ( a2 && (v30 = *(_QWORD *)(a2 + 16), a2 == *(_QWORD *)(v30 + 1376)) )
      {
        v28 = 1;
      }
      else
      {
        v29 = *(_QWORD *)(a1 + 120);
        if ( !v29 )
          goto LABEL_27;
        v30 = *(_QWORD *)(v29 + 16);
        if ( v29 != *(_QWORD *)(v30 + 1376) )
          goto LABEL_27;
      }
      if ( !v30 || IsAdaptiveQueueDetachExempted(v30) )
        goto LABEL_27;
      if ( a3 == 260 || a3 == 513 || a3 == 516 || a3 == 519 )
        goto LABEL_78;
      if ( a3 <= 0x209 )
      {
LABEL_27:
        if ( a3 - 256 <= 1 || a3 - 513 <= 0xD && (v22 = 8707LL, _bittest((const int *)&v22, a3 - 513)) )
        {
          v25 = (void *)ReferenceDwmApiPort(v22, v21, v23);
          DwmAsyncNotifyInputActivity(v25);
        }
        goto LABEL_30;
      }
      if ( a3 <= 0x20B || a3 == 526 )
        goto LABEL_78;
      if ( a3 != 581 )
      {
        if ( a3 == 582 )
        {
LABEL_78:
          KeSetEvent(*(PRKEVENT *)(v30 + 1368), 1, 0);
          goto LABEL_27;
        }
        goto LABEL_27;
      }
      if ( v28 )
      {
        v33 = *(struct _KEVENT **)(*(_QWORD *)(a2 + 16) + 1368LL);
      }
      else
      {
        v34 = *(_QWORD *)(v30 + 664);
        if ( !v34 || (*(_DWORD *)(v34 + 196) & 0x100000) == 0 )
          goto LABEL_30;
        v33 = *(struct _KEVENT **)(v30 + 1368);
      }
      KeSetEvent(v33, 1, 0);
LABEL_30:
      WakeSomeone(a1, v36, a3, v17);
      return (struct tagQMSG *)1;
    }
  }
  result = AllocQEntryEx((struct tagMLIST *)(a1 + 24), 0LL, 0);
  v17 = result;
  if ( result )
    goto LABEL_16;
  return result;
}
