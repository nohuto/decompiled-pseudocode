/*
 * XREFs of ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18008BE9C
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x18008C674 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::GetDisplay(__int64 a1, __int64 a2, _QWORD *a3)
{
  int DisplayIndexFromDisplayId; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  void (__fastcall ***v8)(_QWORD); // rcx
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  DisplayIndexFromDisplayId = CDisplaySet::GetDisplayIndexFromDisplayId(a1, a2, &v10);
  v7 = DisplayIndexFromDisplayId;
  if ( DisplayIndexFromDisplayId < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DisplayIndexFromDisplayId, 0x168u);
  }
  else
  {
    v8 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 48) + 8LL * v10);
    *a3 = v8;
    (**v8)(v8);
  }
  return v7;
}
