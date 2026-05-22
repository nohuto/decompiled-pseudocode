/*
 * XREFs of std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A9C7C
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A94A4 (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        char *Src,
        char *a2)
{
  char *v4; // rbp
  char *i; // rbx
  char *v6; // rcx
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // xmm4_8
  char *j; // rax
  __int128 v12; // [rsp+20h] [rbp-98h]
  __int128 v13; // [rsp+30h] [rbp-88h]
  __int128 v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+C0h] [rbp+8h]

  if ( Src != a2 )
  {
    v4 = Src + 72;
    for ( i = Src + 72; i != a2; i += 72 )
    {
      v6 = i;
      v7 = *((_OWORD *)i + 2);
      v8 = *((_OWORD *)i + 3);
      v9 = *((_QWORD *)i + 8);
      v14 = *(_OWORD *)i;
      v12 = *(_OWORD *)i;
      v13 = *((_OWORD *)i + 1);
      v15 = v9;
      if ( (unsigned __int8)BYTE2(*(_QWORD *)i) < (unsigned __int8)Src[2]
        || (unsigned __int8)BYTE2(*(_QWORD *)i) == Src[2]
        && (unsigned __int16)HIWORD(*(_QWORD *)i) < *((_WORD *)Src + 3) )
      {
        memmove_0(v4, Src, i - Src);
        *(_OWORD *)Src = v12;
        *((_OWORD *)Src + 1) = v13;
        *((_OWORD *)Src + 2) = v7;
        *((_OWORD *)Src + 3) = v8;
        *((_QWORD *)Src + 8) = v15;
      }
      else
      {
        for ( j = i; ; v6 = j )
        {
          j -= 72;
          if ( BYTE2(v14) >= (unsigned __int8)j[2] && (BYTE2(v14) != j[2] || WORD3(v14) >= *((_WORD *)j + 3)) )
            break;
          *(_OWORD *)v6 = *(_OWORD *)j;
          *((_OWORD *)v6 + 1) = *((_OWORD *)j + 1);
          *((_OWORD *)v6 + 2) = *((_OWORD *)j + 2);
          *((_OWORD *)v6 + 3) = *((_OWORD *)j + 3);
          *((_QWORD *)v6 + 8) = *((_QWORD *)j + 8);
        }
        *(_OWORD *)v6 = v12;
        *((_OWORD *)v6 + 1) = v13;
        *((_OWORD *)v6 + 2) = v7;
        *((_OWORD *)v6 + 3) = v8;
        *((_QWORD *)v6 + 8) = v9;
      }
    }
  }
  return a2;
}
