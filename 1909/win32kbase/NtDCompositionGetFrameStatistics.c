/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1C000C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1C000C630 (-GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, _OWORD *a2)
{
  signed int FrameStatistics; // ebx
  DirectComposition::CConnection *DefaultConnection; // r14
  __int128 v7; // [rsp+20h] [rbp-48h]
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, 0x28uLL);
  FrameStatistics = a1 == 0 ? 0xC000000D : 0;
  if ( a1 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( !DefaultConnection )
      FrameStatistics = -1073741790;
    if ( FrameStatistics >= 0 )
    {
      FrameStatistics = DirectComposition::CConnection::GetFrameStatistics(
                          DefaultConnection,
                          (struct DCOMPOSITION_FRAME_STATISTICS *)v8);
      v7 = DirectComposition::CConnection::s_capabilityInfo;
      DirectComposition::CConnection::Release(DefaultConnection);
      if ( FrameStatistics >= 0 )
      {
        if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = v8[0];
        *(_OWORD *)(a1 + 16) = v8[1];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v8[2];
        if ( a2 )
        {
          if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a2 = v7;
        }
      }
    }
  }
  return (unsigned int)FrameStatistics;
}
