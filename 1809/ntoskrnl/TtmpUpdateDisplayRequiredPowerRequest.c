/*
 * XREFs of TtmpUpdateDisplayRequiredPowerRequest @ 0x140882730
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x140880EE0 (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpFindPowerRequestEntryById @ 0x140881BDC (TtmpFindPowerRequestEntryById.c)
 *     TtmpSetDisplayRequestEnded @ 0x14088253C (TtmpSetDisplayRequestEnded.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408828B8 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmiLogSessionDisplayRequiredPowerRequestUpdated @ 0x140885FFC (TtmiLogSessionDisplayRequiredPowerRequestUpdated.c)
 */

__int64 __fastcall TtmpUpdateDisplayRequiredPowerRequest(unsigned int *a1, unsigned int a2, char a3)
{
  char v6; // bl
  __int64 v7; // r8
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( TtmpFindPowerRequestEntryById((__int64)a1, a2, &v14) )
  {
    v7 = v14;
    v8 = *(_DWORD *)(v14 + 40);
    if ( a3 )
    {
      if ( v8 == -1 )
      {
        v9 = 1111;
        v10 = -1073741675;
LABEL_5:
        TtmiLogError("TtmpUpdateDisplayRequiredPowerRequest", v9, v10, -1);
        goto LABEL_13;
      }
      v11 = v8 + 1;
      *(_DWORD *)(v14 + 40) = v11;
      if ( v11 == 1 )
        TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, 0LL);
    }
    else
    {
      if ( !v8 )
      {
        v9 = 1136;
        v10 = -1073741811;
        goto LABEL_5;
      }
      v12 = v8 - 1;
      *(_DWORD *)(v14 + 40) = v12;
      if ( !v12 )
      {
        TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, 0LL);
        TtmpSetDisplayRequestEnded((__int64)a1, a2);
      }
    }
    v6 = 1;
  }
LABEL_13:
  LOBYTE(v7) = v6;
  return TtmiLogSessionDisplayRequiredPowerRequestUpdated(*a1, a2, v7);
}
