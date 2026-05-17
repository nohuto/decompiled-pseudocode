/*
 * XREFs of sub_180069778 @ 0x180069778
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_1800692D0 @ 0x1800692D0 (sub_1800692D0.c)
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 */

__int64 __fastcall sub_180069778(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 **v6; // rsi
  char v7; // al
  __int64 **v8; // rdi
  __int64 *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == -4 )
    return 3221225794LL;
  v6 = (__int64 **)a1[5];
  v7 = 0;
  v13 = 0;
  if ( v6 )
  {
    v8 = v6;
    do
    {
      v8 = (__int64 **)*v8;
      if ( ((_BYTE)v8[3] & 1) == 0 )
      {
        v9 = v8[1];
        if ( *((_DWORD *)v9 + 14) == 7 )
        {
          result = sub_180069778(v9, a2, &v13);
          if ( (int)result < 0 )
            goto LABEL_19;
          v7 = v13;
        }
        else
        {
          if ( *((_DWORD *)v9 + 14) == -4 )
          {
            result = 3221225794LL;
            goto LABEL_19;
          }
          if ( *((_DWORD *)v9 + 14) == 8 )
            v7 = 1;
          v13 = v7;
        }
      }
    }
    while ( v8 != v6 );
    if ( v7 )
    {
      v11 = *a1;
      *a3 = 1;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( a2 != *(_QWORD *)(v12 + 40) )
          return 0LL;
      }
    }
  }
  result = sub_180069854(a1);
  if ( (int)result < 0 )
LABEL_19:
    *((_DWORD *)a1 + 14) = -4;
  return result;
}
