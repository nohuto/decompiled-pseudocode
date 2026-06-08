/*
 * XREFs of SetTurboDisablePolicy @ 0x1C00073F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     IsTurboModeSupported @ 0x1C0003EC8 (IsTurboModeSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C00081C8 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetTurboDisablePolicy(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // [rsp+40h] [rbp+8h]
  unsigned __int64 v5; // [rsp+40h] [rbp+8h]

  if ( *(_BYTE *)(*(_QWORD *)a1 + 78LL) )
  {
    LODWORD(v4) = 0;
    HIDWORD(v4) = (unsigned int)(a2 - 1) > 1;
    return ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_1C001A678)(
             *(unsigned int *)(*(_QWORD *)a1 + 80LL),
             409LL,
             0xFFFFFFFEFFFFFFFFuLL,
             v4);
  }
  else
  {
    v3 = __readmsr(0x199u);
    LODWORD(v5) = v3;
    HIDWORD(v5) = ((unsigned int)(a2 - 1) > 1) | HIDWORD(v3) & 0xFFFFFFFE;
    result = v5;
    __writemsr(0x199u, v5);
  }
  return result;
}
