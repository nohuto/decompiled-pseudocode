/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x14013350C
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140346CD4 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1406E1AC8 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwWriteKMSecurityEvent(unsigned __int16 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *CurrentServerSiloGlobals; // rax

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           CurrentServerSiloGlobals[108] + 24LL,
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 4064LL),
           0,
           0,
           a1,
           0,
           0,
           0LL,
           0LL,
           a3,
           a4,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
