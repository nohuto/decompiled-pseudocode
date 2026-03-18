/*
 * XREFs of ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01B0020
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01AE9D0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetBufferProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 *v9; // rsi
  void *v10; // rax
  __int64 v11; // rbp

  v6 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v8 = 104LL;
        break;
      case 2:
        v8 = 120LL;
        break;
      case 3:
        v8 = 136LL;
        break;
      default:
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
    }
  }
  else
  {
    v8 = 88LL;
  }
  v9 = (__int64 *)((char *)this + v8);
  if ( (DirectComposition::CTableTransferEffectMarshaler *)((char *)this + v8) )
  {
    if ( (Size & 3) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v10 = (void *)Win32AllocPoolWithQuota(Size, 0x62664344u);
      v11 = (__int64)v10;
      if ( v10 )
      {
        memmove(v10, a4, Size);
        if ( *v9 )
          Win32FreePool(*v9);
        *v9 = v11;
        v9[1] = (unsigned int)(Size >> 2);
        *a6 = 1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
