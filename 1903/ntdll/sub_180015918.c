/*
 * XREFs of sub_180015918 @ 0x180015918
 * Callers:
 *     sub_1800095D4 @ 0x1800095D4 (sub_1800095D4.c)
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FDF7C @ 0x1800FDF7C (sub_1800FDF7C.c)
 *     sub_1800FF500 @ 0x1800FF500 (sub_1800FF500.c)
 *     sub_1800FFA38 @ 0x1800FFA38 (sub_1800FFA38.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     sub_1800167FC @ 0x1800167FC (sub_1800167FC.c)
 *     sub_1800FE4E0 @ 0x1800FE4E0 (sub_1800FE4E0.c)
 */

__int64 __fastcall sub_180015918(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_8;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, (*(_DWORD *)a1 & 2) == 0) )
    LOBYTE(a3) = 0;
  v4 = sub_1800167FC(*(_QWORD *)(a1 + 32), a2, a3, &v12);
  if ( v4 >= 0 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_8:
    result = 3221225485LL;
    goto LABEL_9;
  }
  v10 = sub_1800FE4E0(*(PVOID *)(a1 + 32));
  if ( v10
    && (*(_DWORD *)a1 |= 2u, LOBYTE(v11) = 1, *(_QWORD *)(a1 + 32) = v10, v4 = sub_1800167FC(v10, a2, v11, 0LL), v4 >= 0) )
  {
LABEL_12:
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
LABEL_9:
  if ( a4 )
    *a4 = v4;
  return result;
}
