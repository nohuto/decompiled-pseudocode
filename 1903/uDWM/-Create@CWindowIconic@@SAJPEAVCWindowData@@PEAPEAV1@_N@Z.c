/*
 * XREFs of ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003ED34
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012398 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008D460 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EF5C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800402BC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::Create(struct CWindowData *a1, struct CWindowIconic **a2, char a3)
{
  __int64 v6; // rax
  CWindowIconic *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *v11; // [rsp+28h] [rbp-10h]

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  v7 = (CWindowIconic *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CWindowIconic::`vftable';
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_DWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    *(_QWORD *)(v6 + 88) = 0LL;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 112) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *((_BYTE *)v7 + 20) = a3;
    v8 = CWindowIconic::Initialize(v7, a1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x48u, v11);
    }
    else
    {
      *a2 = v7;
      v7 = 0LL;
    }
    if ( v7 )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
        a1);
      CBaseObject::Release(v7);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x44u, v11);
  }
  return v9;
}
