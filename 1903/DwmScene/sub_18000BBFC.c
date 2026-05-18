/*
 * XREFs of sub_18000BBFC @ 0x18000BBFC
 * Callers:
 *     sub_18000AA90 @ 0x18000AA90 (sub_18000AA90.c)
 * Callees:
 *     sub_18000A9B8 @ 0x18000A9B8 (sub_18000A9B8.c)
 *     sub_18000AD28 @ 0x18000AD28 (sub_18000AD28.c)
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18000D188 @ 0x18000D188 (sub_18000D188.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

__int64 __fastcall sub_18000BBFC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  _WORD *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  _WORD *v13; // rax
  HANDLE v14; // rax
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v17 = v7;
  v8 = (_WORD *)v7;
  if ( v7 )
  {
    v16 = 0LL;
    if ( (v7 & 3) != 0 )
      sub_18000D188();
    v10 = sub_18000AD28((__int64)&v16, a1, 1, v7 >> 2);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      *((_QWORD *)v8 + 1) = *a2;
      v11 = v16;
      *a2 = 0LL;
      *(_QWORD *)&v16 = 0LL;
      *((_QWORD *)v8 + 2) = v11;
      v12 = *((_QWORD *)&v16 + 1);
      *((_QWORD *)&v16 + 1) = 0LL;
      *((_QWORD *)v8 + 3) = v12;
      memset(v8 + 16, 0, 0x58uLL);
      v8[16] = 88;
      *((_DWORD *)v8 + 9) = 1;
      memset(v8 + 20, 0, 0x50uLL);
      v13 = v8;
      v8 = 0LL;
      v9 = 0;
      *a3 = v13;
    }
    else
    {
      sub_18000C338(retaddr, 312LL, &unk_1801431D4, (unsigned int)v10, v16, *((_QWORD *)&v16 + 1));
    }
    sub_18000A9B8((__int64)&v16);
    if ( v8 )
    {
      v14 = GetProcessHeap();
      HeapFree(v14, 0, v8);
    }
  }
  else
  {
    v9 = -2147024882;
    sub_18000C338(retaddr, 309LL, &unk_1801431D4, 2147942414LL, v16, *((_QWORD *)&v16 + 1));
  }
  return v9;
}
