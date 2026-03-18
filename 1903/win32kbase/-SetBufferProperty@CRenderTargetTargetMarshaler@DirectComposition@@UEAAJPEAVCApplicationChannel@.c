/*
 * XREFs of ?SetBufferProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A1030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetBufferProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v7; // r8d
  int v8; // r8d

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 6;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 2 && a5 == 8 )
      {
        *((_QWORD *)this + 7) = *a4;
        *((_DWORD *)this + 4) |= 0x20u;
        goto LABEL_6;
      }
    }
    else if ( a5 == 16 )
    {
      *(_OWORD *)((char *)this + 100) = *(_OWORD *)a4;
LABEL_5:
      *((_DWORD *)this + 4) |= 0x40u;
LABEL_6:
      *a6 = 1;
      return result;
    }
  }
  else if ( a5 == 16 )
  {
    *(_OWORD *)((char *)this + 84) = *(_OWORD *)a4;
    goto LABEL_5;
  }
  return 3221225485LL;
}
