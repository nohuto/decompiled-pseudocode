/*
 * XREFs of PopUserPresencePredictionModeCallback @ 0x14078B780
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400D636C (PopUmpoSendPowerMessage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUserPresencePredictionModeCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_USER_PRESENCE_PREDICTION.Data4 - a1[1];
  v5 = 0;
  if ( v4 || a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock();
  if ( *a2 )
  {
    if ( *a2 != 1 )
      goto LABEL_9;
    dword_140443A80 = 1;
    memset(Src, 0, 0x48uLL);
    Src[2] = 3;
  }
  else
  {
    dword_140443A80 = 0;
    memset(Src, 0, 0x48uLL);
    Src[2] = 2;
  }
  Src[0] = 12;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
LABEL_9:
  PopReleasePolicyLock();
  return v5;
}
