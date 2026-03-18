/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C0228108
 * Callers:
 *     GetActiveTrackPwnd @ 0x1C01CED34 (GetActiveTrackPwnd.c)
 *     DWP_GetEnabledPopupOffset @ 0x1C02281B0 (DWP_GetEnabledPopupOffset.c)
 *     xxxActivateEnabledPopup @ 0x1C02281EC (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C02282F8 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C001C6D0 (_GhostWindowFromHungWindow.c)
 */

_QWORD *__fastcall DWP_GetEnabledPopup(_QWORD *a1)
{
  _QWORD *v1; // rbx
  int v2; // r8d
  _QWORD *i; // rax
  __int64 v4; // rax

  v1 = (_QWORD *)a1[8];
  v2 = 0;
  while ( v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(v1[2] + 432LL) == *(_QWORD *)(a1[2] + 432LL) && (*(_BYTE *)(v1[5] + 31LL) & 0x18) == 0x10 )
      {
        for ( i = (_QWORD *)v1[12]; i; i = (_QWORD *)i[12] )
        {
          if ( i == a1 )
            goto LABEL_14;
        }
      }
      v1 = (_QWORD *)v1[8];
    }
    else
    {
      if ( v2 )
        return 0LL;
      v2 = 1;
      v1 = *(_QWORD **)(a1[10] + 88LL);
    }
  }
  v1 = 0LL;
LABEL_14:
  if ( v1 )
  {
    v4 = GhostWindowFromHungWindow((__int64)v1);
    if ( v4 )
      return (_QWORD *)v4;
  }
  return v1;
}
