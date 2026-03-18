/*
 * XREFs of Bulk_InsertLinkTrb @ 0x1C0034720
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C0036F00 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C002925C (TR_InitializeLinkTrb.c)
 */

char __fastcall Bulk_InsertLinkTrb(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v16 = 0uLL;
  v6 = a2 + 1;
  v7 = (_QWORD *)a2[1];
  if ( v7 == a2 + 1 )
  {
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    return 0;
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 )
      goto LABEL_9;
    v9 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_9;
    *v6 = v9;
    *(_QWORD *)(v9 + 8) = v6;
    v7[1] = v7;
    *v7 = v7;
    TR_InitializeLinkTrb(a1, a3, (__int64)&v16, a4);
    v10 = v7[3];
    v11 = 2LL * *(unsigned int *)(a1 + 192);
    v12 = *(_QWORD *)(a1 + 184);
    HIDWORD(v16) &= ~2u;
    *(_QWORD *)&v16 = v10;
    *(_OWORD *)(v12 + 8 * v11) = v16;
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v13 = (_QWORD *)a2[4];
    v14 = *(_QWORD **)(a1 + 176);
    if ( (_QWORD *)*v13 != a2 + 3 )
LABEL_9:
      __fastfail(3u);
    *v14 = a2 + 3;
    v14[1] = v13;
    *v13 = v14;
    a2[4] = v14;
    *(_QWORD *)(a1 + 176) = v7;
    v15 = v7[2];
    *(_DWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 184) = v15;
    a2[14] = v7;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return 1;
  }
}
