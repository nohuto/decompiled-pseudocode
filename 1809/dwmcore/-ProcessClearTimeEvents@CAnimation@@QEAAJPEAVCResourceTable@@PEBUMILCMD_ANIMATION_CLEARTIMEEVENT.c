/*
 * XREFs of ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z @ 0x18018A7E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CAnimation::ProcessClearTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_CLEARTIMEEVENTS *a3)
{
  char *v4; // rcx

  v4 = (char *)this + 152;
  *((_DWORD *)v4 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v4, 0x10u);
  *((_DWORD *)this + 46) = 0;
  return 0LL;
}
