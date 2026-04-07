/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003FC54
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EE1C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800935C8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180014C68 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027290 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003EDD4 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F0B8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003F310 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F790 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003F934 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18008DE88 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800933B4 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 */

__int64 __fastcall CWindowIconic::SetRepresentationType(__int64 a1, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int CentralImage; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // [rsp+20h] [rbp-18h]
  void *v13; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != v3 )
  {
    if ( a2 == 1 )
    {
      CentralImage = CBitmapSourceArray::CopyAndAddRef(
                       (CBitmapSourceArray *)(a1 + 32),
                       (const struct CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v12 = 713;
        goto LABEL_26;
      }
      v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             80LL);
      if ( v9 )
        v9 = CTimeline<unsigned int>::CTimeline<unsigned int>(v9, v10, v11, *(unsigned int *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v9;
      if ( !v9 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2CBu, v13);
        return v4;
      }
      CTopLevelWindow::StartIconicAnimation(*(CTopLevelWindow **)(a1 + 88));
    }
    else if ( v3 == 1 )
    {
      CWindowIconic::CleanupAnimationResources((CTopLevelWindow **)a1);
    }
    if ( !a3 )
      return v4;
    CentralImage = CWindowIconic::OnWindowStyleUpdated((CWindowIconic *)a1, 0LL);
    v4 = CentralImage;
    if ( CentralImage >= 0 )
    {
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage >= 0 )
      {
        CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
        v4 = CentralImage;
        if ( CentralImage >= 0 )
        {
          CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1);
          v4 = CentralImage;
          if ( CentralImage >= 0 )
          {
            CentralImage = CVisual::RenderRecursive(*(CVisual **)(a1 + 88));
            v4 = CentralImage;
            if ( CentralImage >= 0 )
            {
              CentralImage = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 64LL))(*(_QWORD *)(a1 + 104));
              v4 = CentralImage;
              if ( CentralImage >= 0 )
                return v4;
              v12 = 733;
            }
            else
            {
              v12 = 732;
            }
          }
          else
          {
            v12 = 729;
          }
        }
        else
        {
          v12 = 728;
        }
      }
      else
      {
        v12 = 727;
      }
    }
    else
    {
      v12 = 726;
    }
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CentralImage, v12, v13);
  }
  return v4;
}
