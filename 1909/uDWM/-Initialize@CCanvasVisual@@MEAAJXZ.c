/*
 * XREFs of ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x180037CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180018BB0 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCanvasVisual::Initialize(CCanvasVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  void *v4; // [rsp+28h] [rbp-10h]
  void *v5; // [rsp+28h] [rbp-10h]

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (__int64 *)this + 2);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x4Cu, v4);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x28u, v5);
  }
  return v2;
}
