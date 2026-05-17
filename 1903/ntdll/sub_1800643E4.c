/*
 * XREFs of sub_1800643E4 @ 0x1800643E4
 * Callers:
 *     RtlInsertElementGenericTableFullAvl @ 0x180063FD0 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_18006424C @ 0x18006424C (sub_18006424C.c)
 * Callees:
 *     sub_1800644A0 @ 0x1800644A0 (sub_1800644A0.c)
 */

__int64 __fastcall sub_1800643E4(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // r9
  __int64 v13; // r10

  v1 = *(_BYTE *)(a1 + 24);
  if ( v1 == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 24) == v1 )
  {
    sub_1800644A0(v2);
    *(_BYTE *)(v3 + 24) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    return 0LL;
  }
  v6 = -v1;
  if ( *(char *)(v2 + 24) == v6 )
  {
    if ( v1 == 1 )
      v7 = *(_QWORD *)(v2 + 8);
    else
      v7 = *(_QWORD *)(v2 + 16);
    sub_1800644A0(v7);
    sub_1800644A0(v8);
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v10 + 24) = 0;
    if ( *(_BYTE *)(v7 + 24) == v9 )
    {
      *(_BYTE *)(v11 + 24) = -v9;
    }
    else if ( *(char *)(v7 + 24) == v6 )
    {
      *(_BYTE *)(v10 + 24) = v9;
    }
    *(_BYTE *)(v7 + 24) = 0;
    return 0LL;
  }
  sub_1800644A0(v2);
  result = 1LL;
  *(_BYTE *)(v13 + 24) = -v12;
  return result;
}
