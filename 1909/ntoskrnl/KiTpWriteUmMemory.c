/*
 * XREFs of KiTpWriteUmMemory @ 0x1402ADAB4
 * Callers:
 *     KiTpWriteMemory @ 0x1402AD7A0 (KiTpWriteMemory.c)
 * Callees:
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 */

__int64 __fastcall KiTpWriteUmMemory(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  PEPROCESS v4; // rsi
  __int64 v5; // r14
  int v7; // ebx
  __int64 v9[7]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF
  __int64 v11; // [rsp+88h] [rbp+10h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v4 = PsInitialSystemProcess;
  v5 = a4;
  v11 = a2;
  v10 = a4;
  v7 = MmProtectVirtualMemory(
         (_DWORD)PsInitialSystemProcess,
         a1,
         (unsigned int)&v11,
         (unsigned int)&v10,
         128,
         (__int64)&v12);
  if ( v7 >= 0 )
  {
    v7 = MmCopyVirtualMemory((ULONG_PTR)v4, v5, 0, (__int64)v9);
    MmProtectVirtualMemory((_DWORD)v4, a1, (unsigned int)&v11, (unsigned int)&v10, v12, (__int64)&v12);
  }
  return (unsigned int)v7;
}
