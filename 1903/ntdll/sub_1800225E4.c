/*
 * XREFs of sub_1800225E4 @ 0x1800225E4
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_1800222E4 @ 0x1800222E4 (sub_1800222E4.c)
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 */

__int64 __fastcall sub_1800225E4(PUNICODE_STRING a1, __int16 a2, __int64 a3, __int64 *a4)
{
  int v6; // ebx
  _UNICODE_STRING *v7; // rax
  __int16 v9; // si
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v10) = 0;
  v6 = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a1;
    a1 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)v6;
    v7 = 0LL;
  }
  v6 = sub_180022698(v7, a1, (__int64)&v10);
  if ( v6 >= 0 )
  {
    v6 = -1073741275;
    if ( (_DWORD)v10 != 9 )
      goto LABEL_11;
    v6 = sub_18002228C(*a4);
    if ( v6 >= 0 )
    {
      v6 = sub_1800222E4(a3, *a4);
      if ( v6 < 0 )
      {
        v9 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v9 )
          sub_18002E73C(0LL);
        sub_18002F3D8(*a4, 0LL);
        if ( !v9 )
          sub_180073E1C();
      }
    }
    if ( v6 < 0 )
    {
LABEL_11:
      sub_18001B678((char *)*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v6;
}
