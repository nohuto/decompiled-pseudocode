/*
 * XREFs of wil::details::ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___::_ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___ @ 0x18040A824
 * Callers:
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$2 @ 0x18040C619 (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_4cd311c558c75f42f66c9a2141adb89d_::operator() @ 0x18040A8F4 (_lambda_4cd311c558c75f42f66c9a2141adb89d_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___::_ScopeExitFn__lambda_4cd311c558c75f42f66c9a2141adb89d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_4cd311c558c75f42f66c9a2141adb89d_::operator()();
  }
  return result;
}
