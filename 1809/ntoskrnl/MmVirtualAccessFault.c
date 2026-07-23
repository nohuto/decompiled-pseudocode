/*
 * XREFs of MmVirtualAccessFault @ 0x14085A2D4
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x14030BEFC (VmpAccessFaultBatchResolve.c)
 *     PspIumGetPhysicalPage @ 0x14088E140 (PspIumGetPhysicalPage.c)
 * Callees:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x1402AECB8 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(signed __int64 *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v4; // rdi
  __int64 v6; // r8
  char v7; // r11
  __int64 v8; // r10
  int v9; // edx
  int v10; // eax
  char v12; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[47]; // [rsp+21h] [rbp-67h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]

  v3 = 0;
  v4 = a3 & 2 | 0x10LL;
  if ( (a3 & 4) == 0 )
    v4 = a3 & 2;
  MiInitializeFaultVaListCore((__int64)&v12, (__int64)a1, 1LL, 5);
  *(_QWORD *)&v13[39] = v8;
  v14 = 0LL;
  v9 = v6 & (v4 >> 1) | (v4 >> 3) & 2;
  v15 = v9;
  if ( (v7 & 8) != 0 )
  {
    v9 |= 4u;
    v15 = v9;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v9 |= 8u;
    v15 = v9;
  }
  if ( (v7 & 0x20) != 0 )
  {
    v9 |= 0x10u;
    v15 = v9;
  }
  if ( (v7 & 0x40) != 0 )
    v15 = v9 | 0x20;
  v10 = MmAccessFault(v4, *a1, v6, (ULONG_PTR)v13);
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v3;
}
