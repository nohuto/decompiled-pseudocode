/*
 * XREFs of ?GetHideOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_HIDE_OPTIONS@@@Z @ 0x180086FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetHideOptions(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_HIDE_OPTIONS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 22);
  return 0LL;
}
