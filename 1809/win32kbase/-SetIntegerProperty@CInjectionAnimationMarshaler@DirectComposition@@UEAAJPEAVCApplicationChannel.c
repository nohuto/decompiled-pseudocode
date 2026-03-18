/*
 * XREFs of ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01711A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0069350 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CInjectionAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  if ( a3 == 11 )
  {
    if ( *((_QWORD *)this + 15) == a4 )
      return v5;
    *((_QWORD *)this + 15) = a4;
    goto LABEL_8;
  }
  if ( a3 == 12 )
  {
    if ( *((_QWORD *)this + 16) == a4 )
      return v5;
    *((_QWORD *)this + 16) = a4;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x400u;
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
