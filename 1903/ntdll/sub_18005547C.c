/*
 * XREFs of sub_18005547C @ 0x18005547C
 * Callers:
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

void __fastcall sub_18005547C(_RTL_SRWLOCK *a1, char *a2, __int64 a3, unsigned int a4, unsigned int a5)
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
    if ( sub_18001AE58() )
    {
      v14 = sub_1800555A8((int)a1[6].Ptr);
      v15 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          849,
          (unsigned int)"LdrpWriteBackProtectedDelayLoad",
          0,
          (__int64)"LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported"
                   " in the DLL based at 0x%p.Status = 0x%x\n",
          a1[6].Ptr,
          v14);
        v15 = dword_18015FAB0;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
  }
  RtlReleaseSRWLockExclusive(v5);
}
