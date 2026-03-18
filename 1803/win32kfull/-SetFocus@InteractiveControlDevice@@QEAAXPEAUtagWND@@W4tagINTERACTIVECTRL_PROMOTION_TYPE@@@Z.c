/*
 * XREFs of ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02126AC
 * Callers:
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C020BC24 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C834 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C020D224 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0211240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C02117B4 (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C021210C (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C021290C (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1C0212968 (-SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C0212A34 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0212BDC (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 */

void __fastcall InteractiveControlDevice::SetFocus(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  InteractiveControlInput *v3; // rbx
  struct _LIST_ENTRY *v4; // rbp
  __int64 v8; // rax
  struct InteractiveControlInput *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  InteractiveControlInput *v12; // rax
  InteractiveControlInput *v13; // rax
  struct InteractiveControlInput *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (struct _LIST_ENTRY *)(a1 + 16);
  v14 = 0LL;
  if ( *(_DWORD *)(a1 + 364) && *(_QWORD *)(a1 + 368) )
    v4 = *(struct _LIST_ENTRY **)(a1 + 368);
  if ( a2 != *(struct tagWND **)(a1 + 40) )
  {
    if ( (unsigned int)InteractiveControlDevice::GetPreviousInputReport(
                         (InteractiveControlDevice *)a1,
                         v4,
                         (struct _LIST_ENTRY **)&v14) )
    {
      v8 = 0LL;
      if ( a2 )
        v8 = *(_QWORD *)a2;
      v9 = v14;
      v10 = *((_QWORD *)v14 + 2);
      if ( v10 == v8 )
        goto LABEL_17;
      v11 = ValidateHwnd(v10);
      if ( v11 )
        InteractiveControlInput::GenerateMessages(v9, v11, *(unsigned int *)(a1 + 64), 16LL);
      v12 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
      if ( v12 )
        v3 = InteractiveControlInput::InteractiveControlInput(v12, (struct InteractiveControlDevice *)a1);
      *(_OWORD *)((char *)v3 + 52) = *(_OWORD *)((char *)v9 + 52);
      *(_QWORD *)((char *)v3 + 68) = *(_QWORD *)((char *)v9 + 68);
      *((_DWORD *)v3 + 19) = *((_DWORD *)v9 + 19);
    }
    else
    {
      v13 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
      if ( v13 )
        v3 = InteractiveControlInput::InteractiveControlInput(v13, (struct InteractiveControlDevice *)a1);
    }
    InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v4, (struct _LIST_ENTRY *)v3);
    InteractiveControlInput::GenerateMessages(v3, a2, a3, 8LL);
LABEL_17:
    InteractiveControlDevice::SetTargetWindow((InteractiveControlDevice *)a1, a2);
  }
  if ( a3 != *(_DWORD *)(a1 + 64) )
    InteractiveControlDevice::SetMessagePromotionType(a1, a3);
}
