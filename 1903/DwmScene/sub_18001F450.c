/*
 * XREFs of sub_18001F450 @ 0x18001F450
 * Callers:
 *     sub_18001D978 @ 0x18001D978 (sub_18001D978.c)
 *     sub_18001DA6C @ 0x18001DA6C (sub_18001DA6C.c)
 *     sub_18001DB60 @ 0x18001DB60 (sub_18001DB60.c)
 *     sub_18001DC54 @ 0x18001DC54 (sub_18001DC54.c)
 *     sub_18001DD48 @ 0x18001DD48 (sub_18001DD48.c)
 *     sub_18001DE3C @ 0x18001DE3C (sub_18001DE3C.c)
 *     sub_18001DF30 @ 0x18001DF30 (sub_18001DF30.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     sub_18001E118 @ 0x18001E118 (sub_18001E118.c)
 *     sub_18001E20C @ 0x18001E20C (sub_18001E20C.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18001E3F4 @ 0x18001E3F4 (sub_18001E3F4.c)
 *     sub_18001E4E8 @ 0x18001E4E8 (sub_18001E4E8.c)
 *     sub_18001E5DC @ 0x18001E5DC (sub_18001E5DC.c)
 *     sub_18001E6D0 @ 0x18001E6D0 (sub_18001E6D0.c)
 *     sub_18001E7C4 @ 0x18001E7C4 (sub_18001E7C4.c)
 *     sub_18001E8B8 @ 0x18001E8B8 (sub_18001E8B8.c)
 *     sub_1800B51AC @ 0x1800B51AC (sub_1800B51AC.c)
 *     sub_1800B52A0 @ 0x1800B52A0 (sub_1800B52A0.c)
 *     sub_1800B5394 @ 0x1800B5394 (sub_1800B5394.c)
 *     sub_1800B5488 @ 0x1800B5488 (sub_1800B5488.c)
 *     sub_1800B557C @ 0x1800B557C (sub_1800B557C.c)
 *     sub_1800B5670 @ 0x1800B5670 (sub_1800B5670.c)
 *     sub_1800B5764 @ 0x1800B5764 (sub_1800B5764.c)
 *     sub_1800B5858 @ 0x1800B5858 (sub_1800B5858.c)
 * Callees:
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 *     sub_18001EC7C @ 0x18001EC7C (sub_18001EC7C.c)
 */

__int64 __fastcall sub_18001F450(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= v7 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || v7 < v3[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_18001E9AC((__int64)a1, (__int64)&unk_180148763, &v11);
    sub_18001EC7C(a1, &v10, v3, v8 + 4, v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
