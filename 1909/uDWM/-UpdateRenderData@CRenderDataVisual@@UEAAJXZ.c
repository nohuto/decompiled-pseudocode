/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800169F0
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x18007AD60 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rax
  CBaseObject *v14; // rsi
  int v15; // eax
  int v16; // eax
  void *v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v18 = 0LL;
  if ( *((_QWORD *)this + 30) )
    goto LABEL_2;
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  *((_QWORD *)this + 30) = 0LL;
  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          32LL);
  v14 = (CBaseObject *)v13;
  if ( !v13 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, v17);
    goto LABEL_21;
  }
  *(_DWORD *)(v13 + 8) = 1;
  *(_QWORD *)(v13 + 16) = v12;
  *(_QWORD *)v13 = &CResource::`vftable';
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 96LL))(v12, 30LL, v13 + 24);
  v5 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x44u, v17);
  }
  else if ( !*((_DWORD *)v14 + 6) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u, v17);
    goto LABEL_26;
  }
  if ( v5 < 0 )
  {
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x29u, v17);
    CBaseObject::Release(v14);
    goto LABEL_21;
  }
  *((_QWORD *)this + 30) = v14;
LABEL_21:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x66u, v17);
    goto LABEL_7;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 448LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 30) + 24LL));
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x67u, v17);
    goto LABEL_7;
  }
LABEL_2:
  v3 = *((_DWORD *)this + 68);
  if ( v3 > 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 144LL))(v8, &v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x70u, v17);
    }
    else
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, CRenderDataVisual *))(**(_QWORD **)(v10
                                                                                            + *((_QWORD *)this + 31))
                                                                              + 8LL))(
                *(_QWORD *)(v10 + *((_QWORD *)this + 31)),
                v18,
                this);
        v5 = v11;
        if ( v11 < 0 )
          break;
        ++v2;
        v10 += 8LL;
        if ( v2 >= v3 )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x74u, v17);
    }
  }
  else
  {
LABEL_3:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 30) + 16LL) + 344LL))(
           *(_QWORD *)(*((_QWORD *)this + 30) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 30) + 24LL),
           v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x7Du, v17);
    }
    else
    {
      if ( v3 > 0 )
        v6 = *((_QWORD *)this + 30);
      else
        v6 = 0LL;
      (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 40LL))(this, v6);
    }
  }
LABEL_7:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v5;
}
