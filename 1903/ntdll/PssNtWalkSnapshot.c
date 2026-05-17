/*
 * XREFs of PssNtWalkSnapshot @ 0x180110EF0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180110D60 (PssNtValidateDescriptor.c)
 *     sub_180112EBC @ 0x180112EBC (sub_180112EBC.c)
 *     sub_180112FE8 @ 0x180112FE8 (sub_180112FE8.c)
 *     sub_180113168 @ 0x180113168 (sub_180113168.c)
 *     sub_1801132F0 @ 0x1801132F0 (sub_1801132F0.c)
 */

__int64 __fastcall PssNtWalkSnapshot(unsigned int *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int v10; // ebx
  int v11; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225475LL;
          if ( !a4 || a5 == 136 )
            return sub_180113168(a1, a3, a4);
        }
        else if ( !a4 || a5 == 72 )
        {
          return sub_180112FE8(a1, a3, a4);
        }
      }
      else if ( !a4 || a5 == 80 )
      {
        return sub_1801132F0(a1, a3, a4);
      }
      return 3221225476LL;
    }
    if ( a4 && a5 != 80 )
      return 3221225476LL;
    return sub_180112EBC(a1, a3, a4);
  }
  return result;
}
