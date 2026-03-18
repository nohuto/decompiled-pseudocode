/*
 * XREFs of itrp_WPV @ 0x1C02D0D10
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02C66D0 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WPV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int16 v2; // ax
  bool v3; // zf
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432) )
  {
    v0 = qword_1C0327168;
    if ( (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) >= 2 )
    {
      qword_1C0327168 -= 4LL;
      HIWORD(dword_1C0327158) = *(_WORD *)(v0 - 4);
      qword_1C0327168 = v0 - 8;
      LOWORD(dword_1C0327158) = *(_WORD *)(v0 - 8);
      word_1C03271F8 = -1;
      word_1C03271F6 = -1;
      itrp_ComputeAndCheck_PF_Proj();
      dword_1C03271AC = 1;
      dword_1C03271B0 = 1;
      v2 = *(_WORD *)(qword_1C0327180 + 452);
      if ( (v2 & 1) == 0 )
        goto LABEL_15;
      if ( (v2 & 4) != 0 )
      {
        if ( (_WORD)dword_1C0327158 == 0x4000 )
        {
          v3 = HIWORD(dword_1C0327158) == 0;
LABEL_9:
          v4 = 0;
          if ( v3 )
            goto LABEL_11;
        }
      }
      else if ( HIWORD(dword_1C0327158) == 0x4000 )
      {
        v3 = (_WORD)dword_1C0327158 == 0;
        goto LABEL_9;
      }
      v4 = 1;
LABEL_11:
      if ( v4 )
      {
        word_1C03271F4 = 1;
        if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327180 + 333) )
        {
          v5 = 8LL;
LABEL_17:
          *(_DWORD *)(qword_1C0327180 + 128) = itrp_RoundFunctionId[v5 + *(unsigned __int16 *)(qword_1C0327180 + 132)];
          dword_1C03271B4 = dword_1C03271B0;
          result = v1;
          word_1C03271CC = 0;
          return result;
        }
LABEL_16:
        v5 = 0LL;
        goto LABEL_17;
      }
LABEL_15:
      word_1C03271F4 = 0;
      goto LABEL_16;
    }
  }
  result = qword_1C03271D8;
  dword_1C03271D0 = 4368;
  return result;
}
