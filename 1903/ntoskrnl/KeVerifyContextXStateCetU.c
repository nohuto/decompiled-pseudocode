/*
 * XREFs of KeVerifyContextXStateCetU @ 0x14001B750
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1401C0530 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeVerifyContextXStateCetU(__int64 a1, _DWORD *a2)
{
  _DWORD *v5; // r9
  char *v6; // rbx
  __int64 v7; // r10
  char *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rax
  _DWORD *v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // r8
  _QWORD MemoryInformation[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(MemoryInformation, 0, 0x28uLL);
  if ( (a2[12] & 0x100040) != 0x100040 )
    return 0LL;
  v5 = a2 + 308;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) == 0
    || (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFFC) != 0 )
  {
    v6 = 0LL;
  }
  else
  {
    v7 = (int)a2[312];
    if ( *v5 > (int)v7 || a2[309] + *v5 < (int)v7 + a2[313] )
      v8 = 0LL;
    else
      v8 = (char *)v5 + v7;
    if ( !v8 )
      return 0LL;
    v9 = 2;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v10 = *((_QWORD *)v8 + 1);
      if ( (v10 & 0x800) == 0 )
        return 0LL;
      v11 = 576LL;
      v12 = (_DWORD *)0xFFFFF7800000060CLL;
      do
      {
        if ( ((1LL << v9) & v10) != 0 )
        {
          if ( ((1LL << v9) & MEMORY[0xFFFFF780000005F8]) != 0 )
            LODWORD(v11) = (v11 + 63) & 0xFFFFFFC0;
          v11 = (unsigned int)(*v12 + v11);
        }
        ++v9;
        ++v12;
      }
      while ( v9 < 0xB );
      if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
        v11 = ((_DWORD)v11 + 63) & 0xFFFFFFC0;
      v6 = &v8[v11 - 512];
    }
    else
    {
      v6 = &v8[MEMORY[0xFFFFF78000000448] - 512];
    }
  }
  if ( !v6 )
    return 0LL;
  v13 = (int)a2[312];
  v14 = (void *)__readmsr(0x6A7u);
  v15 = *(_QWORD *)((_BYTE *)a2 + v13 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    if ( !v15 )
    {
      *(_QWORD *)((char *)a2 + v13 + 1232) |= 0x800uLL;
      *(_QWORD *)v6 = 1LL;
      *((_QWORD *)v6 + 1) = v14;
      return 0LL;
    }
    if ( *(_QWORD *)v6 == 1LL && *((_QWORD *)v6 + 1) >= (unsigned __int64)v14 )
    {
      ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, MemoryRegionInformation, MemoryInformation, 0x28uLL, 0LL);
      if ( *((_QWORD *)v6 + 1) <= (unsigned __int64)(MemoryInformation[2] + MemoryInformation[0] - 4096LL) )
        return 0LL;
    }
  }
  else if ( !v15 || !*(_QWORD *)v6 && !*((_QWORD *)v6 + 1) )
  {
    return 0LL;
  }
  return 3221227018LL;
}
