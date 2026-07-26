/*
 * XREFs of ndisSetRemoveWakeUpPattern @ 0x1C00771FC
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C0074AA0 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rsi
  unsigned int v4; // r8d
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r9d

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      41,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1);
  }
  v4 = *(_DWORD *)(a1 + 48);
  v5 = 24;
  *v2 = 1;
  if ( v4 >= 0x18 )
  {
    v6 = *(_DWORD **)(a1 + 40);
    v7 = 0;
    LODWORD(a2) = v6[2];
    if ( !(_DWORD)a2
      || (v8 = (_DWORD)a2 + 24, (unsigned int)((_DWORD)a2 + 24) < 0x18)
      || (LODWORD(a2) = v6[3], (unsigned int)a2 < v8)
      || (v5 = (_DWORD)a2 + v6[4], v5 < (unsigned int)a2) )
    {
      v7 = -1073676267;
      goto LABEL_13;
    }
    if ( v4 >= v5 )
    {
      *v2 = 0;
      goto LABEL_13;
    }
  }
  *(_DWORD *)(a1 + 56) = v5;
  v7 = -1073676268;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(a2) = 2;
  WPP_RECORDER_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    (int)a2,
    11,
    42,
    (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
    a1);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      43,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1);
  }
  return v7;
}
