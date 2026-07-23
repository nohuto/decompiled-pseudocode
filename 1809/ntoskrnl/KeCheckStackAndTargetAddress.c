/*
 * XREFs of KeCheckStackAndTargetAddress @ 0x140120720
 * Callers:
 *     __C_specific_handler @ 0x140194180 (__C_specific_handler.c)
 *     longjmp @ 0x140194360 (longjmp.c)
 *     RtlRestoreContext @ 0x1401C5900 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401C5BC0 (RcFrameConsolidation.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     _guard_icall_bugcheck @ 0x1401C5F80 (_guard_icall_bugcheck.c)
 */

bool __fastcall KeCheckStackAndTargetAddress(signed __int64 BugCheckParameter4, unsigned __int64 a2)
{
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF
  char *v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( BugCheckParameter4 >= 0
    || !(result = KeQueryCurrentStackInformation(&v5, &v6, &v7))
    || a2 < (unsigned __int64)v6
    || a2 >= v7 )
  {
    __debugbreak();
    guard_icall_bugcheck(BugCheckParameter4);
  }
  return result;
}
