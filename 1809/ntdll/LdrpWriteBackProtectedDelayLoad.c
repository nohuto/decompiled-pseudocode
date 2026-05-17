/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180035C68
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 *     ZwProtectVirtualMemory @ 0x1800A0CE0 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

signed __int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5)
{
  volatile signed __int64 *v5; // r15
  __int64 v7; // r14
  int v8; // ebx
  int v11; // r12d
  _QWORD *v12; // rax
  char *v13; // rsi
  __int64 v14; // rdx
  int v16; // eax
  char v17; // cl
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+10h] BYREF
  char v20; // [rsp+98h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)(a1 + 144);
  v7 = 8LL * (unsigned int)a4;
  v18 = v7;
  v8 = a4;
  v19 = a2;
  v11 = a4;
  RtlAcquireSRWLockExclusive(a1 + 144, a2, a3, a4);
  if ( *(_QWORD *)(a2 + 8LL * a5) != a3[a5] && (int)ZwProtectVirtualMemory(-1LL, &v19, &v18, 4LL, &v20) >= 0 )
  {
    if ( v8 )
    {
      v12 = (_QWORD *)(v7 + a2);
      v13 = (char *)a3 - a2;
      do
      {
        --v12;
        --v8;
        v14 = *(_QWORD *)((char *)v12 + (_QWORD)v13);
        if ( v14 )
          *v12 = v14;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory(-1LL, &v19, &v18, 2LL, &v20);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v16 = LdrpUnsuppressAddressTakenIat(
              *(_QWORD *)(a1 + 48),
              (unsigned int)(a2 - *(_DWORD *)(a1 + 48)),
              (unsigned int)(8 * v11 - *(_DWORD *)(a1 + 48) + a2 - 8));
      v17 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          849,
          (unsigned int)"LdrpWriteBackProtectedDelayLoad",
          0,
          "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the D"
          "LL based at 0x%p.Status = 0x%x\n",
          *(const void **)(a1 + 48),
          v16);
        v17 = LdrpDebugFlags;
      }
      if ( (v17 & 0x10) != 0 )
        __debugbreak();
    }
  }
  return RtlReleaseSRWLockExclusive(v5);
}
