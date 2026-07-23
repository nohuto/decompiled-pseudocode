/*
 * XREFs of ExInitializePoolHeapManagement @ 0x14018D3B8
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     ExCreateHeap @ 0x140170328 (ExCreateHeap.c)
 *     ExpDetermineLargePagePolicy @ 0x14018D5E8 (ExpDetermineLargePagePolicy.c)
 *     RtlHpKInitializeHeapManager @ 0x14018D688 (RtlHpKInitializeHeapManager.c)
 *     RtlpDynamicLookasideInitialize @ 0x1401B7CD8 (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePoolHeapManagement()
{
  unsigned int v0; // ecx
  bool v1; // cc
  int v2; // ecx
  unsigned int v3; // esi
  __int128 v4; // xmm6
  __int64 v5; // rdx
  _QWORD *v6; // r14
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF

  v0 = ExpHeapBackedPoolEnabledState;
  if ( (KvfFeatureStates[0] & 1) != 0 )
  {
    if ( !ExpHeapBackedPoolEnabledState )
    {
      v0 = 3;
      ExpHeapBackedPoolEnabledState = 3;
    }
    v1 = v0 <= 3;
  }
  else
  {
    v1 = (unsigned int)(ExpHeapBackedPoolEnabledState - 1) <= 2;
  }
  if ( !v1 )
  {
    v0 = 3;
    ExpHeapBackedPoolEnabledState = 3;
  }
  if ( v0 >= 2 )
  {
    v2 = RtlHpKInitializeHeapManager();
    if ( v2 >= 0 )
    {
      RtlpHpLfhPerfFlags = 1279;
      ExpDetermineLargePagePolicy(&v15);
      v3 = 0;
      if ( dword_1404444C8 )
      {
        v4 = v15;
        while ( 1 )
        {
          v5 = 0LL;
          v6 = (_QWORD *)((char *)&unk_140444500 + 8384 * v3);
          v13 = 0x103uLL;
          if ( *((_QWORD *)&v15 + 1) )
            v5 = 0x4000000LL;
          BYTE2(v13) = v3;
          v14 = v13;
          v2 = ExCreateHeap(&v14, v5, &v17);
          if ( v2 < 0 )
            break;
          v7 = *((_QWORD *)&v15 + 1) == 0LL;
          v8 = v17;
          v6[1] = v17;
          if ( !v7 )
          {
            v9 = v16;
            *(_OWORD *)(v8 + 192) = v4;
            *(_QWORD *)(v8 + 208) = v9;
            *(_BYTE *)(v8 + 269) = *(_BYTE *)(v8 + 269) & 0xF8 | 1;
            *(_BYTE *)(v8 + 461) = *(_BYTE *)(v8 + 461) & 0xF8 | 1;
          }
          RtlpDynamicLookasideInitialize(v6 + 528);
          *(_QWORD *)(v8 + 40) = v6 + 528;
          v14 = v13;
          v2 = ExCreateHeap(&v14, 0x40000000LL, &v17);
          if ( v2 < 0 )
            break;
          ++v3;
          *v6 = v17;
          if ( v3 >= dword_1404444C8 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        v14 = 0x103uLL;
        v2 = ExCreateHeap(&v14, 0LL, &v17);
        if ( v2 >= 0 )
        {
          v10 = v17;
          v14 = 0x103uLL;
          *(_DWORD *)(v17 + 816) |= 2u;
          *(_BYTE *)(v10 + 269) |= 8u;
          *(_BYTE *)(v10 + 461) |= 8u;
          qword_1404C7508 = v10;
          v2 = ExCreateHeap(&v14, 0x40000000LL, &v17);
          if ( v2 >= 0 )
          {
            v11 = v17;
            *(_DWORD *)(v17 + 816) |= 2u;
            *(_BYTE *)(v11 + 269) |= 8u;
            *(_BYTE *)(v11 + 461) |= 8u;
            qword_1404C7500[0] = v11;
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v2;
}
