/*
 * XREFs of wil::details::ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___::_ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___ @ 0x180385674
 * Callers:
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$2 @ 0x180387430 (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_f76058b0ad220b64be2731f8c298d5bb_::operator() @ 0x180385798 (_lambda_f76058b0ad220b64be2731f8c298d5bb_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___::_ScopeExitFn__lambda_f76058b0ad220b64be2731f8c298d5bb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_f76058b0ad220b64be2731f8c298d5bb_::operator()();
  }
  return result;
}
