/*
 * XREFs of ndisUpdateMiniportPortStates @ 0x1C003E658
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisFindPortByPortNumber @ 0x1C003DA68 (ndisFindPortByPortNumber.c)
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
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_q(0x2Au, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
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
        a1[836] = *(_DWORD *)(v4 + 28);
        a1[837] = *(_DWORD *)(v4 + 32);
        a1[838] = *(_DWORD *)(v4 + 36);
        a1[839] = *(_DWORD *)(v4 + 40);
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qD(0x2Bu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v5);
  return v5;
}
