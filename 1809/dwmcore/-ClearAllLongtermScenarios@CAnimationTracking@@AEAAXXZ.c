/*
 * XREFs of ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18014C760
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18014C734 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::ClearAllLongtermScenarios(CAnimationTracking *this)
{
  _QWORD *v1; // rsi
  unsigned __int64 *v2; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 *i; // rdx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 *j; // rdx
  unsigned __int64 v11; // r9
  _QWORD *k; // rdx

  v1 = (_QWORD *)((char *)this + 552);
  v2 = (unsigned __int64 *)*((_QWORD *)this + 69);
  if ( !v2 )
    goto LABEL_5;
  v4 = *v2;
  if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v4 = *v2;
  if ( (v4 & 1) != 0 )
  {
LABEL_5:
    for ( i = v2 + 1; (unsigned __int64)i < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5); ++i )
    {
      v4 = *i;
      if ( (*i & 1) == 0 )
        goto LABEL_24;
    }
    v4 = 0LL;
  }
LABEL_24:
  while ( v4 )
  {
    v6 = v4;
    v7 = *(_QWORD *)(v4 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v8 = *v1
       + 8
       * ((HIBYTE(v7)
         + 37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7)
            + 37
            * (((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v4 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v7 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1));
    v9 = (unsigned __int64 *)v4;
    v4 = *(_QWORD *)v4;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v9;
    if ( (v4 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v8 + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v4 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_18;
      }
      v4 = 0LL;
    }
LABEL_18:
    v11 = *(_QWORD *)(v6 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8
                       * ((HIBYTE(v11)
                         + 37
                         * (BYTE6(v11)
                          + 37
                          * (BYTE5(v11)
                           + 37
                           * (BYTE4(v11)
                            + 37
                            * (((*(_DWORD *)(v6 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)((*(_DWORD *)(v6 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v6 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v11 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1)));
          (*k & 1) == 0;
          k = (_QWORD *)*k )
    {
      if ( *k == v6 )
      {
        *k = *(_QWORD *)v6;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v6 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v6);
  }
}
