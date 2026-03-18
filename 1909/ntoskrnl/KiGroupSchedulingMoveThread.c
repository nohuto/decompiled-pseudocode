/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x1401158C0
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140041830 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x1401158C0 (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x140015A88 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x1401158C0 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140115980 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 j; // rbx
  __int64 result; // rax
  unsigned int i; // r8d
  unsigned int v10; // r9d
  __int64 *v11; // r14
  int v12; // r8d
  __int64 *v13; // r11
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a3 + 8);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 0LL;
    j = v4 ^ (a3 | 1);
  }
  else
  {
    j = *(_QWORD *)(a3 + 8);
  }
  if ( j )
  {
    while ( 1 )
    {
      for ( i = *(unsigned __int16 *)(j + 26); i; i = v12 ^ (1 << a4) )
      {
        _BitScanReverse(&v10, i);
        v11 = *(__int64 **)(16LL * v10 + j + 48);
        do
        {
          if ( KiPrcbInGroupAffinity(a1, (__int64)(v11 + 45)) )
          {
            KiRemoveThreadFromScbQueue(a2, j - 88);
            result = (__int64)(v11 - 27);
            *((_DWORD *)v11 + 80) = *(_DWORD *)(a1 + 36);
            return result;
          }
          v11 = (__int64 *)*v11;
        }
        while ( v11 != v13 );
      }
      v14 = j + 304;
      v15 = *(_QWORD *)(j + 304);
      if ( (*(_BYTE *)(j + 312) & 1) == 0 )
        goto LABEL_17;
      if ( v15 )
        break;
LABEL_19:
      v16 = *(_QWORD ***)(j + 8);
      v17 = j;
      if ( v16 )
      {
        v18 = *v16;
        for ( j = *(_QWORD *)(j + 8); v18; v18 = (_QWORD *)*v18 )
          j = (unsigned __int64)v18;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v17 )
            break;
          v17 = j;
        }
      }
      if ( !j )
        return 0LL;
    }
    v15 ^= v14;
LABEL_17:
    if ( v15 )
    {
      result = KiGroupSchedulingMoveThread(a1, a2, v14, a4, v19, v20);
      if ( result )
        return result;
    }
    goto LABEL_19;
  }
  return 0LL;
}
