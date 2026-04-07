/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800AFEAC
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B024C (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180009654 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(
        CDesktopThumbnailBase *this,
        struct CTopLevelWindow *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, a3, a4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x70u);
    v8 = v15;
    goto LABEL_8;
  }
  v8 = v15;
  v9 = (_QWORD *)((char *)this + 240);
  v10 = *((unsigned int *)this + 66);
  *((_QWORD *)&v14 + 1) = v15;
  *(_QWORD *)&v14 = a2;
  v11 = v10 + 1;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_8;
  }
  if ( v11 <= *((_DWORD *)this + 65) )
  {
    *(_OWORD *)(*v9 + 16 * v10) = v14;
    *((_DWORD *)this + 66) = v11;
LABEL_7:
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    v8 = v15;
    VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), v15, 0LL, 0, 1);
    goto LABEL_8;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 16, 1, &v14);
  if ( v13 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC0u);
LABEL_8:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
