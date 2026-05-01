/*
 * XREFs of ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180371280
 * Callers:
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180378390 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x180371048 (-_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ.c)
 *     ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1803711A0 (-_SetShrink@CShrinkButtonElement@@IEAAXXZ.c)
 */

void __fastcall CShrinkButtonElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r10
  int v6; // ecx
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_DWORD *)(a1 + 60);
  v7[0] = v3;
  v7[1] = v6;
  v7[2] = v3 + 1;
  v7[3] = v6 + 1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, __int64))(*(_QWORD *)v5 + 24LL))(v5, v7, a2, a3);
  if ( *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56) != *(_DWORD *)(a1 + 256)
    || *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60) != *(_DWORD *)(a1 + 260) )
  {
    CShrinkButtonElement::_RecreateShrinkableVisual((CShrinkButtonElement *)a1);
  }
  CShrinkButtonElement::_SetShrink((CShrinkButtonElement *)a1);
}
