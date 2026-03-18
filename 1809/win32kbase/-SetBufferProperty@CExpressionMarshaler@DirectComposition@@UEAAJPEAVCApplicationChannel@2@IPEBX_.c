/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0179CA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0072440 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rsi
  void *v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // edx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 20 )
  {
    if ( !*((_QWORD *)this + 24) )
    {
      v9 = Size / 0x18;
      if ( Size == 24 * (Size / 0x18) )
      {
        v10 = (void *)Win32AllocPoolWithQuota(Size, 0x78654344u);
        v11 = (__int64)v10;
        if ( !v10 )
          return (unsigned int)-1073741801;
        memmove(v10, a4, Size);
        v12 = 0;
        if ( !(_DWORD)v9 )
        {
LABEL_11:
          *((_QWORD *)this + 24) = v11;
          *((_DWORD *)this + 50) = v9;
          *a6 = 1;
          *((_DWORD *)this + 4) &= ~0x400u;
          return v6;
        }
        while ( *(_DWORD *)(v11 + 24LL * v12 + 20) < *((_DWORD *)this + 46) )
        {
          if ( ++v12 >= (unsigned int)v9 )
            goto LABEL_11;
        }
        Win32FreePool(v11);
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
  }
}
