/*
 * XREFs of LdrProcessRelocationBlockEx_0 @ 0x180083200
 * Callers:
 *     sub_180083108 @ 0x180083108 (sub_180083108.c)
 *     LdrProcessRelocationBlock @ 0x1800E1F80 (LdrProcessRelocationBlock.c)
 *     LdrProcessRelocationBlockEx @ 0x1800E1FB0 (LdrProcessRelocationBlockEx.c)
 * Callees:
 *     sub_1800E1FBC @ 0x1800E1FBC (sub_1800E1FBC.c)
 *     sub_1800E2088 @ 0x1800E2088 (sub_1800E2088.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlockEx_0(
        ULONG Machine,
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  PUSHORT v5; // rbx
  __int16 v7; // r14
  USHORT *v8; // rbp
  int v9; // ecx
  unsigned int v10; // r9d
  _QWORD *v11; // r8
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v17; // eax

  v5 = NextOffset;
  v7 = Machine;
  v8 = &NextOffset[SizeOfBlock];
  if ( NextOffset >= v8 )
    return (PIMAGE_BASE_RELOCATION)v5;
  while ( 1 )
  {
    v9 = *v5 >> 12;
    if ( ((1 << v9) & 0x3A0) != 0 )
      break;
    v10 = 1;
    v11 = (_QWORD *)(VA + (*v5 & 0xFFF));
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 6 )
                *v11 += Diff;
              else
                v10 = 0;
            }
            else
            {
              v10 = 2;
              *(_WORD *)v11 = (v5[1] + (unsigned int)Diff + (*(unsigned __int16 *)v11 << 16) + 0x8000) >> 16;
            }
          }
          else
          {
            *(_DWORD *)v11 += Diff;
          }
        }
        else
        {
          *(_WORD *)v11 += Diff;
        }
      }
      else
      {
        *(_WORD *)v11 = ((unsigned int)Diff + (*(unsigned __int16 *)v11 << 16)) >> 16;
      }
    }
LABEL_10:
    if ( !v10 )
      return 0LL;
    v5 += v10;
    if ( v5 >= v8 )
      return (PIMAGE_BASE_RELOCATION)v5;
  }
  if ( v7 == 448 )
  {
    v17 = sub_1800E1FBC(v5, VA, Diff);
    goto LABEL_24;
  }
  if ( v7 == 450 || v7 == 452 )
  {
    v17 = sub_1800E2088(v5, VA, Diff);
LABEL_24:
    v10 = v17;
    goto LABEL_10;
  }
  return 0LL;
}
