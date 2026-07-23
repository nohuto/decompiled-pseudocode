/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x1405F6CB0
 * Callers:
 *     MmSecureVirtualMemory @ 0x1405F6DF0 (MmSecureVirtualMemory.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     VmSecureBackingMemory @ 0x1408B1720 (VmSecureBackingMemory.c)
 *     AslpFileLargeMapCreate @ 0x1408EF30C (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiSecureVad @ 0x1405F45BC (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bp
  ULONG_PTR v9; // rax
  char *v10; // rdi
  unsigned int v11; // r9d
  int v12; // ebx
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1 + a2;
  v5 = a4;
  if ( a1 + a2 > a1
    && v4 <= 0x7FFFFFFF0000LL
    && (a4 & 0xFFFFFFF0) == 0
    && ((unsigned int)(a3 - 1) <= 1 || a3 == 4 || a3 == -2147483647)
    && a3 >= 0 )
  {
    v9 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0, &v14);
    v10 = (char *)v9;
    if ( v9 )
    {
      if ( (((*(_DWORD *)(v9 + 48) & 7) - 3) & 0xFFFFFFFD) != 0
        && (v4 - 1) >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
      {
        v11 = a3 | 0x80000000;
        if ( (v5 & 2) == 0 )
          v11 = a3;
        v12 = MiSecureVad(v9, a1, a2, v11, v5, &v15);
        MiUnlockAndDereferenceVad(v10);
        if ( v12 >= 0 )
          return qword_14043B0D0 ^ (__int64)KeGetCurrentThread()->ApcState.Process ^ v15;
      }
      else
      {
        MiUnlockAndDereferenceVad((char *)v9);
      }
    }
  }
  return 0LL;
}
