/*
 * XREFs of LdrGetDllHandleByName @ 0x180077240
 * Callers:
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180022698(a1, a2, 0, (__int64)&v7, &v8);
  if ( v4 >= 0 )
  {
    if ( v8 < 7 )
    {
      v4 = -1073741515;
      v5 = v7;
    }
    else
    {
      v5 = v7;
      v4 = sub_18002228C(v7);
      if ( v4 >= 0 )
        *a3 = *(_QWORD *)(v5 + 48);
    }
    sub_18001B678(v5);
  }
  return (unsigned int)v4;
}
