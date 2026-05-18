/*
 * XREFs of sub_18006432C @ 0x18006432C
 * Callers:
 *     sub_180064AB0 @ 0x180064AB0 (sub_180064AB0.c)
 *     sub_1800965E0 @ 0x1800965E0 (sub_1800965E0.c)
 *     sub_1800D23C0 @ 0x1800D23C0 (sub_1800D23C0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18006432C(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  char v3; // r8
  __int64 *v4; // r10
  __int64 *v5; // rax
  __int64 *v6; // rcx
  char v7; // r11
  __int64 *v8; // rcx

  v2 = *(__int64 **)(a1 + 80);
  v3 = 0;
  v4 = v2;
  v5 = (__int64 *)v2[1];
  v6 = v5;
  v7 = *((_BYTE *)v5 + 25);
  if ( !v7 )
  {
    do
    {
      if ( *((_DWORD *)v6 + 7) >= a2 )
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( v4 == v2 || a2 < *((_DWORD *)v4 + 7) )
    v4 = v2;
  if ( v4 != v2 )
  {
    v8 = v2;
    if ( v7 )
      goto LABEL_17;
    do
    {
      if ( *((_DWORD *)v5 + 7) >= a2 )
      {
        v8 = v5;
        v5 = (__int64 *)*v5;
      }
      else
      {
        v5 = (__int64 *)v5[2];
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
    if ( v8 == v2 || a2 < *((_DWORD *)v8 + 7) )
LABEL_17:
      v8 = v2;
    if ( *((_BYTE *)v8 + 32) )
      return 1;
  }
  return v3;
}
