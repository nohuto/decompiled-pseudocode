/*
 * XREFs of ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800D35A8
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x180042D74 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::GetDisplay(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed int DisplayIndexFromDisplayId; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  void (__fastcall ***v8)(_QWORD); // rcx
  unsigned int v10; // [rsp+58h] [rbp+20h]

  DisplayIndexFromDisplayId = CDisplaySet::GetDisplayIndexFromDisplayId(a1);
  v7 = DisplayIndexFromDisplayId;
  if ( DisplayIndexFromDisplayId < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DisplayIndexFromDisplayId, 0x15Bu, 0LL);
  }
  else
  {
    v8 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 48) + 8LL * v10);
    *a3 = v8;
    (**v8)(v8);
  }
  return v7;
}
