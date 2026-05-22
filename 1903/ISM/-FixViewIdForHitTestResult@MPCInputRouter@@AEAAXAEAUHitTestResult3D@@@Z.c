/*
 * XREFs of ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180053BA0
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800542F0 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005893C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 */

void __fastcall MPCInputRouter::FixViewIdForHitTestResult(MPCInputRouter *this, struct HitTestResult3D *a2)
{
  __int64 v2; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  LPARAM lParam; // [rsp+30h] [rbp+8h] BYREF

  lParam = (LPARAM)this;
  v2 = *((unsigned int *)a2 + 71);
  if ( !(_DWORD)v2 || v2 == *((_QWORD *)a2 + 5) )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, *((_QWORD *)a2 + 5));
    *((_DWORD *)a2 + 71) = ViewIdFromWindowId;
    if ( !ViewIdFromWindowId )
    {
      LODWORD(lParam) = 0;
      EnumChildWindows(
        (HWND)*((int *)a2 + 10),
        (WNDENUMPROC)lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_,
        (LPARAM)&lParam);
      *((_DWORD *)a2 + 71) = lParam;
    }
  }
}
