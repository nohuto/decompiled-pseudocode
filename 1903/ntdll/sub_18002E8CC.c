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
  __int64 v4; // rcx
  __int64 v5; // rax
  char v7; // cl
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&unk_1801662C0);
  if ( !*(_QWORD *)a1 )
  {
    v3 = sub_180031F48(
           *(_QWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 24),
           (unsigned int)&v8,
           (unsigned int)&v9,
           a1 + 120,
           a1 + 40,
           (__int64)&v10);
    v2 = v3;
    if ( v3 < 0 )
    {
      v7 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1480,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          (__int64)"Lazy DLL search path computation failed with status: 0x%08lx.\n",
          v3);
        v7 = dword_18015FAB0;
      }
      if ( (v7 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v4 = v8;
      *(_QWORD *)(a1 + 8) = v9;
      v5 = v10;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 16) = v5;
      if ( v5 )
      {
        if ( (dword_18015FAB0 & 5) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1498,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            (__int64)"Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v5,
            v4);
      }
      else if ( (dword_18015FAB0 & 5) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1491,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          (__int64)"DLL search path computed: %ws\n",
          v4);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&unk_1801662C0);
  return v2;
}
