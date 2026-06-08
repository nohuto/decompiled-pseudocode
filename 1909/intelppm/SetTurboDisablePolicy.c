/*
 * XREFs of SetTurboDisablePolicy @ 0x1C00072D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     IsTurboModeSupported @ 0x1C0004130 (IsTurboModeSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0008144 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetTurboDisablePolicy(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // r8d
  __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h]
  unsigned __int64 v8; // [rsp+40h] [rbp+8h]

  v2 = a2 - 1;
  v3 = 1;
  if ( v2 <= 1 )
  {
    v3 = 0;
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 78LL) )
  {
    LODWORD(v7) = 0;
    HIDWORD(v7) = v3;
    return ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_1C001B688)(
             *(unsigned int *)(*(_QWORD *)a1 + 80LL),
             409LL,
             0xFFFFFFFEFFFFFFFFuLL,
             v7);
  }
  else
  {
    v6 = __readmsr(0x199u);
    LODWORD(v8) = v6;
    HIDWORD(v8) = v4 | HIDWORD(v6) & 0xFFFFFFFE;
    result = v8;
    __writemsr(0x199u, v8);
  }
  return result;
}
