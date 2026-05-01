/*
 * XREFs of ?ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z @ 0x180314498
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180322D74 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18030FA24 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShouldShowEmojiTipsOnHotKey(
        TouchKeyboardExperienceManager *this,
        bool *a2)
{
  int v3; // eax
  void *v4; // rcx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  pv = this;
  *a2 = 0;
  TouchKeyboardExperienceManager::GetForegroundAppId((__int64)this, &pv);
  v3 = _o__wcsicmp(L"Chrome", pv);
  v4 = pv;
  *a2 = v3 == 0;
  if ( v4 )
    CoTaskMemFree(v4);
  return 0LL;
}
