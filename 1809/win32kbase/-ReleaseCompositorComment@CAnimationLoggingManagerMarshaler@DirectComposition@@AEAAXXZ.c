/*
 * XREFs of ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0085EC0
 * Callers:
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0085E80 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016C010 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 29) = 0LL;
  }
}
