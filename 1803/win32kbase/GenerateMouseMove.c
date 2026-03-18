/*
 * XREFs of GenerateMouseMove @ 0x1C0037560
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0039CCC (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GenerateMouseMove(unsigned int a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( result )
    return CMouseProcessor::MoveMouseWindowManagement(result, a1);
  return result;
}
