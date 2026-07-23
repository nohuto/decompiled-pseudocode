/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14031F430
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall ExpResourceTimeoutCaptureLiveDump(unsigned int *P)
{
  DbgkWerCaptureLiveKernelDump(L"ResourceTimeout", P[12], P[13], 0LL, 0LL, 0);
  ExFreePoolWithTag(P, 0x6F546552u);
}
