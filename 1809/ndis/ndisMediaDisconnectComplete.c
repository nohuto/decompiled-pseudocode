/*
 * XREFs of ndisMediaDisconnectComplete @ 0x1C0069950
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisMediaDisconnectComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // al
  KIRQL v6; // si
  int v7; // ecx

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x11u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 96));
  v6 = v5;
  *(_QWORD *)(a4 + 520) = KeGetCurrentThread();
  v7 = *(_DWORD *)(a4 + 124);
  *(_DWORD *)(a4 + 1864) = 1704369;
  if ( (v7 & 0x200) != 0 )
  {
    *(_QWORD *)(a4 + 520) = 0LL;
    *(_DWORD *)(a4 + 1864) = 0;
    *(_DWORD *)(a4 + 124) = v7 & 0xFFFFFDFF;
    KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 96), v5);
    if ( (*(_DWORD *)(a4 + 124) & 0x800) == 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(0x13u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
      ndisRequestDevicePowerD0(a4, 9u);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x12u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
    *(_QWORD *)(a4 + 520) = 0LL;
    *(_DWORD *)(a4 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 96), v6);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x14u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
}
