/*
 * XREFs of sub_1800EC73C @ 0x1800EC73C
 * Callers:
 *     sub_1800EB844 @ 0x1800EB844 (sub_1800EB844.c)
 * Callees:
 *     sub_1800ED4B0 @ 0x1800ED4B0 (sub_1800ED4B0.c)
 */

char __fastcall sub_1800EC73C(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  char v4; // r11
  __int16 v7; // dx
  int v8; // eax
  __int64 v9; // r8
  char v10; // al
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 || !a4 )
    return 0;
  v7 = *a4;
  v8 = (unsigned __int16)a4[1] >> 14;
  v12[0] = v8;
  v13 = v7;
  if ( v8 == 2 )
  {
    if ( v7 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( v7 < (int)*(unsigned __int16 *)(v9 + 6)
        && (int)sub_1800ED4B0(*(_QWORD *)(v9 + 16) + 28LL * v7, v12, &v13) >= 0 )
      {
        v8 = v12[0];
        v7 = v13;
        goto LABEL_8;
      }
    }
    return 0;
  }
LABEL_8:
  if ( a2 == v8 )
  {
    v10 = v4;
    if ( a3 == v7 )
      return 1;
    return v10;
  }
  return v4;
}
