/*
 * XREFs of SdbpCheckAttribute @ 0x140925AD4
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1409257F8 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslStringPatternMatchW @ 0x14074B8C0 (AslStringPatternMatchW.c)
 *     SdbpCheckFromVersion @ 0x140925C98 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x140925CD8 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x140925D18 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckAttribute(
        _DWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  int v7; // eax
  __int64 result; // rax
  int v9; // eax
  bool v10; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 == 16414 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_31;
    }
    goto LABEL_14;
  }
  if ( a2 == 16435 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_31;
    }
    goto LABEL_14;
  }
  if ( a2 > 0x5001u )
  {
    if ( a2 <= 0x5003u )
    {
      if ( a4 >= 8 )
      {
        v7 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
        goto LABEL_21;
      }
      goto LABEL_14;
    }
    if ( a2 == 20486 || a2 == 20493 )
    {
      if ( a4 >= 8 )
      {
        v7 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
        goto LABEL_21;
      }
LABEL_14:
      AslLogCallPrintf(1LL);
      return 0LL;
    }
    if ( a2 > 0x5011u && a2 <= 0x5013u )
    {
      if ( a4 >= 8 )
      {
        v7 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
LABEL_21:
        v5 = v7;
        goto LABEL_31;
      }
      goto LABEL_14;
    }
  }
  v9 = a2 & 0xF000;
  switch ( v9 )
  {
    case 16384:
      if ( a4 < 4 )
        goto LABEL_14;
      v10 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
      goto LABEL_26;
    case 20480:
      if ( a4 < 8 )
        goto LABEL_14;
      v10 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
LABEL_26:
      LOBYTE(v5) = v10;
      break;
    case 24576:
      if ( a4 >= 2 )
      {
        v7 = AslStringPatternMatchW(a3, *(unsigned __int16 **)(a5 + 16));
        goto LABEL_21;
      }
      goto LABEL_14;
  }
LABEL_31:
  result = 1LL;
  *a1 = v5;
  return result;
}
