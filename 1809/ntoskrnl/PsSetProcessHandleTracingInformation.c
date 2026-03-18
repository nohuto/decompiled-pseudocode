/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x140888774
 * Callers:
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x14093E018 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x140319AB8 (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x1405D1160 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x1408CDC94 (ExEnableHandleTracing.c)
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
    ExReleaseRundownProtection_0(a1 + 95);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
