/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x1C00884C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C00884F8 (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(unsigned int a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, a1);
  return result;
}
