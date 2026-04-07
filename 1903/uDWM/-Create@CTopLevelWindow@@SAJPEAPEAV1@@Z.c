/*
 * XREFs of ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180026234
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180026870 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180030D40 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EF5C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024C00 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x1800262CC (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::Create(struct CCanvasVisual ***a1)
{
  CTopLevelWindow *v2; // rax
  struct CCanvasVisual **v3; // rbx
  int v4; // eax
  int v5; // edi
  void *v7; // [rsp+28h] [rbp-10h]

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xE8u, v7);
    return (unsigned int)v5;
  }
  v2 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            848LL);
  if ( v2 )
    v3 = (struct CCanvasVisual **)CTopLevelWindow::CTopLevelWindow(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = CTopLevelWindow::Initialize(v3, 0);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE8u, v7);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
      v5 = 0;
    }
    if ( v5 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE8u, v7);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  return (unsigned int)v5;
}
