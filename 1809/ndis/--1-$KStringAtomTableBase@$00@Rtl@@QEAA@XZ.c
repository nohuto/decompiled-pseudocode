/*
 * XREFs of ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x1C0104ABC
 * Callers:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C0104C54 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>(__int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // r11
  _QWORD **i; // rdx
  unsigned __int64 v5; // r9
  _QWORD *j; // rdx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD ***)(a1 + 8);
    if ( !v2 )
      goto LABEL_5;
    v3 = *v2;
    if ( ((unsigned __int64)*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v2;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
LABEL_5:
      for ( i = v2 + 1;
            (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
            ++i )
      {
        v3 = *i;
        if ( ((unsigned __int8)*i & 1) == 0 )
          goto LABEL_10;
      }
      v3 = 0LL;
    }
LABEL_10:
    if ( !v3 )
      break;
    v5 = v3[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8
                       * ((HIBYTE(v5)
                         + 37
                         * (BYTE6(v5)
                          + 37
                          * (BYTE5(v5)
                           + 37
                           * (BYTE4(v5)
                            + 37
                            * ((((_DWORD)v3[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)(((_DWORD)v3[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(v3[1] & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v5 + 11623883)))))))) & ((*(_DWORD *)(a1 + 4) >> 5) - 1)));
          (*j & 1) == 0;
          j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v3 )
      {
        *j = *v3;
        --*(_DWORD *)a1;
        *v3 |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag(v3, 0x6D74414Bu);
  }
  v7 = *(void **)(a1 + 8);
  if ( (void *)(a1 + 16) != v7 )
    ExFreePoolWithTag(v7, 0x6873484Bu);
}
