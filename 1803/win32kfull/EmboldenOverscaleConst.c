/*
 * XREFs of EmboldenOverscaleConst @ 0x1C02C1BBC
 * Callers:
 *     fsc_OverscaleToBold @ 0x1C02C1EB0 (fsc_OverscaleToBold.c)
 * Callees:
 *     <none>
 */

char __fastcall EmboldenOverscaleConst(unsigned __int16 *a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v2; // r9
  __int64 v3; // rdi
  unsigned __int16 v4; // dx
  _BYTE *v5; // r8
  __int64 v6; // rsi
  _BYTE *v7; // rdx
  unsigned __int8 v8; // r10
  _BYTE *v9; // rbx
  unsigned __int8 v10; // r11
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *((_QWORD *)a1 + 5);
  v3 = *a1;
  v4 = a1[1] - a1[2];
  v5 = (_BYTE *)(v3 + v2 - 1);
  if ( v4 )
  {
    v6 = v4;
    do
    {
      v7 = v5;
      if ( (unsigned __int64)v5 > v2 )
      {
        v8 = *v5;
        do
        {
          v9 = v7 - 1;
          v10 = *(v7 - 1);
          if ( v8 || v10 )
            *v7 = v8 | (4 * (v10 | (2 * (v10 | (2 * (v10 | (2 * (v10 | (2 * (v10 | (2 * v10))))))))))) | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | (v8 >> 1)) >> 1)) >> 1)) >> 1)) >> 1)) >> 1);
          --v7;
          v8 = v10;
        }
        while ( (unsigned __int64)v9 > v2 );
      }
      v2 += v3;
      v5 += v3;
      LOBYTE(v1) = *v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | (*v7 >> 1)) >> 1)) >> 1)) >> 1)) >> 1)) >> 1);
      *v7 = (_BYTE)v1;
      --v6;
    }
    while ( v6 );
  }
  return (char)v1;
}
