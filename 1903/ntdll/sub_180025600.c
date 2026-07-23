/*
 * XREFs of sub_180025600 @ 0x180025600
 * Callers:
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     ApiSetQueryApiSetPresence @ 0x180075030 (ApiSetQueryApiSetPresence.c)
 * Callees:
 *     sub_18002518C @ 0x18002518C (sub_18002518C.c)
 *     sub_1800290D0 @ 0x1800290D0 (sub_1800290D0.c)
 */

__int64 __fastcall sub_180025600(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v6; // bl
  unsigned __int16 v9; // cx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // eax
  _WORD *v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx

  v6 = 0;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  v9 = *a2;
  if ( *a2 >= 8u )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v13 = v9;
      v14 = (_WORD *)((char *)v10 + v9);
      do
      {
        if ( v13 <= 1 )
          break;
        v13 -= 2;
        --v14;
      }
      while ( *v14 != 45 );
      v15 = (unsigned __int16)v13 >> 1;
      if ( v15 )
      {
        v16 = sub_1800290D0(a1, v10, v15);
        if ( v16 )
        {
          if ( a3 && *(_DWORD *)(v16 + 20) > 1u )
          {
            v17 = sub_18002518C(v16, *(const WCHAR **)(a3 + 8), *(_WORD *)a3 >> 1, a1);
            goto LABEL_13;
          }
          if ( *(_DWORD *)(v16 + 20) )
          {
            v17 = a1 + *(unsigned int *)(v16 + 16);
LABEL_13:
            v6 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v17 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v17 + 16);
            *(_WORD *)a5 = *(_WORD *)(v17 + 16);
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v6;
  return result;
}
