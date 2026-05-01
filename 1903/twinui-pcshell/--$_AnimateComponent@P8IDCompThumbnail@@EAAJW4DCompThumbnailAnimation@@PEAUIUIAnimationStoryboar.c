/*
 * XREFs of ??$_AnimateComponent@P8IDCompThumbnail@@EAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@ZW42@PEAU3@@CSwitchItemElement@@IEAAJW4SwitchItemComponent@@P8IDCompThumbnail@@EAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z12@Z @ 0x180362124
 * Callers:
 *     ?AnimateComponent@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180362550 (-AnimateComponent@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@W4DCompThumbnailAnimation@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BIA@AA @ 0x1800B3F0C (--_9IDCompThumbnail@@$BIA@AA.c)
 */

__int64 __fastcall CSwitchItemElement::_AnimateComponent<long (IDCompThumbnail::*)(enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *),enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *>(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = a1[77];
      if ( v4 )
      {
        v5 =  IDCompThumbnail::`vcall'{128,{flat}}(v4);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17F,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
            (const char *)(unsigned int)v5);
          return v6;
        }
      }
      v8 = a1[75];
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v13);
        if ( v13 )
        {
          v9 =  IDCompThumbnail::`vcall'{128,{flat}}(v13);
          if ( v9 < 0 )
          {
            v10 = 391LL;
LABEL_15:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
              (const char *)(unsigned int)v9);
            goto LABEL_16;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      }
    }
    return 0LL;
  }
  v11 = a1[76];
  if ( !v11 )
    return 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v13);
  v9 =  IDCompThumbnail::`vcall'{128,{flat}}(v13);
  if ( v9 < 0 )
  {
    v10 = 377LL;
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v9;
}
