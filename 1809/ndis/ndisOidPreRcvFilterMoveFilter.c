/*
 * XREFs of ndisOidPreRcvFilterMoveFilter @ 0x1C003C460
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003B534 (ndisFindReceiveFilterByFilterId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0070024 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisOidPreRcvFilterMoveFilter(__int64 a1)
{
  __int64 v1; // r8
  char v2; // r14
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r12d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v13; // r15
  __int64 *ReceiveFilterByFilterId; // rax
  __int64 *v15; // r13
  KIRQL v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 1;
  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0x18u )
    {
      if ( v3 )
      {
        if ( ndisIovNicSwitchWithoutIovSupported(v3) && *(_QWORD *)(v3 + 4720) == v7 )
          goto LABEL_13;
        if ( !ndisIovNicSwitchWithoutIovSupported(v6) )
        {
          v10 = *(_QWORD *)(v3 + 4648);
          if ( !v10 || (*(_BYTE *)(v10 + 8) & 3) != 3 || *(_QWORD *)(v3 + 4720) == v9 )
            goto LABEL_13;
        }
        v11 = *(_DWORD *)(v5 + 4);
        if ( !v11 )
          goto LABEL_13;
        OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v8);
        v13 = OidSourceHandle;
        if ( !OidSourceHandle || *OidSourceHandle != 18 )
        {
          *(_DWORD *)(a1 + 40) = -1073741637;
          return v2;
        }
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v3 + 1864) = 2690772;
        ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v3, v11);
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1864) = 0;
        v15 = ReceiveFilterByFilterId;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v16);
        if ( !v15 )
          goto LABEL_13;
        if ( (_BYTE *)v15[8] == v13
          && (v17 = v15[22]) != 0
          && *(_DWORD *)(v5 + 8) == *((_DWORD *)v15 + 36)
          && *(_QWORD *)(v5 + 12) == *(_DWORD *)(v17 + 124)
          && (v18 = *(unsigned int *)(v5 + 20), *(_DWORD *)(v5 + 12) != (_DWORD)v18)
          && ndisIovFindVPortByVPortId(v3, v18) )
        {
          return 0;
        }
        else
        {
LABEL_13:
          *(_DWORD *)(a1 + 40) = -1073741811;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 24;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
