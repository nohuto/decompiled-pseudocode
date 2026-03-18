/*
 * XREFs of RtlReleasePrivilege @ 0x1406E817C
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401C0DF0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1401C1470 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall RtlReleasePrivilege(PVOID ReturnedState)
{
  int v2; // ecx
  void *v3; // rcx
  char *v4; // rcx

  v2 = *((_DWORD *)ReturnedState + 8);
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(HANDLE *)ReturnedState, 0, *((PTOKEN_PRIVILEGES *)ReturnedState + 2), 0, 0LL, 0LL);
    v2 = *((_DWORD *)ReturnedState + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)ReturnedState + 8, 8u);
    v3 = (void *)*((_QWORD *)ReturnedState + 1);
    if ( v3 )
      ZwClose(v3);
  }
  v4 = (char *)*((_QWORD *)ReturnedState + 2);
  if ( v4 != (char *)ReturnedState + 36 )
    ExFreePoolWithTag(v4, 0);
  ZwClose(*(HANDLE *)ReturnedState);
  ExFreePoolWithTag(ReturnedState, 0);
}
