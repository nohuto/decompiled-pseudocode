/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007EBC0
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007E900 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007EAF0 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01AE460 (-SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01AED50 (-SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01B4160 (-SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  char v7; // al
  char v8; // r8
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  char v13; // al
  char v14; // r8
  int v15; // r8d

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 <= 52 )
    {
      if ( (_DWORD)a4 != 52
        && (_DWORD)a4 != 11
        && ((int)a4 <= 16 || (int)a4 > 18 && (_DWORD)a4 != 35 && (_DWORD)a4 != 42) )
      {
        return (unsigned int)-1073741811;
      }
    }
    else if ( (int)a4 < 69 || (_DWORD)a4 != 104 && (_DWORD)a4 != 265 && (int)a4 > 71 )
    {
      return (unsigned int)-1073741811;
    }
    if ( *((_DWORD *)this + 12) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 104) |= 2u;
    *((_DWORD *)this + 12) = a4;
    goto LABEL_6;
  }
  v6 = a3 - 1;
  if ( v6 )
  {
    v10 = v6 - 2;
    if ( !v10 )
    {
      if ( *((_DWORD *)this + 16) == a4 )
        return v5;
      *((_DWORD *)this + 4) &= ~0x40u;
      *((_DWORD *)this + 16) = a4;
      goto LABEL_6;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( *((_DWORD *)this + 20) == a4 )
        return v5;
      *((_DWORD *)this + 4) &= ~0x80u;
      *((_DWORD *)this + 20) = a4;
      goto LABEL_6;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
      if ( ((*((unsigned __int8 *)this + 104) >> 2) & 1) == (a4 != 0) )
        return v5;
      v13 = a4 != 0 ? 4 : 0;
      v14 = *((_BYTE *)this + 104) & 0xFB;
      goto LABEL_27;
    }
    v15 = v12 - 1;
    if ( !v15 )
    {
      if ( ((*((unsigned __int8 *)this + 104) >> 3) & 1) == (a4 != 0) )
        return v5;
      v13 = a4 != 0 ? 8 : 0;
      v14 = *((_BYTE *)this + 104) & 0xF7;
LABEL_27:
      *((_DWORD *)this + 4) &= ~0x100u;
      *((_BYTE *)this + 104) = v14 | v13;
      goto LABEL_6;
    }
    if ( v15 == 2 )
    {
      if ( ((*((unsigned __int8 *)this + 104) >> 4) & 1) == (a4 != 0) )
        return v5;
      v7 = a4 != 0 ? 0x10 : 0;
      v8 = *((_BYTE *)this + 104) & 0xEF;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  if ( (*((_BYTE *)this + 104) & 1) != (a4 != 0) )
  {
    v7 = a4 != 0;
    v8 = *((_BYTE *)this + 104) & 0xFE;
LABEL_5:
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 104) = v8 | v7;
LABEL_6:
    *a5 = 1;
  }
  return v5;
}
