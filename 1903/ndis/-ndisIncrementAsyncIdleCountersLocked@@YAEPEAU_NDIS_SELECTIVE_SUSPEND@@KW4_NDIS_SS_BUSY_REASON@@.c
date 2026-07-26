/*
 * XREFs of ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00B57D0
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B62D0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B68D8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ndisSSInvalidateOidCache @ 0x1C00B9060 (ndisSSInvalidateOidCache.c)
 */

unsigned __int8 __fastcall ndisIncrementAsyncIdleCountersLocked(
        struct _NDIS_SELECTIVE_SUSPEND *a1,
        __int64 a2,
        enum _NDIS_SS_BUSY_REASON a3,
        __int64 a4)
{
  int v4; // r8d
  __int64 v5; // r8
  int v6; // r8d
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // rcx
  int v14; // r10d

  LOBYTE(a4) = 1;
  v4 = a3 - 49;
  if ( !v4 )
  {
    a1->PendingControlOps.Value |= 0x10u;
    return a4;
  }
  v5 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v5 )
  {
    a1->IdleTickCount = 0;
    ndisSSInvalidateOidCache(a1, a2, v5, a4);
    *(_DWORD *)(v13 + 528) += v14;
    return a4;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    if ( !(_DWORD)v7 )
    {
      a1->IdleTickCount = 0;
      ndisSSInvalidateOidCache(a1, a2, v7, a4);
      *(_DWORD *)(v11 + 520) += v12;
      return a4;
    }
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        a1->IdleTickCount = 0;
        ndisSSInvalidateOidCache(a1, a2, v8, a4);
        *(_DWORD *)(v9 + 576) += v10;
        return a4;
      }
    }
    else if ( a1->PendingSendNblCount )
    {
      a1->PendingCancelSendCount += a2;
      return a4;
    }
  }
  else if ( a1->PendingDirectOidCount )
  {
    a1->PendingCancelDirectOidCount += a2;
    return a4;
  }
  LOBYTE(a4) = 0;
  return a4;
}
