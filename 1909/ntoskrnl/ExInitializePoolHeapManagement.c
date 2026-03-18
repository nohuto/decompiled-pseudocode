/*
 * XREFs of ExInitializePoolHeapManagement @ 0x140195F48
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     ExCreateHeap @ 0x14017A09C (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x14019629C (RtlpDynamicLookasideInitialize.c)
 *     ExpDetermineLargePagePolicy @ 0x140196310 (ExpDetermineLargePagePolicy.c)
 *     RtlHpKInitializeHeapManager @ 0x1401963AC (RtlHpKInitializeHeapManager.c)
 */

__int64 ExInitializePoolHeapManagement()
{
  int v0; // ecx
  unsigned int v1; // esi
  __int128 v2; // xmm6
  __int64 v3; // rdx
  _QWORD *v4; // r14
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF

  v13 = 0uLL;
  v14 = 0LL;
  v0 = RtlHpKInitializeHeapManager();
  if ( v0 >= 0 )
  {
    RtlpHpLfhPerfFlags = 1279;
    ExpDetermineLargePagePolicy(&v13);
    v1 = 0;
    if ( dword_14046F750 )
    {
      v2 = v13;
      while ( 1 )
      {
        v3 = 0LL;
        v4 = (_QWORD *)((char *)&unk_14046F780 + 8384 * v1);
        v11 = 0x103uLL;
        if ( *((_QWORD *)&v13 + 1) )
          v3 = 0x4000000LL;
        BYTE2(v11) = v1;
        v12 = v11;
        v0 = ExCreateHeap(&v12, v3, &v15);
        if ( v0 < 0 )
          break;
        v5 = *((_QWORD *)&v13 + 1) == 0LL;
        v6 = v15;
        v4[1] = v15;
        if ( !v5 )
        {
          v7 = v14;
          *(_OWORD *)(v6 + 192) = v2;
          *(_QWORD *)(v6 + 208) = v7;
          *(_BYTE *)(v6 + 269) = *(_BYTE *)(v6 + 269) & 0xF8 | 1;
          *(_BYTE *)(v6 + 461) = *(_BYTE *)(v6 + 461) & 0xF8 | 1;
        }
        RtlpDynamicLookasideInitialize(v4 + 528);
        *(_QWORD *)(v6 + 40) = v4 + 528;
        v12 = v11;
        v0 = ExCreateHeap(&v12, 0x40000000LL, &v15);
        if ( v0 < 0 )
          break;
        ++v1;
        *v4 = v15;
        if ( v1 >= dword_14046F750 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v12 = 0x103uLL;
      v0 = ExCreateHeap(&v12, 0LL, &v15);
      if ( v0 >= 0 )
      {
        v8 = v15;
        v12 = 0x103uLL;
        *(_DWORD *)(v15 + 816) |= 2u;
        *(_BYTE *)(v8 + 269) |= 8u;
        *(_BYTE *)(v8 + 461) |= 8u;
        qword_1404F2788 = v8;
        v0 = ExCreateHeap(&v12, 0x40000000LL, &v15);
        if ( v0 >= 0 )
        {
          v9 = v15;
          *(_DWORD *)(v15 + 816) |= 2u;
          *(_BYTE *)(v9 + 269) |= 8u;
          *(_BYTE *)(v9 + 461) |= 8u;
          qword_1404F2780[0] = v9;
        }
      }
    }
  }
  return (unsigned int)v0;
}
