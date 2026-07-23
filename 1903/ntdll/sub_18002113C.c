/*
 * XREFs of sub_18002113C @ 0x18002113C
 * Callers:
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_1800CF288 @ 0x1800CF288 (sub_1800CF288.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18002105C @ 0x18002105C (sub_18002105C.c)
 *     RtlInitString @ 0x180021100 (RtlInitString.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002113C(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 *v7; // r14
  const CHAR *v9; // rsi
  int v10; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-C8h] BYREF
  char v14; // [rsp+BCh] [rbp-4Ch]

  *a3 = 0LL;
  v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)sub_18001869C(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    sub_180021798(*(_QWORD *)(a1 + 80), a4 | 1LL, Path);
    RtlInitString(&DestinationString, v9);
    v10 = sub_180021EC0((unsigned int)&DestinationString, (unsigned int)Path, a1, a1, 3, (__int64)a3);
    if ( v10 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *(_QWORD *)(*a3 + 48);
      sub_18002105C(a1, a2, *a3, a5);
    }
    if ( v14 )
      RtlReleasePath(Path[0]);
  }
  return (unsigned int)v10;
}
