/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008E688
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18008E350 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800215C8 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18008804C (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x18008D7BC (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18008D8F4 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18008DF2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E460 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18008E80C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::SetRepresentationType(__int64 a1, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int CentralImage; // eax
  _QWORD *v8; // rax
  __int64 v9; // r8
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != v3 )
  {
    if ( a2 == 1 )
    {
      CentralImage = CBitmapSourceArray::CopyAndAddRef(
                       (CBitmapSourceArray *)(a1 + 32),
                       (const struct CBitmapSourceArray *)CWindowIconic::s_rgpBitmapPendingImages);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 713;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v11);
        return v4;
      }
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       80LL);
      if ( v8 )
        v8 = CTimeline<unsigned int>::CTimeline<unsigned int>((__int64)v8, 0.54, v9, *(_DWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v8;
      if ( !v8 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2CBu);
        return v4;
      }
      CTopLevelWindow::StartIconicAnimation(*(CTopLevelWindow **)(a1 + 88));
    }
    else if ( v3 == 1 )
    {
      CWindowIconic::CleanupAnimationResources((CTopLevelWindow **)a1);
    }
    if ( a3 )
    {
      CentralImage = CWindowIconic::OnWindowStyleUpdated((CWindowIconic *)a1, 0);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 726;
        goto LABEL_25;
      }
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 727;
        goto LABEL_25;
      }
      CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 728;
        goto LABEL_25;
      }
      CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 729;
        goto LABEL_25;
      }
      CentralImage = CVisual::RenderRecursive(*(CVisual **)(a1 + 88));
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 732;
        goto LABEL_25;
      }
      CentralImage = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 64LL))(*(_QWORD *)(a1 + 104));
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 733;
        goto LABEL_25;
      }
    }
  }
  return v4;
}
