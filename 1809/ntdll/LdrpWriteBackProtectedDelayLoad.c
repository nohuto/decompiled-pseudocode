/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180035C68
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(
        _RTL_SRWLOCK *a1,
        char *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  _RTL_SRWLOCK *v5; // r15
  ULONG_PTR v7; // r14
  unsigned int v8; // ebx
  char *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  char v15; // cl
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  v5 = a1 + 18;
  v7 = 8LL * a4;
  RegionSize = v7;
  v8 = a4;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive(a1 + 18);
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(a3 + 8LL * a5)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v8 )
    {
      v11 = &a2[v7];
      v12 = a3 - (_QWORD)a2;
      do
      {
        v11 -= 8;
        --v8;
        v13 = *(_QWORD *)&v11[v12];
        if ( v13 )
          *(_QWORD *)v11 = v13;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v14 = LdrpUnsuppressAddressTakenIat(a1[6].Value);
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          849,
          (unsigned int)"LdrpWriteBackProtectedDelayLoad",
          0,
          "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the D"
          "LL based at 0x%p.Status = 0x%x\n",
          a1[6].Ptr,
          v14);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
  }
  RtlReleaseSRWLockExclusive(v5);
}
