/*
 * XREFs of ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z @ 0x180149B30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x18014C2A0 (-AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::AddResponseItem(
        CPartitionVerticalBlankScheduler *this,
        struct CResponseItem *a2)
{
  CFrameInfo *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = (CFrameInfo *)*((_QWORD *)this + 3232);
  v3 = -2003292412;
  if ( v2 )
  {
    v4 = CFrameInfo::AddResponse(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x863u);
  }
  return v3;
}
