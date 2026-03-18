/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801E17B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801E1204 (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801E1E58 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022B7B4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        _DWORD *a4,
        unsigned int a5)
{
  struct CResourceTable *v5; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  signed int D2DFactoryNoRef; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  struct CD2DFactory *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  CSharedSection *Resource; // rax
  void *v20; // r15
  LPVOID v21; // rax
  __int64 v22; // rdx
  struct CD2DFactory *v23; // rbx
  struct CD2DFactory **v24; // rdx
  unsigned int v25; // r9d
  unsigned int v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+30h] [rbp-20h]
  __int128 v29; // [rsp+40h] [rbp-10h] BYREF
  struct CD2DFactory *v31; // [rsp+A0h] [rbp+50h] BYREF

  v5 = a2;
  v8 = a5 / 0xCuLL;
  if ( !*((_DWORD *)a3 + 3)
    || a5 % 0xCuLL
    || !v8
    || (v9 = *((unsigned int *)a3 + 3),
        v10 = (_QWORD *)(this + 424),
        v11 = *(_QWORD *)(this + 432),
        v8 + ((v11 - *(_QWORD *)(this + 424)) >> 3) > v9)
    || (this = *v10 == v11, (*((_BYTE *)a3 + 8) != 0) == (_DWORD)this) )
  {
    v27 = 633;
LABEL_33:
    v25 = -2003303421;
LABEL_34:
    v14 = v25;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v25, v27, 0LL);
  }
  else
  {
    if ( *v10 == v11 && v9 > (__int64)(v10[2] - *v10) >> 3 )
      std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(v10);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)this, &v31);
    v14 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D2DFactoryNoRef, 0x285u, 0LL);
    }
    else
    {
      v15 = 0;
      v16 = v31;
      v17 = 0LL;
      while ( 1 )
      {
        v18 = 3 * v17;
        Resource = (CSharedSection *)CResourceTable::GetResource((__int64)v5, a4[3 * v17], 0xA7u);
        if ( !Resource )
        {
          v27 = 657;
          goto LABEL_33;
        }
        v20 = CSharedSection::ResolveAllocation(Resource, (unsigned int)a4[v18 + 1], (unsigned int)a4[v18 + 2]);
        if ( !v20 )
        {
          v25 = -2147024882;
          v27 = 663;
          goto LABEL_34;
        }
        v21 = DefaultHeap::Alloc(0x58uLL);
        if ( v21 )
        {
          v22 = *((_QWORD *)v16 + 3);
          *(_QWORD *)&v28 = (unsigned int)a4[v18 + 2];
          *((_QWORD *)&v28 + 1) = v20;
          v29 = v28;
          v23 = (struct CD2DFactory *)CPathData::CPathData(v21, v22, &v29);
        }
        else
        {
          v23 = 0LL;
        }
        v31 = v23;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v31);
        if ( !v23 )
        {
          v25 = -2147024882;
          v27 = 669;
          goto LABEL_34;
        }
        v24 = (struct CD2DFactory **)v10[1];
        if ( (struct CD2DFactory **)v10[2] == v24 )
        {
          std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CPathData>>(
            (__int64)v10,
            v24,
            &v31);
          v23 = v31;
        }
        else
        {
          *v24 = 0LL;
          if ( v24 != &v31 )
          {
            *v24 = v23;
            v23 = 0LL;
          }
          v10[1] += 8LL;
        }
        if ( v23 )
          (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v23 + 16LL))(v23);
        v17 = ++v15;
        if ( v15 >= v8 )
          return 0;
        v5 = a2;
      }
    }
  }
  return v14;
}
