/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801AAB48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801AAC80 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  __int64 Resource; // rax
  __int64 v7; // rcx
  CSharedSection *v8; // rsi
  CD3DDeviceManager *v9; // rcx
  void *v10; // rsi
  int D2DFactoryNoRef; // eax
  __int64 v12; // rcx
  const struct CPathData *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CD2DFactory *v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x88u);
  v7 = *((_QWORD *)this + 17);
  v8 = (CSharedSection *)Resource;
  if ( v7 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v8 )
  {
    v10 = CSharedSection::ResolveAllocation(v8, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v10 )
    {
      D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v9, &v17);
      v5 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, D2DFactoryNoRef, 0x1Fu);
      }
      else
      {
        v13 = (const struct CPathData *)HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
        if ( v13 )
        {
          v16[0] = *((unsigned int *)a3 + 4);
          v16[1] = v10;
          v13 = (const struct CPathData *)CPathData::CPathData(v13, *((_QWORD *)v17 + 3), v16);
        }
        if ( v13 )
        {
          CPathGeometry::SetPath(this, v13);
        }
        else
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x25u);
        }
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, -2147024882, 0x1Cu);
    }
  }
  return v5;
}
