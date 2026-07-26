/*
 * XREFs of ndisUpdateMiniportPortStates @ 0x1C0062F50
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisFindPortByPortNumber @ 0x1C0062204 (ndisFindPortByPortNumber.c)
 */

__int64 __fastcall ndisUpdateMiniportPortStates(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 *PortByPortNumber; // rax

  v2 = *(_DWORD *)(a2 + 56);
  v4 = *(_QWORD *)(a2 + 48);
  v5 = -1073741811;
  v6 = *(_DWORD *)(a2 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      23,
      42,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1);
  }
  if ( v4 && v2 >= 0x30 && *(_BYTE *)(v4 + 1) && *(_BYTE *)v4 == 0x80 && *(_WORD *)(v4 + 2) >= 0x30u )
  {
    if ( v6 )
    {
      PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, v6);
      if ( PortByPortNumber && *((_DWORD *)PortByPortNumber + 4) == 4 )
      {
        v5 = 0;
        *((_DWORD *)PortByPortNumber + 10) = *(_DWORD *)(v4 + 4);
        PortByPortNumber[6] = *(_QWORD *)(v4 + 8);
        PortByPortNumber[7] = *(_QWORD *)(v4 + 16);
        *((_DWORD *)PortByPortNumber + 16) = *(_DWORD *)(v4 + 24);
        *((_DWORD *)PortByPortNumber + 17) = *(_DWORD *)(v4 + 28);
        *((_DWORD *)PortByPortNumber + 18) = *(_DWORD *)(v4 + 32);
        *((_DWORD *)PortByPortNumber + 19) = *(_DWORD *)(v4 + 36);
        *((_DWORD *)PortByPortNumber + 20) = *(_DWORD *)(v4 + 40);
      }
    }
    else
    {
      v5 = 0;
      if ( (a1[31] & 0x80u) != 0 )
      {
        a1[830] = *(_DWORD *)(v4 + 28);
        a1[831] = *(_DWORD *)(v4 + 32);
        a1[832] = *(_DWORD *)(v4 + 36);
        a1[833] = *(_DWORD *)(v4 + 40);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      23,
      43,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1,
      v5);
  }
  return v5;
}
