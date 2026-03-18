/*
 * XREFs of ?PartitionSwitchRemotingMode@CChannel@@UEAAJW4Enum@DwmRemotingMode@@@Z @ 0x1800D7F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionSwitchRemotingMode(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v6 = 352;
  v7 = a2;
  v4 = CChannel::SendCommand((CChannel *)a1, &v6, 8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v4;
}
