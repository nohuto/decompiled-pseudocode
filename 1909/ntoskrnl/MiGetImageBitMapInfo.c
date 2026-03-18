/*
 * XREFs of MiGetImageBitMapInfo @ 0x140097C3C
 * Callers:
 *     MiReturnImageBase @ 0x140609554 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x14064904C (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax

  a2[1] = 0LL;
  if ( a1 == 1 )
  {
    *a3 = 2013265920LL;
    result = (__int64)&qword_1404644E0;
    *a2 = &qword_1404644E0;
    if ( a4 )
    {
      result = qword_1404644F0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140464488;
      result = (__int64)&qword_1404644E0;
      a2[1] = &qword_1404644E0;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140464450;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140464460;
        goto LABEL_6;
      }
      result = (__int64)&unk_140464488;
      *a2 = &unk_140464488;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_1404644C8;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
