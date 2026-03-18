/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x1C006CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C0039EB0 (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NotifySetPointerGraphicDevice(unsigned int a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v2 )
    CMouseProcessor::NotifySetPointerGraphicDevice(v2, a1);
}
