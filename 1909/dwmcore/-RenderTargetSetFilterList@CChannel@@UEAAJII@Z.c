/*
 * XREFs of ?RenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x180157A00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180055C9C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RenderTargetSetFilterList(CChannel *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 143);
  CChannel::CheckOptionalHandle((__int64)this, a3, 191LL);
  v8[0] = 417;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
