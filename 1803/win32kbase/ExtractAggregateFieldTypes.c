/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1C0167A54
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00BB4A0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r9
  unsigned __int64 v5; // r10
  char *v6; // r8
  char v7; // al
  char v9; // al
  char *v10; // rdi
  char v11; // cl
  char v12; // dl
  char v13; // bl
  char v14; // dl
  __int64 v15; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  while ( (unsigned __int64)v6 < v5 )
  {
    do
    {
      v9 = *v6;
      v10 = v6++;
    }
    while ( v9 );
    v11 = *v6;
    v12 = 0;
    if ( *v6 < 0 )
      v12 = v6[1];
    v13 = v11 & 0x7F;
    if ( v11 >= 0 )
    {
      v6 = v10;
      v13 = v11;
    }
    v6 += 2;
    if ( v12 >= 0 )
      break;
    while ( 1 )
    {
      v14 = *v6;
      if ( *v6 >= 0 )
        break;
      if ( v14 != (char)0x80 )
        return v3;
      ++v6;
    }
    if ( v13 != 9 || (unsigned __int8)(v14 - 113) > 2u )
      break;
    v15 = (unsigned int)v3++ + 2;
    *(_BYTE *)(16 * v15 + a2 + 13) = v14;
  }
  return v3;
}
