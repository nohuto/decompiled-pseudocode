/*
 * XREFs of ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x1801C6F10
 * Callers:
 *     ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x1801A2CFC (-SetRoot@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007FFE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1801F9B7C (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@@Z @ 0x1802056B8 (--0CSceneWorld@@QEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CSceneVisual::OnRootChanged(CSceneVisual *this)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  CSceneWorld *v4; // rax
  __int64 v5; // rcx
  struct CContent *v6; // rbx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  CSceneNode *v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 70);
  if ( !v1 )
  {
    v13 = CVisual::SetContent((struct CResource **)this, 0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x34u, 0LL);
      return v9;
    }
    goto LABEL_15;
  }
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
    goto LABEL_9;
  v4 = (CSceneWorld *)DefaultHeap::AllocClear(0x58uLL);
  if ( v4 )
    v6 = CSceneWorld::CSceneWorld(v4, *((struct CComposition **)this + 2));
  else
    v6 = 0LL;
  v16 = (__int64)v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x27u, 0LL);
    goto LABEL_13;
  }
  (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = CVisual::SetContent((struct CResource **)this, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x29u, 0LL);
LABEL_13:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
    return v9;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
  v3 = *((_QWORD *)this + 32);
  if ( !v3 )
  {
LABEL_15:
    (*(void (__fastcall **)(CSceneVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    return 0;
  }
LABEL_9:
  v10 = *(CSceneNode **)(v3 + 72);
  v16 = v1;
  v11 = CSceneNode::SetChildren(v10);
  v9 = v11;
  if ( v11 >= 0 )
    goto LABEL_15;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2Fu, 0LL);
  return v9;
}
