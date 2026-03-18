/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0072440
 * Callers:
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0072370 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0179CA0 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // rax
  _OWORD *v11; // rax

  v6 = 0;
  if ( a3 != 5 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 9) )
    return (unsigned int)-1073741790;
  if ( a5 == 12 )
  {
    if ( *a4 != 1 )
      return (unsigned int)-1073741811;
    v10 = Win32AllocPoolWithQuota(12LL, 0x6D654344u);
    if ( v10 )
    {
      *((_QWORD *)this + 9) = v10;
      *(_QWORD *)v10 = *(_QWORD *)a4;
      *(_DWORD *)(v10 + 8) = a4[2];
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 == 16 )
  {
    if ( *a4 != 2 )
      return (unsigned int)-1073741811;
    v11 = (_OWORD *)Win32AllocPoolWithQuota(16LL, 0x6D654344u);
    if ( v11 )
    {
      *((_QWORD *)this + 9) = v11;
      *v11 = *(_OWORD *)a4;
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
LABEL_6:
  *((_DWORD *)this + 4) &= ~0x40u;
  *a6 = 1;
  return v6;
}
