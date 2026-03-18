/*
 * XREFs of ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008164C
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800CC9D0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x1800C8C68 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrames(CPartitionVerticalBlankScheduler *this, bool a2)
{
  unsigned int v4; // edi
  unsigned int FirstOutstandingFrameIndex; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  bool v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  FirstOutstandingFrameIndex = CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this);
  if ( FirstOutstandingFrameIndex != -1 )
  {
    while ( 1 )
    {
      v6 = CPartitionVerticalBlankScheduler::RetireFrame(
             this,
             (CPartitionVerticalBlankScheduler *)((char *)this + 1608 * FirstOutstandingFrameIndex + 112),
             FirstOutstandingFrameIndex,
             &v9,
             a2);
      v4 = v6;
      if ( v6 < 0 )
        break;
      FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
      if ( !v9 || FirstOutstandingFrameIndex == *((_DWORD *)this + 6460) )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6E1u);
  }
  return v4;
}
