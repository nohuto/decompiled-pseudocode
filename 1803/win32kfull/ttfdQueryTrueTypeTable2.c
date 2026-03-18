/*
 * XREFs of ttfdQueryTrueTypeTable2 @ 0x1C0220BC4
 * Callers:
 *     ttfdQueryTrueTypeTable @ 0x1C0220B5C (ttfdQueryTrueTypeTable.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     pjTable @ 0x1C021B99C (pjTable.c)
 */

__int64 __fastcall ttfdQueryTrueTypeTable2(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        void *a6,
        __int64 *a7,
        int *a8)
{
  __int64 v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  const void *v13; // rcx
  int v14; // ebx
  int v15; // edx
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v8 = a4;
  if ( a4 < 0 || (*(_DWORD *)(a1 + 4) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL));
  if ( a3 == 1717793908 )
  {
    if ( *(_DWORD *)(v10 + 272) )
    {
      v11 = *(_QWORD *)(v10 + 64);
      v12 = *(_DWORD *)(v10 + 72);
      goto LABEL_11;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a3 )
  {
    v11 = pjTable(a3, v10, (unsigned __int32 *)&v16);
    if ( !v11 )
      return 0xFFFFFFFFLL;
    v12 = v16;
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 64) + *(unsigned int *)(v10 + 272);
    v12 = *(_DWORD *)(v10 + 72) - *(_DWORD *)(v10 + 272);
  }
LABEL_11:
  if ( a7 )
    *a7 = v11;
  if ( a8 )
    *a8 = v12;
  v13 = (const void *)(v8 + v11);
  v14 = v12 - v8;
  if ( v14 <= 0 )
    return 0xFFFFFFFFLL;
  if ( a6 && a5 )
  {
    v15 = v14;
    if ( v14 > a5 )
    {
      v14 = a5;
      v15 = a5;
    }
    memmove(a6, v13, v15);
  }
  return (unsigned int)v14;
}
