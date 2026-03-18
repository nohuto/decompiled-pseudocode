/*
 * XREFs of ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x18018A470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x18018A254 (--1DiagnosticCallbacksManager@@EEAA@XZ.c)
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
