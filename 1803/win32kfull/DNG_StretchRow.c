/*
 * XREFs of DNG_StretchRow @ 0x1C00ACBB4
 * Callers:
 *     DNG_DrawRow @ 0x1C00A9DB0 (DNG_DrawRow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DNG_StretchRow(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // esi
  _DWORD *v9; // r11
  unsigned __int64 v10; // rbx
  _DWORD *v11; // r8
  unsigned __int64 v12; // r9
  bool v13; // cf

  result = (int)a4[6];
  v6 = a4[3];
  v7 = a4[2];
  v8 = a4[1];
  v9 = (_DWORD *)(a2 + 4 * result);
  if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v9 )
  {
    result = (int)a4[7];
    v10 = a2 + 4 * result;
    if ( v10 <= *(_QWORD *)(a1 + 224) )
    {
      result = *a4;
      v11 = (_DWORD *)(a3 + 4 * result);
      if ( *(_QWORD *)(a1 + 232) <= (unsigned __int64)v11 )
      {
        result = *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 56);
        v12 = a3 + 4 * result;
        if ( v12 <= *(_QWORD *)(a1 + 240) )
        {
          while ( (unsigned __int64)v9 < v10 && (unsigned __int64)v11 < v12 )
          {
            v13 = v8 + v7 < v8;
            *v9 = *v11;
            v8 += v7;
            result = v13 + v6;
            ++v9;
            v11 += result;
          }
        }
      }
    }
  }
  return result;
}
