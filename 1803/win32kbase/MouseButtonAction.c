/*
 * XREFs of MouseButtonAction @ 0x1C012E7B0
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C010AD10 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C0133BBC (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2);
  return result;
}
