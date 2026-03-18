/*
 * XREFs of itrp_IF @ 0x1C02C8770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_IF(unsigned __int8 *a1)
{
  int v1; // r8d
  bool v2; // zf
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    qword_1C0327168 -= 4LL;
    if ( !*(_DWORD *)qword_1C0327168 )
    {
      v1 = 1;
      do
      {
        v2 = a1 == (unsigned __int8 *)qword_1C03271D8;
        if ( (unsigned __int64)a1 >= qword_1C03271D8 )
          goto LABEL_16;
        if ( (unsigned __int64)a1 < qword_1C03271E0 || (unsigned __int64)(a1 + 1) > qword_1C03271D8 || a1 + 1 < a1 )
        {
LABEL_36:
          dword_1C03271D0 = 4381;
          return qword_1C03271D8;
        }
        v3 = *a1++;
        switch ( (_DWORD)v3 )
        {
          case 0x59:
            --v1;
            break;
          case 0x58:
            ++v1;
            break;
          case 0x1B:
            if ( v1 == 1 )
              goto LABEL_15;
            break;
          default:
            v5 = byte_1C02ECE60[v3];
            if ( byte_1C02ECE60[v3] )
            {
              if ( (_DWORD)v5 == 21 )
              {
                if ( (unsigned __int64)a1 < qword_1C03271E0
                  || (unsigned __int64)(a1 + 1) > qword_1C03271D8
                  || a1 + 1 < a1 )
                {
                  goto LABEL_36;
                }
                v5 = (unsigned int)*a1 + 1;
              }
              else if ( (_DWORD)v5 == 22 )
              {
                if ( (unsigned __int64)a1 < qword_1C03271E0
                  || (unsigned __int64)(a1 + 1) > qword_1C03271D8
                  || a1 + 1 < a1 )
                {
                  goto LABEL_36;
                }
                v5 = 2 * (unsigned int)*a1 + 1;
              }
              a1 += v5;
              if ( (unsigned __int64)a1 < qword_1C03271E0 )
              {
                dword_1C03271D0 = 4363;
                return qword_1C03271D8;
              }
              if ( (unsigned __int64)a1 > qword_1C03271D8 )
                return qword_1C03271D8;
            }
            break;
        }
      }
      while ( v1 );
LABEL_15:
      v2 = a1 == (unsigned __int8 *)qword_1C03271D8;
LABEL_16:
      if ( v2 )
      {
        if ( v1 )
          dword_1C03271D0 = 4357;
      }
    }
    return (__int64)a1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
