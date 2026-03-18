/*
 * XREFs of itrp_MovePoint @ 0x1C02CC904
 * Callers:
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 */

__int64 __fastcall itrp_MovePoint(_QWORD *a1, int a2, int a3)
{
  __int16 v3; // r14
  __int64 result; // rax
  __int16 v5; // si
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax

  v3 = word_1C03271A8;
  result = 0x4000LL;
  v5 = HIWORD(dword_1C032715C);
  v7 = a3;
  v8 = a2;
  if ( word_1C03271A8 == 0x4000 )
  {
    if ( (_WORD)dword_1C032715C )
    {
      *(_DWORD *)(*a1 + 4LL * a2) += ((unsigned __int64)(a3 * (__int64)(__int16)dword_1C032715C) >> 32 << 18)
                                   + ((((unsigned int)(a3 * (__int16)dword_1C032715C) >> 13) + 1) >> 1);
      result = a1[9];
      *(_BYTE *)(result + a2) |= 1u;
    }
    if ( v5 )
    {
      v9 = ((unsigned __int64)(a3 * (__int64)v5) >> 32 << 18) + ((((unsigned int)(a3 * v5) >> 13) + 1) >> 1);
      goto LABEL_15;
    }
  }
  else
  {
    if ( (_WORD)dword_1C032715C )
    {
      if ( word_1C03271A8 == (_WORD)dword_1C032715C )
        *(_DWORD *)(*a1 + 4LL * a2) += a3;
      else
        *(_DWORD *)(*a1 + 4LL * a2) += CompDiv(word_1C03271A8, a3 * (__int64)(__int16)dword_1C032715C);
      result = a1[9];
      *(_BYTE *)(result + v8) |= 1u;
    }
    if ( v5 )
    {
      if ( v3 == v5 )
      {
        *(_DWORD *)(a1[1] + 4 * v8) += v7;
LABEL_16:
        result = a1[9];
        *(_BYTE *)(result + v8) |= 2u;
        return result;
      }
      v9 = CompDiv(v3, v7 * v5);
LABEL_15:
      *(_DWORD *)(a1[1] + 4 * v8) += v9;
      goto LABEL_16;
    }
  }
  return result;
}
