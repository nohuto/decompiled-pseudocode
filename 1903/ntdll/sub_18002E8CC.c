/*
 * XREFs of sub_18002E8CC @ 0x18002E8CC
 * Callers:
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 * Callees:
 *     sub_180031F48 @ 0x180031F48 (sub_180031F48.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002E8CC(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rax
  char v6; // cl
  __int64 v7; // [rsp+50h] [rbp+8h]
  __int64 v8; // [rsp+58h] [rbp+10h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&stru_1801662C0);
  if ( !*(_QWORD *)a1 )
  {
    v3 = sub_180031F48(*(PCWSTR *)(a1 + 32), a1 + 120, a1 + 40, (__int64)&v9);
    v2 = v3;
    if ( v3 < 0 )
    {
      v6 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1480,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          (__int64)"Lazy DLL search path computation failed with status: 0x%08lx.\n",
          v3);
        v6 = dword_18015FAB0;
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
        if ( (dword_18015FAB0 & 5) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1498,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            (__int64)"Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v4,
            v7);
      }
      else if ( (dword_18015FAB0 & 5) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1491,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          (__int64)"DLL search path computed: %ws\n",
          v7);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_1801662C0);
  return v2;
}
