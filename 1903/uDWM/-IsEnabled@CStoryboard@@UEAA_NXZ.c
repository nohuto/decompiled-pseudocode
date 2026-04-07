/*
 * XREFs of ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x18003B510
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800273D4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

char __fastcall CStoryboard::IsEnabled(CStoryboard *this)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = 0;
  v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  v3 = *(_QWORD *)(v2 + 496);
  if ( !v3 || !*(_BYTE *)(v3 + 328) )
  {
    v4 = *(_QWORD *)(v2 + 520);
    if ( (!v4 || *(_DWORD *)(v4 + 72) != 65 || !*(_BYTE *)(v4 + 68))
      && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
      && !(unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    {
      return 1;
    }
  }
  return v1;
}
