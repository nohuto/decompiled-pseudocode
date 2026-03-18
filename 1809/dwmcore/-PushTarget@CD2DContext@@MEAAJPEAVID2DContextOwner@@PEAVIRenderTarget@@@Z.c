/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800230D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800227C0 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180022828 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180022BFC (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z @ 0x180023924 (-QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180024F00 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180025C0C (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD2DContext::PushTarget(
        unsigned __int64 this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  char *v3; // r14
  _QWORD *v4; // rdi
  int v5; // eax
  __int64 v6; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // eax
  _QWORD v35[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v37; // [rsp+80h] [rbp+40h] BYREF
  struct ID2DContextOwner *v38; // [rsp+88h] [rbp+48h]
  __int64 v39; // [rsp+98h] [rbp+58h] BYREF

  v38 = a2;
  v37 = 0LL;
  v3 = (char *)(this + 368);
  v39 = 0LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(this + 392);
  v6 = 0LL;
  v9 = this;
  if ( v5 )
  {
    this = (unsigned int)(v5 - 1);
    v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * this);
  }
  v10 = *(_QWORD *)(v9 + 176);
  if ( v10 )
  {
    this = *(_QWORD *)(v9 + 184);
    if ( this )
    {
      CBatchOptimizer::Flush((CBatchOptimizer *)this);
      v10 = *(_QWORD *)(v9 + 176);
    }
    *(_DWORD *)(v10 + 52) = *(_DWORD *)(v9 + 32);
    v28 = *(_QWORD *)(v9 + 176);
    *(_QWORD *)(v9 + 176) = 0LL;
    if ( v28 )
    {
      v29 = *((_DWORD *)v3 + 6);
      v30 = 0LL;
      if ( v29 )
        v30 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v29 - 1));
      CDrawListEntryBatch::QueueForRender((CDrawListEntryBatch *)v28, *(struct IRenderTarget **)(v30 + 24));
      v31 = CD2DContext::DrawCustomCallbackRendererInternal(
              (CD2DContext *)v9,
              (struct ID2D1PrivateCompositorRenderer *)v28);
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x30Cu);
      CMILRefCountBase::Release((CMILRefCountBase *)(v28 + 8));
    }
  }
  v11 = *(_DWORD *)(v9 + 848);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v11, 0x340u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)a2 + 80LL))(a2);
    *(_OWORD *)(v9 + 472) = *(_OWORD *)v12;
    *(_DWORD *)(v9 + 488) = *(_DWORD *)(v12 + 16);
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v37);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x344u);
      goto LABEL_15;
    }
    (*(void (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)a3 + 112LL))(a3, &v39);
    if ( !v6 )
    {
      v15 = (_QWORD *)(v9 + 464);
      v16 = *(_QWORD **)(v9 + 464);
      if ( v16 && v37 == v16[4] && v39 == v16[5] )
      {
        *v16 = a2;
        v35[0] = *v15;
        v17 = *((_DWORD *)v3 + 6);
        v18 = v17 + 1;
        v11 = v17 + 1 < v17 ? 0x80070216 : 0;
        if ( v17 + 1 < v17 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v11, 0xB5u);
        }
        else if ( v18 > *((_DWORD *)v3 + 5) )
        {
          v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, v35);
          v11 = v33;
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v33, 0xC0u);
        }
        else
        {
          v19 = *((_DWORD *)v3 + 6);
          *(_QWORD *)(*(_QWORD *)v3 + 8LL * v17) = v35[0];
          *((_DWORD *)v3 + 6) = v18;
        }
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v11, 0x356u);
        else
          *v15 = 0LL;
        goto LABEL_15;
      }
      SAFE_DELETE<CD2DTarget>((CD2DTarget **)(v9 + 464));
    }
    v4 = HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
    if ( !v4 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v21 = *(_QWORD *)(v9 + 208);
    v22 = v39;
    v23 = v37;
    *v4 = v38;
    v4[1] = v21;
    v4[2] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    *((_BYTE *)v4 + 48) = 0;
    *((_DWORD *)v4 + 13) = 0;
    *((_BYTE *)v4 + 56) = 0;
    v4[3] = a3;
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a3 + 8LL))(a3);
    v4[4] = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v4[5] = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v25 = *((_DWORD *)v3 + 6);
    v35[0] = v4;
    v26 = v25 + 1;
    v11 = v25 + 1 < v25 ? 0x80070216 : 0;
    if ( v25 + 1 < v25 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v11, 0xB5u);
    }
    else if ( v26 > *((_DWORD *)v3 + 5) )
    {
      v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, v35);
      v11 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v34, 0xC0u);
    }
    else
    {
      v27 = v25;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v25) = v35[0];
      *((_DWORD *)v3 + 6) = v26;
    }
    if ( v11 >= 0 )
    {
      if ( *(_BYTE *)(v9 + 492) )
      {
        if ( v6 )
          *(_BYTE *)(v6 + 48) = 0;
        if ( !*((_BYTE *)v4 + 48) )
        {
          v4[2] = v9;
          CD2DContext::D2DSetTargetInternal((CD2DContext *)v9, (struct CD2DTarget *)v4);
          *((_BYTE *)v4 + 48) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v4);
        }
      }
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v11, 0x36Fu);
  }
  if ( v4 )
    CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v4);
LABEL_15:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v9, (unsigned int)v11, 0LL);
}
