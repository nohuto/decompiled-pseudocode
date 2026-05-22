/*
 * XREFs of std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B20EC
 * Callers:
 *     std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B1DC0 (std--_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned int *a1,
        unsigned int *a2,
        __int128 *a3)
{
  __int64 result; // rax
  __int128 v4; // xmm3
  __int128 v5; // xmm4
  __int128 v6; // xmm5
  __int128 v7; // xmm6
  __int64 v8; // xmm2_8
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  __int64 v13; // xmm6_8

  result = *a2;
  if ( (unsigned int)result < *a1 )
  {
    v4 = *(_OWORD *)a2;
    v5 = *((_OWORD *)a2 + 1);
    v6 = *((_OWORD *)a2 + 2);
    v7 = *((_OWORD *)a2 + 3);
    v8 = *((_QWORD *)a2 + 8);
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)a1 + 3);
    *((_QWORD *)a2 + 8) = *((_QWORD *)a1 + 8);
    *(_OWORD *)a1 = v4;
    *((_OWORD *)a1 + 1) = v5;
    *((_OWORD *)a1 + 2) = v6;
    *((_OWORD *)a1 + 3) = v7;
    *((_QWORD *)a1 + 8) = v8;
    result = *a2;
  }
  if ( *(_DWORD *)a3 < (unsigned int)result )
  {
    v9 = *a3;
    v10 = a3[1];
    v11 = a3[2];
    v12 = a3[3];
    v13 = *((_QWORD *)a3 + 8);
    *a3 = *(_OWORD *)a2;
    a3[1] = *((_OWORD *)a2 + 1);
    a3[2] = *((_OWORD *)a2 + 2);
    a3[3] = *((_OWORD *)a2 + 3);
    *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 8);
    *(_OWORD *)a2 = v9;
    *((_OWORD *)a2 + 1) = v10;
    *((_OWORD *)a2 + 2) = v11;
    *((_OWORD *)a2 + 3) = v12;
    *((_QWORD *)a2 + 8) = v13;
    result = *a1;
    if ( *a2 < (unsigned int)result )
    {
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
      *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 2);
      *((_OWORD *)a2 + 3) = *((_OWORD *)a1 + 3);
      *((_QWORD *)a2 + 8) = *((_QWORD *)a1 + 8);
      *(_OWORD *)a1 = v9;
      *((_OWORD *)a1 + 1) = v10;
      *((_OWORD *)a1 + 2) = v11;
      *((_OWORD *)a1 + 3) = v12;
      *((_QWORD *)a1 + 8) = v13;
    }
  }
  return result;
}
