/*
 * XREFs of MiUnlinkHugeRange @ 0x1402C286C
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x1402C1B28 (MiGetHugeRangeFromNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnlinkHugeRange(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax

  v3 = qword_140465EB0;
  v4 = *a2 & 0x3FFFF;
  v5 = *(_QWORD *)(qword_140465EB0 + 8 * v4);
  v6 = v5 & 0xC0000;
  v7 = v5 & 0x3FFFF | *a2 & 0xFFFFFFFFFFFC0000uLL;
  if ( (v5 & 0x3FFFF) != 0 )
    *(_QWORD *)(qword_140465EB0 + 8 * (v5 & 0x3FFFF)) &= 0xFFFFFFC0000FFFFFuLL;
  else
    v7 = v5 & 0x3FFFF | *a2 & 0xFFFFFFC0000C0000uLL;
  *a2 = v7;
  if ( *(_BYTE *)(a1 + 4765) == 1 || v6 == 0x80000 )
    v8 = v5 & 0xFFFFFFFFFFFC0000uLL | 1;
  else
    v8 = v5 & 0xFFFFFFFFFFFC0000uLL;
  v9 = v8 | 0xC0000;
  *(_QWORD *)(v3 + 8 * v4) = v9;
  v10 = 1984 * ((v9 >> 51) & 0x3F);
  v11 = 1824LL;
  v12 = *(_QWORD *)(a1 + 16) + v10;
  if ( v6 == 0x80000 )
    v11 = 1832LL;
  --*(_QWORD *)(v11 + v12);
  result = v4;
  --*(_QWORD *)(a1 + 7120);
  return result;
}
