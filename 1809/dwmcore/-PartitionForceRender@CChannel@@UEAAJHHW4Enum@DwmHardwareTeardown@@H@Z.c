/*
 * XREFs of ?PartitionForceRender@CChannel@@UEAAJHHW4Enum@DwmHardwareTeardown@@H@Z @ 0x180079ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionForceRender(__int64 a1, int a2, int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v11[0] = 290;
  v11[4] = a5;
  v11[1] = a2;
  v11[2] = a3;
  v11[3] = a4;
  v9 = CChannel::SendCommand((CChannel *)a1, v11, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v9;
}
