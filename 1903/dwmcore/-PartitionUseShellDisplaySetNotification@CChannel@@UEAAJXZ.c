/*
 * XREFs of ?PartitionUseShellDisplaySetNotification@CChannel@@UEAAJXZ @ 0x1800E6A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionUseShellDisplaySetNotification(CChannel *this)
{
  CChannel *v1; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = 364;
  LODWORD(v1) = CChannel::SendCommand(v1, &v3, 4u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return (unsigned int)v1;
}
