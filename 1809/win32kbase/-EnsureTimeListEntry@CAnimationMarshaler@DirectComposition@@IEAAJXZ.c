/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C0076688
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C00764D0 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0076500 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v4; // rcx
  _DWORD *v6; // rax
  _DWORD *v7; // rcx

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  v4 = v1;
  if ( v1 && (*(_DWORD *)(v1 + 24) & 2) != 0 )
  {
    *((_QWORD *)this + 10) = 0LL;
    v4 = 0LL;
  }
  if ( v4 )
    goto LABEL_5;
  v6 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x6C614344u);
  v7 = v6;
  if ( v6 )
  {
    v6[12] = 1;
    *(_QWORD *)v6 = this;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 10) = v7;
  v2 = v7 == 0LL ? 0xC0000017 : 0;
  if ( v7 )
  {
    if ( v1 )
      *(_QWORD *)(v1 + 16) = v7;
LABEL_5:
    if ( !*((_QWORD *)this + 9) )
      *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  }
  return v2;
}
