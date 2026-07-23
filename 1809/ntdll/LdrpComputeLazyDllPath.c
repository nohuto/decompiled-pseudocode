/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180054250
 * Callers:
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpGetDllPath @ 0x180054338 (LdrpGetDllPath.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1)
{
  unsigned int v2; // edi
  int DllPath; // eax
  __int64 v4; // rax
  char v6; // cl
  __int64 v7; // [rsp+50h] [rbp+8h]
  __int64 v8; // [rsp+58h] [rbp+10h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(*(LPCWSTR *)(a1 + 32), a1 + 120, a1 + 40, (__int64)&v9);
    v2 = DllPath;
    if ( DllPath < 0 )
    {
      v6 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1480,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          DllPath);
        v6 = LdrpDebugFlags;
      }
      if ( (v6 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v8;
      v4 = v9;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v4;
      if ( v4 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1498,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v4,
            v7);
      }
      else if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1491,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v7);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
