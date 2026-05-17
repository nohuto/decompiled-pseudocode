/*
 * XREFs of sub_18010E004 @ 0x18010E004
 * Callers:
 *     sub_18010D540 @ 0x18010D540 (sub_18010D540.c)
 * Callees:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_18010DF30 @ 0x18010DF30 (sub_18010DF30.c)
 *     sub_18010E144 @ 0x18010E144 (sub_18010E144.c)
 *     sub_18010E320 @ 0x18010E320 (sub_18010E320.c)
 */

__int64 __fastcall sub_18010E004(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  NTSTATUS DllFullName; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  char v15; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  v7 = 0;
  if ( v5 < *((_QWORD *)&xmmword_18017A4E0 + 1)
    || v5 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    sub_18001E620(v5, (signed __int64)&v13, a3, a4);
  }
  else
  {
    v13 = xmmword_18017A4E0;
    v14 = qword_18017A4F0;
  }
  v8 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
    {
      v7 = sub_18010DF30(*((unsigned __int64 *)&v13 + 1), 0x3FFFLL, &v13, &v12);
      if ( v7 )
        return v7;
      return (unsigned int)sub_18010E320(a1, v13, v12);
    }
    else
    {
      if ( *(__int16 *)(a2 + 98) >= 0 )
        return v7;
      *((_QWORD *)&v13 + 1) = &v15;
      WORD1(v13) = 260;
      DllFullName = LdrGetDllFullName(v8, (__int64)&v13);
      if ( DllFullName < 0 )
        return RtlNtStatusToDosError(DllFullName);
      else
        return (unsigned int)sub_18010E144(a1, &v13, a2 + 32);
    }
  }
  return 87;
}
