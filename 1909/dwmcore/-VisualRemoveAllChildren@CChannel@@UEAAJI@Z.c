/*
 * XREFs of ?VisualRemoveAllChildren@CChannel@@UEAAJI@Z @ 0x180053380
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualRemoveAllChildren(CChannel *this, unsigned int a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+34h] [rbp+Ch]
  char *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 189LL);
  v6 = 482;
  v7 = a2;
  v4 = CChannel::SendCommand(this, &v6, 8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v4;
}
