/*
 * XREFs of ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C000CD44
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000C908 (xxxQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsProcessUserService(PEPROCESS Process)
{
  PACCESS_TOKEN v2; // rdi
  struct _UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v4.Length = 0LL;
  v4.Buffer = 0LL;
  RtlInitUnicodeStringEx(&v4, L"WIN://SCMUserService");
  v2 = PsReferencePrimaryToken(Process);
  LODWORD(Process) = (unsigned __int8)SeSecurityAttributePresent(v2, &v4);
  ObfDereferenceObject(v2);
  return (unsigned int)Process;
}
