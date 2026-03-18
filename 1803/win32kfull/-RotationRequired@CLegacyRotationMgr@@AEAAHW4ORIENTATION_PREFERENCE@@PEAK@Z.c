/*
 * XREFs of ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C019FF68
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BDB94 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00BC8D8 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BDBC0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 */

_BOOL8 __fastcall CLegacyRotationMgr::RotationRequired(CLegacyRotationMgr *a1, int a2, unsigned int *a3)
{
  unsigned int AutoRotationState; // edi
  _BOOL8 result; // rax
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(a1);
  if ( AutoRotationState > 1 || !grpdeskRitInput )
    return 0LL;
  if ( a3 )
  {
    v7 = *a3;
  }
  else
  {
    if ( (int)GetCurrentOrientation(&v10) < 0 )
      return 0LL;
    v7 = v10;
  }
  v8 = a2 - 0x40000000;
  if ( dword_1C03227B8 )
  {
    if ( (v8 & 0xBFFFFFFF) != 0 )
    {
      if ( AutoRotationState == 1 )
      {
        v9 = dword_1C03227A4;
        if ( !a2 || _bittest(&a2, ((_BYTE)dword_1C03227A4 + 1) & 3) )
          goto LABEL_36;
LABEL_13:
        if ( (a2 & 2) == 0 )
        {
          if ( (a2 & 1) != 0 )
            v9 = 3;
          else
            v9 = ((a2 & 8) != 0) + 1;
          goto LABEL_36;
        }
        goto LABEL_31;
      }
      if ( !a2 )
        goto LABEL_17;
      v9 = gAutoRotationInfo;
      if ( !_bittest(&a2, ((_BYTE)gAutoRotationInfo + 1) & 3) )
        goto LABEL_13;
      goto LABEL_20;
    }
  }
  else if ( (v8 & 0xBFFFFFFF) != 0 )
  {
    if ( AutoRotationState == 1 )
    {
      v9 = dword_1C03227A4;
      if ( !a2 || _bittest(&a2, dword_1C03227A4) )
        goto LABEL_36;
    }
    else
    {
      if ( !a2 )
      {
LABEL_17:
        if ( dword_1C03227C8 )
        {
          v9 = gAutoRotationInfo;
          goto LABEL_36;
        }
        return 0LL;
      }
      v9 = gAutoRotationInfo;
      if ( _bittest(&a2, gAutoRotationInfo) )
      {
LABEL_20:
        if ( dword_1C03227C8 )
          goto LABEL_36;
        return 0LL;
      }
    }
    if ( (a2 & 1) == 0 )
    {
      if ( (a2 & 2) != 0 )
        v9 = 1;
      else
        v9 = (~(_BYTE)a2 & 4 | 8u) >> 2;
      goto LABEL_36;
    }
LABEL_31:
    v9 = 0;
    goto LABEL_36;
  }
  v9 = v7;
LABEL_36:
  result = v9 != v7;
  if ( a3 )
    *a3 = v9;
  return result;
}
