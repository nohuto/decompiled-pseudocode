/*
 * XREFs of KiRemoveTimer2 @ 0x1400FB710
 * Callers:
 *     KeCancelTimer2 @ 0x1400FAF50 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400FB134 (KeDisableTimer2.c)
 *     KiTimer2Expiration @ 0x1400FB3D0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400FC4A0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAdjustTimer2DueTimes @ 0x14016FE14 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400BDDD0 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v1; // esi
  _BYTE *v2; // r14
  __int64 v3; // r9
  __int64 v4; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r8
  bool v15; // cf
  volatile signed __int32 *v16; // rcx
  int v19; // [rsp+68h] [rbp+10h]

  v1 = 0;
  v2 = (_BYTE *)(a1 + 130);
  v3 = a1;
  v4 = 72LL;
  v19 = 0;
  v5 = 0LL;
  do
  {
    LOBYTE(v6) = *v2;
    if ( (*v2 & 0x10) != 0 )
      goto LABEL_17;
    v7 = 0x140000000LL + 24 * (v6 & 3) + 4332896;
    v8 = v3 + 24 * (v1 + 1LL);
    v9 = *(_QWORD *)(0x140000008LL + 24 * (v6 & 3) + 4332896);
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
        v10 = 0LL;
      else
        v10 = v9 ^ (v7 | 1);
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 8);
    }
    LOBYTE(v6) = RtlRbRemoveNode(v7, v3 + 24 * (v1 + 1LL));
    if ( v10 == v8 )
    {
      v11 = *(_QWORD *)(v7 + 8);
      v19 = 1;
      if ( (v11 & 1) != 0 )
      {
        if ( v11 == 1 )
          goto LABEL_15;
        v6 = v11 ^ (v7 | 1);
      }
      else
      {
        v6 = *(_QWORD *)(v7 + 8);
      }
      if ( !v6 )
      {
LABEL_15:
        *(_QWORD *)(v7 + 16) = -1LL;
        goto LABEL_16;
      }
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 - v5 + v6 - 24);
    }
LABEL_16:
    v3 = a1;
LABEL_17:
    ++v1;
    v4 += 8LL;
    ++v2;
    v5 += 24LL;
  }
  while ( v1 < 2 );
  if ( v19 )
  {
    v6 = *(_QWORD *)(v3 + 72);
    if ( KiNextTimer2DueTime == v6 )
    {
      v12 = -1LL;
      v13 = qword_140421D70;
      v14 = 4LL;
      do
      {
        v6 = v12;
        v12 = *v13;
        v15 = *v13 < v6;
        v13 += 3;
        if ( !v15 )
          v12 = v6;
        --v14;
      }
      while ( v14 );
      KiNextTimer2DueTime = v12;
    }
  }
  if ( (*(_BYTE *)(v3 + 129) & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    v6 = KiProcessorBlock[KiClockTimerOwner];
    v16 = *(volatile signed __int32 **)(v6 + 25016);
    if ( v16 )
    {
      LOBYTE(v6) = KiVelocityFlags;
      if ( (KiVelocityFlags & 0x40) != 0 )
        _InterlockedAnd(v16, 0xFFF7FFFF);
    }
  }
  return v6;
}
