/*
 * XREFs of ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x180157710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionBegin(
        CChannel *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2)
{
  __int128 v4; // xmm1
  int v6; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = 359;
  memset_0(v7, 0, 0x28uLL);
  v4 = *((_OWORD *)a2 + 1);
  v7[0] = *(_OWORD *)a2;
  v8 = *((_QWORD *)a2 + 4);
  v7[1] = v4;
  LODWORD(a2) = CChannel::SendCommand(this, &v6, 0x30u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return (unsigned int)a2;
}
