/*
 * XREFs of ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800A4E94
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180096CB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x1800A4F20 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800A52D4 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrames(CPartitionVerticalBlankScheduler *this, bool a2)
{
  unsigned int v4; // edi
  unsigned int FirstOutstandingFrameIndex; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  bool v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  FirstOutstandingFrameIndex = CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this);
  if ( FirstOutstandingFrameIndex != -1 )
  {
    while ( 1 )
    {
      v6 = CPartitionVerticalBlankScheduler::RetireFrame(
             this,
             (CPartitionVerticalBlankScheduler *)((char *)this + 1608 * FirstOutstandingFrameIndex + 152),
             FirstOutstandingFrameIndex,
             &v9,
             a2);
      v4 = v6;
      if ( v6 < 0 )
        break;
      FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
      if ( !v9 || FirstOutstandingFrameIndex == *((_DWORD *)this + 6470) )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6D9u, 0LL);
  }
  return v4;
}
