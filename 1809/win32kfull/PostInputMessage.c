/*
 * XREFs of PostInputMessage @ 0x1C00D3F4C
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C000272C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002824 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C00A5770 (EditionPostRawMouseInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostInputMessage @ 0x1C00D26D0 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x1C00D3EC0 (EditionPostMouseMoveToQ.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0103E6C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01328D0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01C47B8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01C7E50 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01CECC0 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01D9F90 (PostPointerEventMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01FB15C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 *     CalcWakeMask @ 0x1C0033E50 (CalcWakeMask.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C00D0E30 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C00D46D4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C00D46FC (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     GetInputDelegate @ 0x1C00D4844 (GetInputDelegate.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D4868 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00D4E68 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00D4F70 (DwmAsyncNotifyInputActivity.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D504C (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1C00D5A24 (PostUpdateKeyStateEvent.c)
 *     CleanInputMessage @ 0x1C00D5D60 (CleanInputMessage.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FF6FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 */

struct tagQMSG *PostInputMessage(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  int v6; // r15d
  unsigned int v7; // eax
  struct tagTHREADINFO *v8; // r11
  struct tagINPUT_MESSAGE_SOURCE *v9; // r14
  unsigned int v10; // r12d
  int v11; // r13d
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct tagTHREADINFO *v15; // rdi
  __int64 v16; // rdi
  char v17; // r12
  struct tagQMSG *result; // rax
  const struct tagQMSG *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  const struct tagQMSG *CoalesceableMouseMessage; // rax
  void *v29; // rax
  __int64 v30; // rax
  int v31; // r15d
  __int64 v32; // r14
  __int64 v33; // rax
  unsigned __int8 v34; // al
  bool v35; // zf
  struct _KEVENT *v36; // rcx
  __int64 v37; // rax
  _QWORD v38[9]; // [rsp+70h] [rbp-48h] BYREF
  struct tagTHREADINFO *v39; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v40; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  LARGE_INTEGER v42; // [rsp+E0h] [rbp+28h]
  __int64 v43; // [rsp+E8h] [rbp+30h]
  __int64 v44; // [rsp+F0h] [rbp+38h]
  LARGE_INTEGER v45; // [rsp+F8h] [rbp+40h]
  __int64 v46; // [rsp+100h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v47; // [rsp+108h] [rbp+50h]
  LARGE_INTEGER v48; // [rsp+110h] [rbp+58h]
  LARGE_INTEGER *v49; // [rsp+118h] [rbp+60h]
  va_list va1; // [rsp+120h] [rbp+68h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  v42.QuadPart = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v45.QuadPart = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, struct tagINPUT_MESSAGE_SOURCE *);
  v48.QuadPart = va_arg(va1, _QWORD);
  v49 = va_arg(va1, LARGE_INTEGER *);
  v6 = 0;
  v7 = CalcWakeMask(a3, a3, 0);
  v9 = v47;
  v10 = v7;
  v39 = v8;
  if ( !v47 || (v11 = (_DWORD)v8 + 1, *((_DWORD *)v47 + 1) != 2) )
    v11 = (int)v8;
  if ( (a3 == 513 || a3 == 516)
    && a2
    && (*(_DWORD *)(a2 + 244) & 6) != 0
    && *(struct tagTHREADINFO **)(*(_QWORD *)(a2 + 16) + 1240LL) == v8
    && v47
    && ((*(_DWORD *)v47 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( *(struct tagTHREADINFO **)(a1 + 136) == v8 )
    {
      v38[0] = a1 + 136;
      v38[1] = a2;
      HMAssignmentLock(v38);
    }
    *(_BYTE *)(a1 + 144) |= (a3 != 513) + 1;
  }
  else if ( *(_QWORD *)(a1 + 136) )
  {
    if ( a3 == 514 || a3 == 517 )
    {
      a2 = *(_QWORD *)(a1 + 136);
      v34 = (a3 == 514) - 3;
      v35 = (v34 & *(_BYTE *)(a1 + 144)) == 0;
      *(_BYTE *)(a1 + 144) &= v34;
      if ( v35 )
        HMAssignmentUnlock(a1 + 136);
    }
    else if ( a3 == 512 )
    {
      a2 = *(_QWORD *)(a1 + 136);
    }
  }
  InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(a2, v10);
  v15 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    a1 = *((_QWORD *)v15 + 54);
    v6 = 1;
    v39 = v15;
  }
  v16 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 388) & 1) != 0 )
    PostUpdateKeyStateEvent(a1, v13, v14);
  v17 = v46;
  if ( (v46 & 1) != 0 || !v16 || (*(_DWORD *)(v16 + 100) & 2) != 0 )
    v16 = 0LL;
  if ( v16 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, (unsigned __int64 *)va, (struct tagQMSG *)v16, v9);
    v19 = CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      InputTraceLogging::Delivery::CoalesceMessage(CoalesceableMouseMessage);
      CleanInputMessage(a3, v19);
