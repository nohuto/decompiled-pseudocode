/*
 * XREFs of LdrAddRefDll @ 0x18002F760
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_1800332A0 @ 0x1800332A0 (sub_1800332A0.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 *     sub_18007FC20 @ 0x18007FC20 (sub_18007FC20.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, unsigned __int64 a2)
{
  char v2; // di
  int v3; // ebx
  bool v4; // zf
  __int64 v5; // rdi
  int v6; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = sub_18001869C(a2, &v9, &v8);
    if ( v3 >= 0 )
    {
      v4 = (v2 & 1) == 0;
      v5 = v9;
      if ( v4 )
        v6 = sub_18002228C(v9);
      else
        v6 = sub_18002EB1C(v9);
      v3 = v6;
      sub_18001B678(v5);
    }
  }
  return (unsigned int)v3;
}
