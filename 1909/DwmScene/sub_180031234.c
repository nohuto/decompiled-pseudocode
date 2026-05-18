/*
 * XREFs of sub_180031234 @ 0x180031234
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 * Callees:
 *     sub_18003118C @ 0x18003118C (sub_18003118C.c)
 */

__int64 __fastcall sub_180031234(unsigned int a1, int a2, int a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v7; // r9d
  char *v8; // rdi
  __int64 i; // rcx
  unsigned int v10; // ecx
  _DWORD v12[2]; // [rsp+20h] [rbp-78h]
  char v13; // [rsp+28h] [rbp-70h] BYREF
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]
  int v16; // [rsp+80h] [rbp-18h]

  v4 = 0;
  v5 = a1;
  if ( a4 )
    v7 = *a4;
  else
    v7 = sub_18003118C(a1, a2);
  if ( (_DWORD)v5 == 23 )
  {
    return v7 * (a3 + ((unsigned int)(a3 + 1) >> 1));
  }
  else
  {
    v12[0] = 0;
    v12[1] = 1;
    v8 = &v13;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v8 = 1;
      v8 += 4;
    }
    v14 = 4;
    v15 = 1;
    v16 = 1;
    v10 = v12[v5];
    if ( v10 )
      return v7 * ((v10 + a3 - 1) / v10);
  }
  return v4;
}
