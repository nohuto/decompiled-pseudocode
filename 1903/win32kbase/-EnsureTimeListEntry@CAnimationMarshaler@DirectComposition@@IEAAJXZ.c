/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C008F818
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C008F670 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C008F6A0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // rcx
  _DWORD *v6; // rax

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  v4 = v1;
  if ( v1 && (*(_DWORD *)(v1 + 24) & 2) != 0 )
  {
    *((_QWORD *)this + 9) = 0LL;
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v6 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x6C614344u);
    if ( v6 )
    {
      v6[12] = 1;
      *(_QWORD *)v6 = this;
    }
    else
    {
      v6 = 0LL;
    }
    *((_QWORD *)this + 9) = v6;
    if ( !v6 )
      return (unsigned int)-1073741801;
    if ( v1 )
      *(_QWORD *)(v1 + 16) = v6;
  }
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 8) = *((_QWORD *)this + 9);
  return v2;
}
