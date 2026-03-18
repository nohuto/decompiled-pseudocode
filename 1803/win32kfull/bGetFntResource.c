/*
 * XREFs of bGetFntResource @ 0x1C02285EC
 * Callers:
 *     bBmfdLoadFont @ 0x1C0225D40 (bBmfdLoadFont.c)
 *     bVtfdLoadFont @ 0x1C0228FC0 (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewRangeCheck @ 0x1C02288C0 (bMappedViewRangeCheck.c)
 *     bMappedViewStrlen @ 0x1C02288FC (bMappedViewStrlen.c)
 */

__int64 __fastcall bGetFntResource(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned __int16 *v7; // r12
  int v8; // edi
  int v10; // ecx
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // r8
  int v19; // r9d
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v5 = *((unsigned int *)a1 + 2);
  v7 = (unsigned __int16 *)(*a1 + *((int *)a1 + 7) + (unsigned int)(12 * a2));
  v8 = a2;
  if ( (unsigned int)bMappedViewRangeCheck(*a1, v5, v7, 12LL) )
  {
    v10 = *((_DWORD *)a1 + 4);
    v11 = *v7 << v10;
    v12 = v7[1] << v10;
    v13 = v3 + v11;
    *(_DWORD *)(a3 + 8) = v11;
    *(_QWORD *)a3 = v13;
    *(_DWORD *)(a3 + 12) = v12;
    if ( (unsigned int)bMappedViewRangeCheck(v3, (unsigned int)v5, v13, v12) )
    {
      v14 = v3 + *((int *)a1 + 8);
      while ( (unsigned int)bMappedViewStrlen(v3, v5, v14 + 115, &v21) )
      {
        v14 = v21 + 1 + v15;
        if ( v8 )
        {
          if ( !(unsigned int)bMappedViewStrlen(v3, v5, v14, &v21) )
            return v4;
          v14 = v21 + 1 + v16;
        }
        if ( !v8-- )
        {
          if ( (unsigned int)bMappedViewStrlen(v3, v5, v14, 0LL) )
          {
            *(_QWORD *)(a3 + 16) = v18;
            return (unsigned int)(v19 + 1);
          }
          return v4;
        }
      }
    }
  }
  return v4;
}
