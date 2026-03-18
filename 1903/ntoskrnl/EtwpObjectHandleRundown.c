/*
 * XREFs of EtwpObjectHandleRundown @ 0x1408FBC24
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x1406BABF0 (ExEnumHandleTable.c)
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
      (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection_0(Process + 96);
  }
}
