/*
 * XREFs of PspWriteProcessSecurityDomain @ 0x1400EA224
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspWriteProcessSecurityDomain(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a1 + 2144) = a2;
  if ( a3 )
    *(_QWORD *)(a1 + 2152) = a2;
}
