/*
 * XREFs of ?PartitionTelemetryTouchInteractionEnd@CChannel@@UEAAJ_K@Z @ 0x1801470B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionEnd(CChannel *this, __int64 a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+24h] [rbp-14h]
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = 304;
  v6 = a2;
  LODWORD(a2) = CChannel::SendCommand(this, &v5, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return (unsigned int)a2;
}
