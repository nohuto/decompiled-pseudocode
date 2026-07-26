/*
 * XREFs of ndisOidPostRcvFilterMoveFilter @ 0x1C003B980
 * Callers:
 *     <none>
 * Callees:
 *     ndisFindReceiveFilterByFilterId @ 0x1C003B534 (ndisFindReceiveFilterByFilterId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0070024 (ndisIovFindVPortByVPortId.c)
 */

void __fastcall ndisOidPostRcvFilterMoveFilter(__int64 a1)
{
  __int64 v1; // rbp
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 *ReceiveFilterByFilterId; // rax
  __int64 *v8; // r15
  KIRQL v9; // r10
  __int64 v10; // rbx
  __int64 VPortByVPortId; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(v1 + 120) & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v4 + 48) >= 8u )
      {
        v5 = *(_QWORD *)(v4 + 40);
        v6 = *(_DWORD *)(v5 + 4);
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 1864) = 2690869;
        ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v1, v6);
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1864) = 0;
        v8 = ReceiveFilterByFilterId;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
        v10 = v8[22];
        VPortByVPortId = ndisIovFindVPortByVPortId(v1, *(unsigned int *)(v5 + 20));
        v12 = v8 + 4;
        v13 = v8[4];
        if ( *(__int64 **)(v13 + 8) != v8 + 4 )
          goto LABEL_17;
        v14 = (__int64 *)v8[5];
        if ( (_QWORD *)*v14 != v12 )
          goto LABEL_17;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*(_DWORD *)(v10 + 864);
        v15 = *(_QWORD *)(v10 + 88);
        if ( *(_DWORD *)(v10 + 124) )
          --*(_DWORD *)(v15 + 656);
        else
          --*(_DWORD *)(v15 + 652);
        v16 = (_QWORD *)(VPortByVPortId + 872);
        v17 = *(_QWORD *)(VPortByVPortId + 872);
        if ( *(_QWORD *)(v17 + 8) != VPortByVPortId + 872 )
LABEL_17:
          __fastfail(3u);
        *v12 = v17;
        v8[5] = (__int64)v16;
        *(_QWORD *)(v17 + 8) = v12;
        *v16 = v12;
        ++*(_DWORD *)(VPortByVPortId + 864);
        v18 = *(_QWORD *)(VPortByVPortId + 88);
        if ( *(_DWORD *)(VPortByVPortId + 124) )
          ++*(_DWORD *)(v18 + 656);
        else
          ++*(_DWORD *)(v18 + 652);
        v8[22] = VPortByVPortId;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
}
