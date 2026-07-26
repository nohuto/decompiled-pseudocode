/*
 * XREFs of ndisXlateRemovePacketPatternToWolPatternOid @ 0x1C0077DE4
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C0074AA0 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisXlateRemovePacketPatternToWolPatternOid(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  int v6; // edx
  _QWORD *v7; // rsi

  v2 = 0;
  *a2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    *(_DWORD *)v7 = *(_DWORD *)(a1 + 32);
    v7[1] = *(_QWORD *)(a1 + 40);
    *((_DWORD *)v7 + 4) = *(_DWORD *)(a1 + 48);
    *((_DWORD *)v7 + 6) = *(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 32) = -50265845;
    *(_QWORD *)(a1 + 40) = v7 + 3;
    *(_DWORD *)(a1 + 48) = 4;
    *(_QWORD *)(a1 + 144) = v7;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        11,
        113,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1);
    }
    v2 = -1073741670;
    *a2 = 1;
  }
  return v2;
}
