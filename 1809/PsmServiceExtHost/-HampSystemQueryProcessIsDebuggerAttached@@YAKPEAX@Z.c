/*
 * XREFs of ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x18003A3D4
 * Callers:
 *     ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003A310 (-HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180062EE8 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampSystemQueryProcessIsDebuggerAttached(void *a1)
{
  __int64 ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  NtQueryInformationProcess(a1, ProcessDebugPort, &ProcessInformation, 8u, 0LL);
  return ProcessInformation != 0;
}
