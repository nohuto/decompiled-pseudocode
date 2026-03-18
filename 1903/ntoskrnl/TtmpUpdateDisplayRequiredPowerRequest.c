/*
 * XREFs of TtmpUpdateDisplayRequiredPowerRequest @ 0x1408BF260
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408BD824 (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     TtmpFindPowerRequestEntryById @ 0x1408BE794 (TtmpFindPowerRequestEntryById.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408BF074 (TtmpSetDisplayRequestEnded.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408BF3E8 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredPowerRequestUpdated @ 0x1408C2CA0 (TtmiLogSessionDisplayRequiredPowerRequestUpdated.c)
 */

__int64 __fastcall TtmpUpdateDisplayRequiredPowerRequest(unsigned int *a1, unsigned int a2, char a3)
{
  char v6; // bl
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( TtmpFindPowerRequestEntryById((__int64)a1, a2, &v12) )
  {
    v7 = v12;
    v8 = *(_DWORD *)(v12 + 40);
    if ( a3 )
    {
      if ( v8 == -1 )
      {
LABEL_4:
        TtmiLogError("TtmpUpdateDisplayRequiredPowerRequest");
        goto LABEL_11;
      }
      v9 = v8 + 1;
      *(_DWORD *)(v12 + 40) = v9;
      if ( v9 == 1 )
        TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, 0LL);
    }
    else
    {
      if ( !v8 )
        goto LABEL_4;
      v10 = v8 - 1;
      *(_DWORD *)(v12 + 40) = v10;
      if ( !v10 )
      {
        TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, 0LL);
        TtmpSetDisplayRequestEnded((__int64)a1, a2);
      }
    }
    v6 = 1;
  }
LABEL_11:
  LOBYTE(v7) = v6;
  return TtmiLogSessionDisplayRequiredPowerRequestUpdated(*a1, a2, v7);
}
