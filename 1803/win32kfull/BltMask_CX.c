/*
 * XREFs of BltMask_CX @ 0x1C0233E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BltMask_CX(__int64 a1)
{
  char *v1; // r8
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // rbx
  char v5; // al
  char *v6; // r8
  __int64 result; // rax
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  char v10; // al
  int v11; // [rsp+8h] [rbp+8h]
  int v12; // [rsp+8h] [rbp+8h]

  v1 = *(char **)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 576);
  v3 = *(_QWORD *)(a1 + 584);
  v4 = *(int *)(a1 + 592);
  v5 = *v1;
  v6 = v1 + 1;
  v11 = 1;
  BYTE2(v11) = v5;
  LODWORD(result) = v11 << *(_BYTE *)(a1 + 4);
  v8 = (unsigned int)result >> 8;
  v9 = WORD1(result);
  do
  {
    if ( (_BYTE)v8 )
    {
      v10 = *v6++;
      v12 = 1;
      LOBYTE(v9) = v10;
      BYTE2(v12) = v10;
      LODWORD(result) = v12;
    }
    *(_BYTE *)(v2 + 3) = (char)v9 >> 7;
    result = (unsigned int)(2 * result);
    v2 += v4;
    LOBYTE(v8) = BYTE1(result);
    LOBYTE(v9) = BYTE2(result);
  }
  while ( v2 != v3 );
  return result;
}
