/*
 * XREFs of ?StartDrag@CMultitaskingViewFrameElement@@UEAA_NW4DragEffects@@PEAUIMultitaskingViewElement@@PEAUIUnknown@@@Z @ 0x18030D180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x18031EEB0 (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 */

char __fastcall CMultitaskingViewFrameElement::StartDrag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 - 132) != 1 )
    return 0;
  v8 = a1 + 168;
  if ( !*(_BYTE *)(a1 + 168) )
    return 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 336));
  Instance = ElementDragData_CreateInstance(*(_QWORD *)(a1 + 248), a1 - 232, a3, a4, v8, a2);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      605LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)Instance);
    return 0;
  }
  return 1;
}
