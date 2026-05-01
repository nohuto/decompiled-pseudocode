/*
 * XREFs of ?ThumbnailSourceSizeChanged@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAX@Z @ 0x180312EC0
 * Callers:
 *     ?ThumbnailSourceSizeChanged@MultitaskingViewDismissalAnimationCoordinator@@UEAAXPEAX@Z @ 0x1802FDC40 (-ThumbnailSourceSizeChanged@MultitaskingViewDismissalAnimationCoordinator@@UEAAXPEAX@Z.c)
 * Callees:
 *     CSimpleHashTable_HWND_______ptr64_MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND_______ptr64__CDefaultKeyCompare_HWND_______ptr64__CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_f8898a0e5a814aad1679b3646f590d09___ @ 0x1803116A4 (CSimpleHashTable_HWND_______ptr64_MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefau.c)
 */

void __fastcall MultitaskingViewAnimationCoordinatorBase::ThumbnailSourceSizeChanged(
        MultitaskingViewAnimationCoordinatorBase *this,
        void *a2)
{
  bool v2; // zf
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_QWORD *)this + 10) == 0LL;
  v7[0] = &v8;
  v7[1] = (_QWORD *)((char *)this - 8);
  v4 = 1;
  if ( !v2 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= *((_DWORD *)this + 17) )
        break;
      v6 = *((_QWORD *)this + 10) + 32LL * v5;
      if ( *(_DWORD *)v6 == 1 )
        v4 = CSimpleHashTable_HWND_______ptr64_MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND_______ptr64__CDefaultKeyCompare_HWND_______ptr64__CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_f8898a0e5a814aad1679b3646f590d09___(
               v7,
               (_QWORD *)(v6 + 8),
               v6 + 16);
      ++v5;
    }
    while ( v4 );
  }
}
