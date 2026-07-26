/*
 * XREFs of ndisInitializeAdapter @ 0x1C00BC300
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00BC164 (ndisPnPStartDevice.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qZddD @ 0x1C0051A50 (WPP_SF_qZddD.c)
 *     ndisCloseULongRef @ 0x1C005FA08 (ndisCloseULongRef.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00F01D8 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 */

__int64 __fastcall ndisInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // rsi^4
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v4 = HIDWORD(a4);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x19u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a2);
  ndisReferencePackage((__int64)&dword_1C009F0B0);
  HIDWORD(v11) = v4;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(a1, a2, *(_QWORD *)(a2 + 4032));
  v9 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  *(_DWORD *)(a2 + 1624) = v9;
  if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", *(_QWORD *)(a2 + 3888), (unsigned int)v9);
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
  {
    LODWORD(v11) = *(unsigned __int8 *)(a2 + 32);
    WPP_SF_qZddD(
      *(unsigned __int8 *)(a2 + 32),
      v9,
      a2,
      *(const wchar_t **)(a2 + 3888),
      v11,
      *(unsigned __int8 *)(a2 + 33),
      v8);
  }
  if ( v8 )
  {
    ndisCloseULongRef((PKSPIN_LOCK)(a2 + 4472));
    ndisMCleanupMiniportBlockOnStop(a2);
  }
  else
  {
    ndisLogMiniportEvent(a2, 0x33u);
  }
  MmUnlockPagableImageSection(qword_1C009F0C0);
  _InterlockedDecrement(&dword_1C009F0B0);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x1Bu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a2);
  return v8;
}
