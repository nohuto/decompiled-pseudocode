/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14031F140
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140812510 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall ExpResourceTimeoutCaptureLiveDump(unsigned int *P)
{
  DbgkWerCaptureLiveKernelDump(L"ResourceTimeout", P[12], P[13], 0LL, 0LL, 0);
  ExFreePoolWithTag(P, 0x6F546552u);
}
