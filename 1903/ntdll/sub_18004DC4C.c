/*
 * XREFs of sub_18004DC4C @ 0x18004DC4C
 * Callers:
 *     sub_18004DC8C @ 0x18004DC8C (sub_18004DC8C.c)
 *     sub_180050ED4 @ 0x180050ED4 (sub_180050ED4.c)
 * Callees:
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 */

_BOOL8 __fastcall sub_18004DC4C(__int64 a1)
{
  bool v1; // zf
  _BOOL8 result; // rax
  char *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = xmmword_1801638B0;
  result = 0;
  if ( v1 )
  {
    v3 = sub_18004CC7C(&v5);
    if ( v4 != *(_QWORD *)v3 )
      return 1;
  }
  return result;
}
