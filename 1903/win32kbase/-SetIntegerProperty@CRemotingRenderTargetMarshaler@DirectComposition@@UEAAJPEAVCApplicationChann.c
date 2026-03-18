/*
 * XREFs of ?SetIntegerProperty@CRemotingRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01AA4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemotingRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 == 3 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      if ( a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        *((_DWORD *)this + 4) |= 0x100u;
        *((_QWORD *)this + 5) = 0LL;
        *a5 = 1;
      }
    }
    else if ( a4 )
    {
      *((_QWORD *)this + 5) = a4;
      if ( *((_QWORD *)this + 6) )
        *((_DWORD *)this + 4) |= 0x20u;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
