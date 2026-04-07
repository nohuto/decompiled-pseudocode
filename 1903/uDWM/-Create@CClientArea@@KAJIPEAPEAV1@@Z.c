/*
 * XREFs of ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180037CD0
 * Callers:
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180014E34 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001E250 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180030D40 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180037B80 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EF5C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180019640 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CClientArea@@MEAAJI@Z @ 0x180037D70 (-Initialize@CClientArea@@MEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::Create(unsigned int a1, struct CClientArea **a2)
{
  CVisual *v4; // rax
  CClientArea *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void *v9; // [rsp+28h] [rbp-10h]

  if ( a2 )
  {
    v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      248LL);
    v5 = v4;
    if ( v4 )
    {
      CVisual::CVisual(v4);
      *(_QWORD *)v5 = &CClientArea::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = CClientArea::Initialize(v5, a1);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x30u, v9);
      }
      else
      {
        *a2 = v5;
        v5 = 0LL;
      }
      if ( v5 )
        CBaseObject::Release(v5);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Eu, v9);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2Au, v9);
  }
  return v7;
}
