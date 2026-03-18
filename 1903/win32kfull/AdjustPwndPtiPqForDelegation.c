/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1C0025940
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostMouseMoveToQ @ 0x1C0022F50 (EditionPostMouseMoveToQ.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C010DC4C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostInputMessage @ 0x1C0117F60 (EditionPostInputMessage.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C013CE70 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01E3400 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01EF880 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211F50 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0025888 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     GetInputDelegate @ 0x1C0025A08 (GetInputDelegate.c)
 *     CalcWakeMask @ 0x1C009DB40 (CalcWakeMask.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        struct tagTHREADINFO **a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // r11d
  unsigned int v12; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagTHREADINFO *v17; // rbx
  __int64 result; // rax
  char v19; // si
  unsigned __int8 v20; // al
  bool v21; // zf
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v9 = *a2;
  v10 = *a1;
  v12 = CalcWakeMask(a4, a4, 0LL);
  if ( (v11 == 513 || v11 == 516)
    && v9
    && (*(_DWORD *)(v9 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v9 + 16) + 1264LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v19 = (v11 != 513) + 1;
    if ( !*(_QWORD *)(v10 + 144) )
    {
      v22[0] = v10 + 144;
      v22[1] = v9;
      HMAssignmentLock(v22);
    }
    *(_BYTE *)(v10 + 152) |= v19;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v10 + 144) )
    goto LABEL_5;
  if ( v11 != 514 && v11 != 517 )
  {
    if ( v11 == 512 )
      v9 = *(_QWORD *)(v10 + 144);
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v10 + 144);
  v20 = (v11 == 514) - 3;
  v21 = (v20 & *(_BYTE *)(v10 + 152)) == 0;
  *(_BYTE *)(v10 + 152) &= v20;
  if ( !v21 || (result = HMAssignmentUnlock(v10 + 144), (v9 = result) != 0) )
  {
LABEL_5:
    *a2 = v9;
    InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(v9, v12);
    v17 = InputDelegate;
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(InputDelegate, v14, v15, v16);
      *a1 = *((_QWORD *)v17 + 53);
      *a3 = v17;
      *a6 = 1;
    }
    return 1LL;
  }
  return result;
}
