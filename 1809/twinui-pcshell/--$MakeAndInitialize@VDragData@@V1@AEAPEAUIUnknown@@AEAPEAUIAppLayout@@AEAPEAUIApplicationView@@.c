/*
 * XREFs of ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x18036491C
 * Callers:
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x180364C98 (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x180354CF4 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0DragData@@QEAA@XZ @ 0x1803649F0 (--0DragData@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180365534 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DragData,DragData,IUnknown * &,IAppLayout * &,IApplicationView * &,enum WindowArrangementViewDragData::DragDataFlags &>(
        DragData **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        _DWORD *a5)
{
  DragData *v9; // rax
  int v10; // ebx
  DragData *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r8
  volatile int *v14; // rdx
  DragData *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (DragData *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = DragData::DragData(v9);
    v12 = *a4;
    v13 = *a3;
    v16 = v11;
    v10 = DragData::RuntimeClassInitialize(v11, *a2, v13, v12, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
          (__int64)v11,
          v14);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
