/*
 * XREFs of BapdpParseEventParts @ 0x140178B30
 * Callers:
 *     BapdWriteEtwEvents @ 0x140178808 (BapdWriteEtwEvents.c)
 * Callees:
 *     <none>
 */

int *__fastcall BapdpParseEventParts(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int64 a4, int *a5)
{
  int v5; // r10d
  int *result; // rax
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v9; // r11

  if ( *(_BYTE *)(a1 + 3) == 11
    && a3 >= 7
    && (v7 = *a2, v5 = 3, (unsigned int)v7 >= 3)
    && (unsigned int)v7 <= a3 - 4
    && (v8 = (char *)a2 + v7, v9 = *(unsigned __int16 *)((char *)a2 + v7), (unsigned int)v9 >= 4)
    && (unsigned int)v9 <= a3 - (unsigned int)v7 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_QWORD *)a4 = a2;
    *(_DWORD *)(a4 + 8) = v7;
    *(_BYTE *)(a4 + 12) = 2;
    *(_DWORD *)(a4 + 28) = 0;
    *(_QWORD *)(a4 + 16) = v8;
    *(_DWORD *)(a4 + 24) = v9;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 44) = 0;
    *(_QWORD *)(a4 + 32) = &v8[v9];
    *(_DWORD *)(a4 + 40) = a3 - v9 - v7;
  }
  else
  {
    *(_DWORD *)(a4 + 12) = 0;
    v5 = 1;
    *(_QWORD *)a4 = a2;
    *(_DWORD *)(a4 + 8) = a3;
  }
  result = a5;
  *a5 = v5;
  return result;
}
