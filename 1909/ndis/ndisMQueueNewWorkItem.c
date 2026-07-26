/*
 * XREFs of ndisMQueueNewWorkItem @ 0x1C009B654
 * Callers:
 *     NdisIMQueueMiniportCallback @ 0x1C0098080 (NdisIMQueueMiniportCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C001BBB4 (WPP_RECORDER_SF_qLq.c)
 */

__int64 __fastcall ndisMQueueNewWorkItem(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *PoolWithTag; // rax
  int v8; // edx
  _QWORD *v9; // rbx
  unsigned int v10; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      53,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      a3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (((unsigned __int128)-(__int128)a4 >> 64) & 8) + 24, 0x6977444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a3;
    *((_DWORD *)PoolWithTag + 2) = 6;
    if ( a4 )
      PoolWithTag[3] = a4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        0xCu,
        0x37u,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)PoolWithTag,
        6,
        a3);
    *v9 = *(_QWORD *)(a1 + 872);
    *(_QWORD *)(a1 + 872) = v9;
    v10 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        12,
        54,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a1);
    }
    v10 = -1073741823;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x48000) == 0x8000 && !v10 )
    KeInsertQueueDpc((PRKDPC)(a1 + 1528), 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      56,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      a3);
  return v10;
}
