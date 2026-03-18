/*
 * XREFs of ?UpdatePresentCounts@CScheduleFrameInfoVolatileData@@QEAAXAEBVCComposition@@@Z @ 0x1800C7EE4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x1800C7FCC (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0qN16 @ 0x180151744 (McTemplateU0qN16.c)
 */

void __fastcall CScheduleFrameInfoVolatileData::UpdatePresentCounts(
        CScheduleFrameInfoVolatileData *this,
        const struct CComposition *a2)
{
  CRenderTargetManager *v4; // rcx
  unsigned int *v5; // rbx
  int LastPresentCount; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r9d
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
  v4 = (CRenderTargetManager *)*((_QWORD *)a2 + 8);
  v5 = (unsigned int *)((char *)this + 32);
  v12 = 16;
  LastPresentCount = CRenderTargetManager::GetLastPresentCount(v4, &v12, v5);
  v10 = LastPresentCount;
  if ( LastPresentCount < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18024C878, 1u, LastPresentCount, 0xC5Du);
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_18024C878, 1u, v10, 0x56u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qN16(v8, v7, v12, v9, (__int64)v5);
}
