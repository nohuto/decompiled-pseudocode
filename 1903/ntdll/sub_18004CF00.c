/*
 * XREFs of sub_18004CF00 @ 0x18004CF00
 * Callers:
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EC58 @ 0x18004EC58 (sub_18004EC58.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_1801018F0 @ 0x1801018F0 (sub_1801018F0.c)
 *     sub_180101A00 @ 0x180101A00 (sub_180101A00.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180101C80 @ 0x180101C80 (sub_180101C80.c)
 *     sub_180102300 @ 0x180102300 (sub_180102300.c)
 * Callees:
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 *     sub_18004CFFC @ 0x18004CFFC (sub_18004CFFC.c)
 *     sub_18004EA3C @ 0x18004EA3C (sub_18004EA3C.c)
 */

void *__fastcall sub_18004CF00(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // xmm0_8
  char *v8; // rax
  char v9; // dl
  __int64 v10; // rbx
  PVOID *v11; // rsi
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = *a4;
  v4 = v14;
  v8 = sub_18004CC7C(&v14);
  *(_QWORD *)&v14 = v4;
  v9 = BYTE1(v4);
  v10 = 0LL;
  v11 = (PVOID *)v8;
  BYTE3(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  if ( BYTE1(v4) >= 2u )
    v9 = 2;
  BYTE1(v14) = v9;
  if ( (int)sub_18004CFFC(v8, &v14) >= 0 )
  {
    if ( a3 )
      return sub_180036D88(
               (__int64)*v11 + (*((unsigned int *)*v11 + 68) < a1 ? 0xC0 : 0) + 256,
               a1,
               a1,
               a2,
               a2 < a1 ? 83886080 : 0x1000000);
    else
      return (void *)sub_18004EA3C(*v11);
  }
  return (void *)v10;
}
