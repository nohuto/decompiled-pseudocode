/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C015A578
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C015A4AC (xxxActivateEnabledPopup.c)
 *     GetActiveTrackPwnd @ 0x1C01E3484 (GetActiveTrackPwnd.c)
 *     DWP_GetEnabledPopupOffset @ 0x1C023FFF0 (DWP_GetEnabledPopupOffset.c)
 *     xxxFlashEnabledPopup @ 0x1C0240090 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C0035084 (_GhostWindowFromHungWindow.c)
 */

_QWORD *__fastcall DWP_GetEnabledPopup(_QWORD *a1)
{
  _QWORD *v1; // rbx
  int v2; // r8d
  _QWORD *i; // rax
  __int64 v4; // rax

  v1 = (_QWORD *)a1[11];
  v2 = 0;
  while ( v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(v1[2] + 424LL) == *(_QWORD *)(a1[2] + 424LL) && (*(_BYTE *)(v1[5] + 31LL) & 0x18) == 0x10 )
      {
        for ( i = (_QWORD *)v1[15]; i; i = (_QWORD *)i[15] )
        {
          if ( i == a1 )
            goto LABEL_11;
        }
      }
      v1 = (_QWORD *)v1[11];
    }
    else
    {
      if ( v2 )
        return 0LL;
      v2 = 1;
      v1 = *(_QWORD **)(a1[13] + 112LL);
    }
  }
  v1 = 0LL;
LABEL_11:
  if ( v1 )
  {
    v4 = GhostWindowFromHungWindow((__int64)v1);
    if ( v4 )
      return (_QWORD *)v4;
  }
  return v1;
}
