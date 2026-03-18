/*
 * XREFs of ?GetCaps@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_CAPS@@@Z @ 0x1C024F678
 * Callers:
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C024F350 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LPMDisplayCtrl::GetCaps(LPMDisplayCtrl *this, struct _D3DKMT_LPMD_CAPS *a2)
{
  PFILE_OBJECT *v3; // rcx
  int v4; // r9d
  int v5; // r9d

  if ( !a2 )
    return 3221225485LL;
  v3 = FileObject;
  v4 = 4;
  *((_DWORD *)a2 + 1) = *((unsigned __int16 *)FileObject + 34);
  *((_DWORD *)a2 + 2) = *((unsigned __int16 *)v3 + 35);
  if ( *((_DWORD *)v3 + 16) != 1 )
    v4 = 2;
  v5 = (*((_DWORD *)v3 + 8) != 0) | v4;
  switch ( *((_DWORD *)v3 + 15) )
  {
    case 1:
      v5 |= 8u;
      goto LABEL_13;
    case 2:
      *((_DWORD *)a2 + 3) = 2;
      goto LABEL_14;
    case 3:
      *((_DWORD *)a2 + 3) = 3;
      goto LABEL_14;
    case 4:
LABEL_13:
      *((_DWORD *)a2 + 3) = 1;
      goto LABEL_14;
  }
  *((_DWORD *)a2 + 3) = 0;
LABEL_14:
  *(_DWORD *)a2 = v5;
  return 0LL;
}
