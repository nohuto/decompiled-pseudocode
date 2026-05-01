/*
 * XREFs of ??1?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@std@@QEAA@XZ @ 0x1801F6230
 * Callers:
 *     _TitleBarController::AttachTitleBarToView_::_1_::dtor$0 @ 0x1801F71BC (_TitleBarController--AttachTitleBarToView_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unique_animation_clock>::~unique_ptr<unique_animation_clock>(void **a1)
{
  _BYTE *v1; // rbx
  __int128 v2; // xmm0
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1[16] )
    {
      v2 = *(_OWORD *)v1;
      v1[16] = 0;
      v3 = v2;
      DwmpEndAnimationClock(&v3);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x14);
  }
}
