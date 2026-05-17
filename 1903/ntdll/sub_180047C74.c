/*
 * XREFs of sub_180047C74 @ 0x180047C74
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_180048BD4 @ 0x180048BD4 (sub_180048BD4.c)
 *     sub_180050BD8 @ 0x180050BD8 (sub_180050BD8.c)
 * Callees:
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180047C74(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx
  __int64 *v8; // rax
  __int64 v9; // r9

  v4 = 0;
  if ( !dword_18015F9B8 && ((v6 = *a4) != 0 || (v6 = qword_180163558) != 0) && a1 + a2 > v6 )
  {
    v8 = &qword_180163558;
    if ( *a4 )
      v8 = a4;
    v9 = v8[1];
    if ( v9 )
      sub_18010A694(21, a3, 0, v9, a1, a2);
  }
  else
  {
    return 1;
  }
  return v4;
}
