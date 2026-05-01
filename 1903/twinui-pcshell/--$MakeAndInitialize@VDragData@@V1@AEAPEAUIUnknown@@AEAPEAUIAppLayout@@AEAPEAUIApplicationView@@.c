/*
 * XREFs of ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803CA8DC
 * Callers:
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1803CAC58 (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1803BAC04 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0DragData@@QEAA@XZ @ 0x1803CA9AC (--0DragData@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803CB504 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DragData,DragData,IUnknown * &,IAppLayout * &,IApplicationView * &,enum WindowArrangementViewDragData::DragDataFlags &>(
        DragData **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        _DWORD *a5)
{
  DragData *v9; // rax
  int v10; // edi
  DragData *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r8
  DragData *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (DragData *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = DragData::DragData(v9);
    v12 = *a4;
    v13 = *a3;
    v15 = v11;
    v10 = DragData::RuntimeClassInitialize(v11, *a2, v13, v12, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)v11 + 9);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
