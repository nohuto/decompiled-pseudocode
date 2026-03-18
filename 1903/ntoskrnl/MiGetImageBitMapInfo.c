/*
 * XREFs of MiGetImageBitMapInfo @ 0x1400A93E4
 * Callers:
 *     MiReturnImageBase @ 0x140607A44 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x14066F6E8 (MiSelectImageBase.c)
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
    result = (__int64)&qword_1404647E0;
    *a2 = &qword_1404647E0;
    if ( a4 )
    {
      result = qword_1404647F0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140464788;
      result = (__int64)&qword_1404647E0;
      a2[1] = &qword_1404647E0;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140464750;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140464760;
        goto LABEL_6;
      }
      result = (__int64)&unk_140464788;
      *a2 = &unk_140464788;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_1404647C8;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
