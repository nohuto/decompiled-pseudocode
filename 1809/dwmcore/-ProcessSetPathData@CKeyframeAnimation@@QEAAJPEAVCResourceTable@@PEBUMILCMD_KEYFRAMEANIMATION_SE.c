/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801A3C08
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801A3680 (--$_Emplace_reallocate@V-$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VC.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801A428C (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        __int64 this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        _DWORD *a4,
        unsigned int a5)
{
  struct CResourceTable *v5; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  int D2DFactoryNoRef; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  struct CD2DFactory *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  CSharedSection *Resource; // rax
  void *v20; // r15
  LPVOID v21; // rax
  struct CD2DFactory *v22; // rbx
  struct CD2DFactory **v23; // rdx
  int v24; // r9d
  unsigned int v26; // [rsp+20h] [rbp-30h]
  __int128 v27; // [rsp+30h] [rbp-20h]
  __int128 v28; // [rsp+40h] [rbp-10h] BYREF
  struct CD2DFactory *v30; // [rsp+A0h] [rbp+50h] BYREF

  v5 = a2;
  v8 = a5 / 0xCuLL;
  if ( !*((_DWORD *)a3 + 3)
    || a5 % 0xCuLL
    || !v8
    || (v9 = *((unsigned int *)a3 + 3),
        v10 = (_QWORD *)(this + 408),
        v11 = *(_QWORD *)(this + 416),
        v8 + ((v11 - *(_QWORD *)(this + 408)) >> 3) > v9)
    || (this = *v10 == v11, (*((_DWORD *)a3 + 2) != 0) == (_DWORD)this) )
  {
    v26 = 638;
LABEL_33:
    v24 = -2003303421;
LABEL_34:
    v14 = v24;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v24, v26);
  }
  else
  {
    if ( *v10 == v11 && v9 > (__int64)(v10[2] - *v10) >> 3 )
      std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(v10);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)this, &v30);
    v14 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D2DFactoryNoRef, 0x28Au);
    }
    else
    {
      v15 = 0;
      v16 = v30;
      v17 = 0LL;
      while ( 1 )
      {
        v18 = 3 * v17;
        Resource = (CSharedSection *)CResourceTable::GetResource((__int64)v5, a4[3 * v17], 0x88u);
        if ( !Resource )
        {
          v26 = 662;
          goto LABEL_33;
        }
        v20 = CSharedSection::ResolveAllocation(Resource, (unsigned int)a4[v18 + 1], (unsigned int)a4[v18 + 2]);
        if ( !v20 )
        {
          v24 = -2147024882;
          v26 = 668;
          goto LABEL_34;
        }
        v21 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
        if ( v21 )
        {
          *(_QWORD *)&v27 = (unsigned int)a4[v18 + 2];
          *((_QWORD *)&v27 + 1) = v20;
          v28 = v27;
          v22 = (struct CD2DFactory *)CPathData::CPathData(v21, *((_QWORD *)v16 + 3), &v28);
        }
        else
        {
          v22 = 0LL;
        }
        v30 = v22;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v30);
        if ( !v22 )
        {
          v24 = -2147024882;
          v26 = 674;
          goto LABEL_34;
        }
        v23 = (struct CD2DFactory **)v10[1];
        if ( (struct CD2DFactory **)v10[2] == v23 )
        {
          std::vector<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>(
            v10,
            v23,
            &v30);
          v22 = v30;
        }
        else
        {
          *v23 = 0LL;
          if ( v23 != &v30 )
          {
            *v23 = v22;
            v22 = 0LL;
          }
          v10[1] += 8LL;
        }
        if ( v22 )
          (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v22 + 16LL))(v22);
        v17 = ++v15;
        if ( v15 >= v8 )
          return 0;
        v5 = a2;
      }
    }
  }
  return v14;
}
