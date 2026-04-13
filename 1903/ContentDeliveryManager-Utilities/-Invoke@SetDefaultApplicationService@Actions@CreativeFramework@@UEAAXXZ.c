/*
 * XREFs of ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008A290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::SetDefaultApplicationService::Invoke(
        CreativeFramework::Actions::SetDefaultApplicationService *this)
{
  const WCHAR *v1; // rdx
  char *v3; // rcx

  v1 = (const WCHAR *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v1 = *(const WCHAR **)v1;
  v3 = (char *)this + 8;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  CreativeFramework::Actions::SetDefaultApplication((const WCHAR *)v3, v1, *((_DWORD *)this + 26));
}
