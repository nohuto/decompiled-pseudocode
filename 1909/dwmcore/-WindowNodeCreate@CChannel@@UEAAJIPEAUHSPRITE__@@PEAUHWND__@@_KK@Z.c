/*
 * XREFs of ?WindowNodeCreate@CChannel@@UEAAJIPEAUHSPRITE__@@PEAUHWND__@@_KK@Z @ 0x1800CED80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeCreate(
        CChannel *this,
        unsigned int a2,
        HSPRITE a3,
        HWND a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-34h] BYREF
  HSPRITE v14; // [rsp+28h] [rbp-30h]
  HWND v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]
  unsigned int v17; // [rsp+40h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 197);
  v12 = 518;
  memset_0(&v13, 0, 0x24uLL);
  v16 = a5;
  v17 = a6;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v10 = CChannel::SendCommand(this, &v12, 0x28u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v10;
}
