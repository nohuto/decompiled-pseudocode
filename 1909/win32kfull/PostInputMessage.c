/*
 * XREFs of PostInputMessage @ 0x1C002A06C
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0002854 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002A5C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001D320 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostMouseMoveToQ @ 0x1C00293C0 (EditionPostMouseMoveToQ.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0085D10 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00E7FCC (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostInputMessage @ 0x1C00F1F20 (EditionPostInputMessage.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D78F8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01DB104 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01E3280 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01EF700 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211A10 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C002A7A4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C002A7CC (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C002AC4C (IsPointerInputMessageWithState.c)
 *     PtiKbdFromQ @ 0x1C002BD30 (PtiKbdFromQ.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C002BD4C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     StoreQMessage @ 0x1C0045990 (StoreQMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E3C40 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00F1810 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00F8EFC (DwmAsyncNotifyInputActivity.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FE144 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     CleanInputMessage @ 0x1C0105424 (CleanInputMessage.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0106D90 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall PostInputMessage(
        struct tagQ *a1,
        InputTransform *this,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  int v14; // esi
  struct tagINPUT_MESSAGE_SOURCE *v16; // r15
  BOOL v19; // r12d
  __int64 v20; // rdi
  int v21; // r13d
  __int64 result; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // esi
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  const struct tagQMSG *CoalesceableMouseMessage; // rax
  void *v31; // rax
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rsi
  struct _KEVENT *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v38; // [rsp+C8h] [rbp+20h] BYREF

  v38 = a4;
  v14 = a13;
  v16 = a10;
  v37 = a14 & -(__int64)(a13 != 0);
  v19 = a10 && *((_DWORD *)a10 + 1) == 2;
  v20 = *((_QWORD *)a1 + 4);
  if ( (*((_DWORD *)a1 + 99) & 1) != 0 )
    PostUpdateKeyStateEvent();
  v21 = a9;
  if ( (a9 & 1) != 0 || !v20 || (*(_DWORD *)(v20 + 100) & 2) != 0 )
    v20 = 0LL;
  if ( v20 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, &v38, (struct tagQMSG *)v20, v16);
    v23 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      InputTraceLogging::Delivery::CoalesceMessage(CoalesceableMouseMessage);
      CleanInputMessage(a3, v23);
LABEL_11:
      v24 = a7;
      v25 = (*(_DWORD *)(v23 + 100) ^ (32 * v14)) & 0x20;
      *(_QWORD *)(v23 + 136) = a7;
      *(_DWORD *)(v23 + 100) ^= v25;
      if ( this )
        v26 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
      else
        v26 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a1) + 416) + 280LL);
      StoreQMessage(v23, this, a3, v38, a5, a6, v24, 0, a8, v21, v16, v26, a11, a12);
      InputTraceLogging::Delivery::PostInputMessage((const struct tagQMSG *)v23, a1);
      if ( (unsigned int)IsPointerInputMessageWithState(a3) )
        CTouchProcessor::MarkPointerMessageGenerated(
          gpTouchProcessor,
          a3,
          *(_QWORD *)(v23 + 40),
          -__CFSHR__(*(_DWORD *)(v23 + 100), 6),
          (void *)v23);
      if ( (unsigned int)IsMiPMouseMessage(a3) )
      {
        if ( v16 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v16) )
          {
            *(_DWORD *)(v23 + 100) |= 0x800u;
            if ( this )
              *(_DWORD *)(v23 + 100) ^= (*(_DWORD *)(v23 + 100) ^ ((unsigned int)InputTransform::OnInput(
                                                                                   this,
                                                                                   *(struct tagWND **)(v23 + 128),
                                                                                   v29) << 13)) & 0x2000;
          }
        }
      }
      if ( v19 )
        goto LABEL_21;
      if ( a3 == 255 )
        goto LABEL_21;
      if ( *((_DWORD *)a1 + 100) <= 1u )
        goto LABEL_21;
      v28 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      if ( *(_QWORD *)(v28 + 48) )
        goto LABEL_21;
      v28 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      if ( *(_QWORD *)(v28 + 56) )
        goto LABEL_21;
      v32 = 0;
      if ( this && (v34 = *((_QWORD *)this + 2), this == *(InputTransform **)(v34 + 1392)) )
      {
        v32 = 1;
      }
      else
      {
        v33 = *((_QWORD *)a1 + 16);
        if ( !v33 )
          goto LABEL_21;
        v34 = *(_QWORD *)(v33 + 16);
        if ( v33 != *(_QWORD *)(v34 + 1392) )
          goto LABEL_21;
      }
      if ( !v34 || IsAdaptiveQueueDetachExempted(v34) )
        goto LABEL_21;
      if ( a3 == 260 || a3 == 513 || a3 == 516 || a3 == 519 )
        goto LABEL_58;
      if ( a3 <= 0x209 )
      {
LABEL_21:
        if ( a3 - 256 <= 1 || a3 - 513 <= 0xD && (v28 = 8707LL, _bittest((const int *)&v28, a3 - 513)) )
        {
          v31 = (void *)ReferenceDwmApiPort(v28, v27, v29);
          DwmAsyncNotifyInputActivity(v31);
        }
        goto LABEL_24;
      }
      if ( a3 <= 0x20B || a3 == 526 )
        goto LABEL_58;
      if ( a3 != 581 )
      {
        if ( a3 == 582 )
        {
LABEL_58:
          KeSetEvent(*(PRKEVENT *)(v34 + 1384), 1, 0);
          goto LABEL_21;
        }
        goto LABEL_21;
      }
      if ( v32 )
      {
        v35 = *(struct _KEVENT **)(*((_QWORD *)this + 2) + 1384LL);
      }
      else
      {
        v36 = *(_QWORD *)(v34 + 664);
        if ( !v36 || (*(_DWORD *)(v36 + 196) & 0x100000) == 0 )
          goto LABEL_24;
        v35 = *(struct _KEVENT **)(v34 + 1384);
      }
      KeSetEvent(v35, 1, 0);
LABEL_24:
      WakeSomeone(a1, v37, a3, v23);
      return 1LL;
    }
  }
  result = (__int64)AllocQEntryEx((struct tagQ *)((char *)a1 + 24), 0LL, 0);
  v23 = result;
  if ( result )
    goto LABEL_11;
  return result;
}
