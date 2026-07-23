/*
 * XREFs of KiSelectThreadFromScbQueue @ 0x14029B900
 * Callers:
 *     KiChooseLowestRankedThread @ 0x140116B1C (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14029B900 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x140116E58 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14029B900 (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromScbQueue(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rax
  _QWORD *i; // rbx
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  if ( (v5 & 1) != 0 )
  {
    if ( v5 == 1 )
      return 0LL;
    i = (_QWORD *)(v5 ^ (a1 | 1));
  }
  else
  {
    i = *(_QWORD **)(a1 + 8);
  }
  if ( i )
  {
    v10 = 1 << a3;
    while ( 1 )
    {
      v11 = (__int64)(i - 11);
      if ( *((unsigned __int16 *)i + 13) >= v10 )
        return KiSelectThreadFromSchedulingGroup(a2, v11, a3);
      if ( v11 == a4 )
      {
        *a5 = 1;
        return 0LL;
      }
      v12 = v11 + 392;
      v13 = *(_QWORD *)(v11 + 392);
      if ( (*(_BYTE *)(v11 + 400) & 1) == 0 )
        goto LABEL_12;
      if ( v13 )
        break;
LABEL_14:
      if ( !*a5 )
      {
        v15 = (_QWORD **)i[1];
        v16 = i;
        if ( v15 )
        {
          v17 = *v15;
          for ( i = (_QWORD *)i[1]; v17; v17 = (_QWORD *)*v17 )
            i = v17;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v16 )
              break;
            v16 = i;
          }
        }
        if ( i )
          continue;
      }
      return 0LL;
    }
    v13 ^= v12;
LABEL_12:
    if ( v13 )
    {
      result = KiSelectThreadFromScbQueue(v12, a2, a3, a4, (__int64)a5);
      if ( result )
        return result;
    }
    goto LABEL_14;
  }
  return 0LL;
}
