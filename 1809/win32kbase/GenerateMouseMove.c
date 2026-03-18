/*
 * XREFs of GenerateMouseMove @ 0x1C002EC20
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C002EC58 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GenerateMouseMove(unsigned int a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( result )
    return CMouseProcessor::MoveMouseWindowManagement(result, a1);
  return result;
}
