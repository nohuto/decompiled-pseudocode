/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x18001EA60
 * Callers:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext @ 0x180020C80 (RtlInitializeExtendedContext.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 * Callees:
 *     sub_18007C438 @ 0x18007C438 (sub_18007C438.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  char v7; // r8
  _DWORD *v8; // rcx
  int v9; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // edi

  v4 = 0LL;
  v5 = a4;
  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x27FFFFA0) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v7 = 1;
  if ( (a2 & 0x100040) == 1048640 || (a2 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v7 = 3;
  }
  if ( (a2 & 0x10000) != 0 )
  {
    v8 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = v8 + 179;
LABEL_17:
    *v8 = a2;
    goto LABEL_8;
  }
  if ( (a2 & 0x100000) == 0 )
  {
    if ( (a2 & 0x200000) != 0 )
    {
      v8 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = v8 + 104;
    }
    else
    {
      if ( (a2 & 0x400000) == 0 )
        goto LABEL_9;
      v8 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = v8 + 228;
    }
    goto LABEL_17;
  }
  v8 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v8[12] = a2;
  v4 = v8 + 308;
LABEL_8:
  v4[3] = (_DWORD)v4 - (_DWORD)v8;
LABEL_9:
  v9 = v4[3];
  v4[2] = -v9;
  *v4 = -v9;
  v4[1] = v9 + 24;
  if ( (a2 & 0x10020) != 65568 && (a2 & 0x10000) != 0 )
    v4[3] = 204;
  if ( (v7 & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v5 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & a4;
    v11 = sub_18007C438(v5) - 512;
    memset((void *)(((unsigned __int64)v4 + 87) & 0xFFFFFFFFFFFFFFC0uLL), 0, v11);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v4 + 87) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5 | 0x8000000000000000uLL;
    v12 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
    v4[5] = v11;
    v4[4] = v12;
    v4[1] = v11 + v12 - *v4;
  }
  else
  {
    v4[5] = 0;
    v4[4] = 25;
  }
  *a3 = v4;
  return 0LL;
}
