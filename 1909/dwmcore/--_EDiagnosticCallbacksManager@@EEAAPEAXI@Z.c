/*
 * XREFs of ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x180188D90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x180188B74 (--1DiagnosticCallbacksManager@@EEAA@XZ.c)
 */

DiagnosticCallbacksManager *__fastcall DiagnosticCallbacksManager::`vector deleting destructor'(
        DiagnosticCallbacksManager *this,
        char a2)
{
  DiagnosticCallbacksManager::~DiagnosticCallbacksManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