LABEL_16:
      v20 = v44;
      v21 = (32 * v6) | *((_DWORD *)v19 + 25) & 0xFFFFFFDF;
      *((_QWORD *)v19 + 17) = v44;
      *((_DWORD *)v19 + 25) = v21;
      if ( a2 )
      {
        v24 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL);
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 120);
        if ( v22 )
          v23 = *(_QWORD *)(v22 + 16);
        else
          v23 = *(_QWORD *)(a1 + 96);
        v24 = *(_DWORD *)(*(_QWORD *)(v23 + 424) + 280LL);
      }
      StoreQMessage(
        (LARGE_INTEGER *)v19,
        (InputTransform *)a2,
        a3,
        (LARGE_INTEGER)v40,
        v42,
        v43,
        v20,
        0,
        v45,
        v17,
        (DWORD *)v9,
        v24,
        v48,
        v49);
      InputTraceLogging::Delivery::PostInputMessage(v19);
      if ( (unsigned int)IsPointerInputMessageWithState() )
        CTouchProcessor::MarkPointerMessageGenerated(
          gpTouchProcessor,
          a3,
          *((_QWORD *)v19 + 5),
          -__CFSHR__(*((_DWORD *)v19 + 25), 6),
          v19);
      if ( (unsigned int)IsMiPMouseMessage(a3) )
      {
        if ( v9 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v9) )
          {
            *((_DWORD *)v19 + 25) |= 0x800u;
            if ( a2 )
              *((_DWORD *)v19 + 25) ^= (*((_DWORD *)v19 + 25) ^ ((unsigned int)InputTransform::OnInput(
                                                                                 (InputTransform *)a2,
                                                                                 *((struct tagWND **)v19 + 16),
                                                                                 v27) << 13)) & 0x2000;
          }
        }
      }
      if ( v11 )
        goto LABEL_27;
      if ( *(_DWORD *)(a1 + 392) <= 1u )
        goto LABEL_27;
      v26 = gptiCurrent;
      v30 = *(_QWORD *)(gptiCurrent + 464LL);
      if ( *(_QWORD *)(v30 + 48) || *(_QWORD *)(v30 + 56) )
        goto LABEL_27;
      v31 = 0;
      if ( a2 && (v32 = *(_QWORD *)(a2 + 16), a2 == *(_QWORD *)(v32 + 1368)) )
      {
        v31 = 1;
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 120);
        if ( !v33 )
          goto LABEL_27;
        v32 = *(_QWORD *)(v33 + 16);
        if ( v33 != *(_QWORD *)(v32 + 1368) )
          goto LABEL_27;
      }
      if ( !v32 || (unsigned int)IsAdaptiveQueueDetachExempted(v32) )
        goto LABEL_27;
      if ( a3 == 260 || a3 == 513 || a3 == 516 || a3 == 519 )
        goto LABEL_79;
      if ( a3 <= 0x209 )
      {
LABEL_27:
        if ( a3 - 256 <= 1 || a3 - 513 <= 0xD && (v26 = 8707LL, _bittest((const int *)&v26, a3 - 513)) )
        {
          v29 = (void *)ReferenceDwmApiPort(v26, v25);
          DwmAsyncNotifyInputActivity(v29);
        }
        goto LABEL_30;
      }
      if ( a3 <= 0x20B || a3 == 526 )
        goto LABEL_79;
      if ( a3 != 581 )
      {
        if ( a3 == 582 )
        {
LABEL_79:
          KeSetEvent(*(PRKEVENT *)(v32 + 1360), 1, 0);
          goto LABEL_27;
        }
        goto LABEL_27;
      }
      if ( v31 )
      {
        v36 = *(struct _KEVENT **)(*(_QWORD *)(a2 + 16) + 1360LL);
      }
      else
      {
        v37 = *(_QWORD *)(v32 + 672);
        if ( !v37 || (*(_DWORD *)(v37 + 196) & 0x100000) == 0 )
          goto LABEL_30;
        v36 = *(struct _KEVENT **)(v32 + 1360);
      }
      KeSetEvent(v36, 1, 0);
LABEL_30:
      WakeSomeone(a1, v39, a3, v19);
      return (struct tagQMSG *)1;
    }
  }
  result = AllocQEntryEx((struct tagMLIST *)(a1 + 24), 0LL, 0);
  v19 = result;
  if ( result )
    goto LABEL_16;
  return result;
}
