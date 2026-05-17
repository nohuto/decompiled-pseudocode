/*
 * XREFs of sub_1800D538C @ 0x1800D538C
 * Callers:
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 * Callees:
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 */

__int64 __fastcall sub_1800D538C(__int64 a1, char *a2)
{
  int v3; // ebx
  char *v4; // rdi
  __int64 v5; // rsi
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = sub_18001C2B0(*(_QWORD *)(a1 + 48), "__RedirectionInformation__", 0, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    if ( *(_DWORD *)v7 == 1 )
    {
      v5 = 0LL;
      if ( *((_DWORD *)v7 + 1) )
      {
        do
        {
          v3 = sub_1800D5064(*((_QWORD *)v4 + 1) + 24 * v5, v5);
          if ( v3 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *((_DWORD *)v4 + 1) );
      }
      sub_18001C2B0(*(_QWORD *)(a1 + 48), "__ShouldApplyRedirection__", 0, (char **)&qword_180165278);
      sub_18001C2B0(*(_QWORD *)(a1 + 48), "__ShouldApplyRedirectionToFunction__", 0, (char **)&qword_180165270);
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)v3;
}
