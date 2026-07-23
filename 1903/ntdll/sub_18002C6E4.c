/*
 * XREFs of sub_18002C6E4 @ 0x18002C6E4
 * Callers:
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180069240 @ 0x180069240 (sub_180069240.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 */

__int64 __fastcall sub_18002C6E4(_QWORD *a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 result; // rax
  char v5; // al
  _WORD *i; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int (__fastcall *v10)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_180162710;
  v3 = 0;
  if ( dword_180162710 && Src )
  {
    dword_180162710 = 0;
    v3 = sub_1800D0FDC(&v10);
    if ( v3 >= 0 )
    {
      for ( i = Src; *i; i += v7 + 1 )
      {
        if ( !v10(i, 0LL, 1LL) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v7 = -1LL;
        do
          ++v7;
        while ( i[v7] );
      }
      v8 = MEMORY[0x7FFE0330];
      v9 = __ROR8__(qword_18017A268, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&stru_18015F3F0);
      if ( dword_1801664E0 < 3 && (*(_DWORD *)(*a1 - 56LL) & 0x800) == 0 )
        sub_180069240(a1, v9 ^ v8);
      RtlLeaveCriticalSection(&stru_18015F3F0);
    }
    else
    {
      v5 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2948,
          (unsigned int)"LdrpDynamicShimModule",
          0,
          (__int64)"Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v3);
        v5 = dword_18015FAB0;
      }
      if ( (v5 & 0x10) != 0 )
        __debugbreak();
      v3 = 0;
    }
  }
LABEL_3:
  if ( Src && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
    Src = 0LL;
    qword_180165370 = 0LL;
  }
  result = (unsigned int)v3;
  dword_180162710 = v1;
  return result;
}
