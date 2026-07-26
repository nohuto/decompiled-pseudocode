/*
 * XREFs of ndisInitializeAdapter @ 0x1C002CA48
 * Callers:
 *     ndisPnPStartDevice @ 0x1C002D22C (ndisPnPStartDevice.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     WPP_RECORDER_SF_qZddD @ 0x1C002CFE0 (WPP_RECORDER_SF_qZddD.c)
 *     ndisCloseULongRef @ 0x1C0094C78 (ndisCloseULongRef.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C0099EF0 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 */

__int64 __fastcall ndisInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // edx
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      35,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      v15);
  }
  ndisReferencePackage((__int64)&dword_1C00E50C0);
  v14 = a4;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(a1, v5, *(_QWORD *)(v5 + 4000));
  v11 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  *(_DWORD *)(v5 + 1624) = v11;
  if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", *(_QWORD *)(v5 + 3856), (unsigned int)v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZddD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      v9,
      v10,
      v14,
      v5,
      *(_QWORD *)(v5 + 3856),
      *(_BYTE *)(v5 + 32),
      *(_BYTE *)(v5 + 33),
      v8);
  if ( v8 )
  {
    ndisCloseULongRef((PKSPIN_LOCK)(v5 + 4432));
    ndisMCleanupMiniportBlockOnStop(v5);
  }
  else
  {
    ndisLogMiniportEvent(v5, 0x33u);
  }
  MmUnlockPagableImageSection(qword_1C00E50D0);
  _InterlockedDecrement(&dword_1C00E50C0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      13,
      37,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      v5);
  }
  return v8;
}
