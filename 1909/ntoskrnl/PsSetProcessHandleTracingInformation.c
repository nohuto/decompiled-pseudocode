/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x1408C5FB4
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x14097D8BC (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x1403383A0 (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x14090ACC4 (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = ExEnableHandleTracing(v4, *(unsigned int *)(a2 + 4));
    else
      ExDisableHandleTracing(v4);
    ExReleaseRundownProtection_0(a1 + 96);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
