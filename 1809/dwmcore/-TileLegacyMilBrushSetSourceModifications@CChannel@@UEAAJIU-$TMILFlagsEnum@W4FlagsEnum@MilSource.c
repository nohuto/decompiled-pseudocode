/*
 * XREFs of ?TileLegacyMilBrushSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180147660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::TileLegacyMilBrushSetSourceModifications(CChannel *this, int a2, int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11[0] = 199;
  v11[4] = a5;
  v11[1] = a2;
  v11[2] = a3;
  v11[3] = a4;
  v9 = CChannel::SendCommand(this, v11, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v9;
}
