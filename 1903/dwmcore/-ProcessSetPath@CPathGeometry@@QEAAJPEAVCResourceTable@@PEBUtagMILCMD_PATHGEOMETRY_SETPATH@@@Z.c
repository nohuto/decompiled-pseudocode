/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801EF2A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801EF3E0 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022B7B4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  __int64 Resource; // rax
  __int64 v7; // rcx
  CSharedSection *v8; // rsi
  CD3DDeviceManager *v9; // rcx
  void *v10; // rsi
  signed int D2DFactoryNoRef; // eax
  __int64 v12; // rcx
  const struct CPathData *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CD2DFactory *v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA7u);
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
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, D2DFactoryNoRef, 0x1Cu, 0LL);
      }
      else
      {
        v13 = (const struct CPathData *)DefaultHeap::Alloc(0x58uLL);
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
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x8007000E, 0x22u, 0LL);
        }
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, 0x8007000E, 0x19u, 0LL);
    }
  }
  return v5;
}
