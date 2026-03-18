/*
 * XREFs of Bulk_Stage_ProcessSegment @ 0x1C0037600
 * Callers:
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C0036710 (Bulk_Stage_CalculateBytesTransferred.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_Stage_ProcessSegment(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // rcx
  char v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdi
  __int64 v9; // r9
  unsigned __int64 i; // r8
  unsigned __int8 v11; // al

  v5 = *(_QWORD *)(a3 + 16);
  v6 = 0;
  v7 = v5 + 16LL * a4;
  v8 = (*(_DWORD *)(a3 + 44) & 0xFFFFFFF0) + v5 - 16;
  if ( v7 <= v8 )
  {
    v9 = *a2;
    for ( i = v7 + *(_QWORD *)(a3 + 24) - v5; ; i += 16LL )
    {
      if ( i == v9 )
        v6 = 1;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v7 + 12)) >> 2 == 1 )
        break;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v7 + 12)) >> 2 == 6 )
        return v6;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v7 + 12)) >> 2 != 7 )
        goto LABEL_20;
      if ( v6 )
        return v6;
      *a5 = 0;
LABEL_21:
      v7 += 16LL;
      if ( v7 > v8 )
        return v6;
    }
    if ( v6 )
    {
      v11 = *((_BYTE *)a2 + 11);
      if ( v11 < 2u )
        goto LABEL_20;
      if ( v11 <= 4u || v11 == 6 || v11 == 26 )
      {
LABEL_17:
        *a5 += (*(_DWORD *)(v7 + 8) & 0x1FFFF) - (a2[1] & 0xFFFFFF);
        goto LABEL_20;
      }
      if ( v11 != 28 )
      {
        if ( v11 != 36 )
          goto LABEL_20;
        goto LABEL_17;
      }
      *a5 = a2[1] & 0xFFFFFF;
    }
    else
    {
      *a5 += *(_DWORD *)(v7 + 8) & 0x1FFFF;
    }
LABEL_20:
    if ( v6 )
      return v6;
    goto LABEL_21;
  }
  return v6;
}
