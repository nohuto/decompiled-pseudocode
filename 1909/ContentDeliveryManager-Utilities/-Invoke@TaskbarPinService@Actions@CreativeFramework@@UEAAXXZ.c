/*
 * XREFs of ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008FA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::TaskbarPinService::Invoke(
        CreativeFramework::Actions::TaskbarPinService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  const WCHAR *v4; // rax
  const WCHAR *v5; // rdx
  const WCHAR *v6; // rax

  if ( *((_QWORD *)this + 11) )
  {
    v4 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    LOBYTE(a4) = *((_BYTE *)this + 104);
    CreativeFramework::Actions::PinApp(v4, a2, (__int64)a3, a4);
  }
  else
  {
    v5 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    v6 = (const WCHAR *)((char *)this + 8);
    if ( *((_QWORD *)this + 4) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    LOBYTE(a3) = *((_BYTE *)this + 104);
    CreativeFramework::Actions::PinPackagedAppToTaskbar(v6, v5, a3);
  }
}
