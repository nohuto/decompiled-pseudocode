/*
 * XREFs of EtwpObjectHandleRundown @ 0x1408FB604
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsGetProcessId @ 0x140004670 (PsGetProcessId.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B6380 (ExEnumHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned int *v4; // rdi

  v4 = (unsigned int *)ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 68) = (HIDWORD(Process[223].Ptr) & 0x1000) != 0;
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(unsigned int *, __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection_0(Process + 96);
  }
}
