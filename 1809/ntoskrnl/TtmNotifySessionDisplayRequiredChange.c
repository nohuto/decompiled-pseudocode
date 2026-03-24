/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x14087FC80
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x1406DBEA0 (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     PoSessionEngagementUpdate @ 0x1402E70D4 (PoSessionEngagementUpdate.c)
 *     TtmpAcquireSessionById @ 0x140761674 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408814D0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140884CD8 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140884E5C (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  int v13; // eax
  bool v14; // cl
  __int64 v15; // rcx
  int v16; // edx
  bool v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v6 = TtmpAcquireSessionById(&v20, a1);
  v8 = v20;
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = v6;
    v11 = 3790;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v11, v10, -1);
    goto LABEL_13;
  }
  LOBYTE(v7) = a3;
  TtmpUpdateDisplayRequiredPowerRequest(v20, a2, v7);
  v12 = *(_DWORD *)(v8 + 20);
  if ( a3 )
  {
    if ( v12 == -1 )
    {
      v9 = -1073741675;
      v11 = 3842;
      v10 = -1073741675;
      goto LABEL_3;
    }
    v13 = v12 + 1;
    v14 = v13 == 1;
  }
  else
  {
    if ( !v12 )
    {
      v9 = -1073741811;
      v11 = 3822;
      v10 = -1073741811;
      goto LABEL_3;
    }
    v13 = v12 - 1;
    v14 = v13 == 0;
  }
  *(_DWORD *)(v8 + 20) = v13;
  v9 = 0;
  if ( v14 )
  {
    v19 = v13 != 0;
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v19, 1LL);
    LOBYTE(v15) = v19;
    PoSessionEngagementUpdate(v15, v16);
  }
LABEL_13:
  if ( v8 )
  {
    v5 = *(_DWORD *)(v8 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(a1, v5, v9);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v5, v9);
}
