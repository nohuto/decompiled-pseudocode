/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x1408BD0F4
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x140720550 (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PoSessionEngagementUpdate @ 0x14030381C (PoSessionEngagementUpdate.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408BEB30 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x1408C24AC (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x1408C2630 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebp
  bool v6; // si
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  char v13; // al
  int v14; // edx
  char v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v18, a1);
  v9 = v18;
  v10 = v7;
  if ( v7 < 0 )
    goto LABEL_2;
  LOBYTE(v8) = a3;
  TtmpUpdateDisplayRequiredPowerRequest(v18, a2, v8);
  v11 = *(_DWORD *)(v9 + 20);
  if ( a3 )
  {
    if ( v11 == -1 )
    {
      v10 = -1073741675;
      goto LABEL_2;
    }
    v12 = v11 + 1;
    v6 = v12 == 1;
  }
  else
  {
    if ( !v11 )
    {
      v10 = -1073741811;
LABEL_2:
      TtmiLogError("TtmNotifySessionDisplayRequiredChange");
      goto LABEL_14;
    }
    v12 = v11 - 1;
    v6 = v12 == 0;
  }
  v10 = 0;
  *(_DWORD *)(v9 + 20) = v12;
  if ( v6 )
  {
    v13 = v17;
    if ( *(_DWORD *)(v9 + 20) )
      v13 = 1;
    v17 = v13;
  }
LABEL_14:
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v17, 1LL);
    PoSessionEngagementUpdate(v17, v14);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v10);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v10);
}
