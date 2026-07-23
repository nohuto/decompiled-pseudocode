/*
 * XREFs of MmZeroPageWrite @ 0x140128488
 * Callers:
 *     CcZeroDataOnDisk @ 0x140128400 (CcZeroDataOnDisk.c)
 *     MiZeroPageFile @ 0x1402A6150 (MiZeroPageFile.c)
 *     PopZeroHiberFile @ 0x14086D030 (PopZeroHiberFile.c)
 * Callees:
 *     MiZeroPageWrite @ 0x140128508 (MiZeroPageWrite.c)
 */

__int64 __fastcall MmZeroPageWrite(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  unsigned __int64 v7; // rax
  int v10; // r8d
  __int64 result; // rax
  unsigned int v12; // edi

  v4 = *a3;
  v5 = 0;
  v7 = HIDWORD(*a3);
  v10 = *a3;
  if ( (_DWORD)v7 )
  {
LABEL_5:
    v12 = 0;
    while ( 1 )
    {
      result = MiZeroPageWrite(a1, a2, 0x40000000LL, a4);
      v5 = result;
      if ( (int)result < 0 )
        break;
      v4 -= 0x40000000LL;
      ++v12;
      v10 = v4;
      if ( v12 >= 4 )
      {
        if ( HIDWORD(v4) )
          goto LABEL_5;
        goto LABEL_2;
      }
    }
  }
  else
  {
LABEL_2:
    if ( !v10 )
      return v5;
    result = MiZeroPageWrite(a1, a2, (unsigned int)v4, a4);
    v5 = result;
    if ( (int)result >= 0 )
      return v5;
  }
  return result;
}
