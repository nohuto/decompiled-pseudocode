/*
 * XREFs of SdbpGetPathSystem @ 0x1409253E0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140925488 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140928E3C (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures((char *)v8 + 4, v8, a4);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)v8),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
