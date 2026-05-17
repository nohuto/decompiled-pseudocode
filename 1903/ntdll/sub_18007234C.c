/*
 * XREFs of sub_18007234C @ 0x18007234C
 * Callers:
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_1800D5DF0 @ 0x1800D5DF0 (sub_1800D5DF0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007234C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // r11
  __int64 v6; // rdx

  result = a2 / qword_180165018;
  v4 = a2 / qword_180165018
     + (qword_180165018
      + (unsigned __int64)(((unsigned int)a1 & ((_DWORD)qword_180165018 - 1))
                         + ((unsigned int)a2 & ((_DWORD)qword_180165018 - 1)))
      - 1)
     / qword_180165018;
  v5 = (unsigned __int64 *)(a1 & -qword_180165018);
  v6 = (unsigned int)v4;
  if ( (_DWORD)v4 )
  {
    do
    {
      result = *v5;
      *v5 = *v5;
      v5 = (unsigned __int64 *)((char *)v5 + qword_180165018);
      --v6;
    }
    while ( v6 );
  }
  return result;
}
