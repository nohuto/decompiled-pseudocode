/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1405D4470
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140800580 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140800684 (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x1408008C4 (CmpKeyEnumStackEntryNotifyPromotion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(__int64 a1, __int16 *a2, unsigned int a3)
{
  __int16 v4; // ax
  __int64 v8; // rbp
  __int64 v9; // rax
  _WORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v13 = -1;
  v14 = 0;
  v4 = *a2;
  if ( *a2 != 26994 )
  {
LABEL_2:
    if ( ((v4 - 26220) & 0xFDFF) == 0 )
      return *(unsigned int *)&a2[4 * a3 + 2];
    return *(unsigned int *)&a2[2 * a3 + 2];
  }
  v8 = 0LL;
  if ( !a2[1] )
    return *(unsigned int *)&a2[2 * a3 + 2];
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)&a2[2 * v8 + 2], &v13);
    v10 = (_WORD *)v9;
    if ( !v9 )
      return 0xFFFFFFFFLL;
    v11 = *(unsigned __int16 *)(v9 + 2);
    if ( a3 < v11 )
      break;
    a3 -= v11;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= (unsigned __int16)a2[1] )
    {
      v4 = *a2;
      goto LABEL_2;
    }
  }
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    v12 = *(_DWORD *)&v10[2 * a3 + 2];
  else
    v12 = *(_DWORD *)&v10[4 * a3 + 2];
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
  return v12;
}
