/*
 * XREFs of RtlReleasePrivilege @ 0x1406C7804
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401B8490 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1401B8B10 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
