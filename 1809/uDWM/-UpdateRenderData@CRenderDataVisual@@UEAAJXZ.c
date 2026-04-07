/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001BA50
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180074790 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  CBaseObject *v5; // r14
  int v6; // eax
  int v7; // edi
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v17 = 0LL;
  if ( !*((_QWORD *)this + 30) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    *((_QWORD *)this + 30) = 0LL;
    v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           32LL);
    v5 = (CBaseObject *)v4;
    if ( !v4 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
      v8 = -2147024882;
      goto LABEL_28;
    }
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = v3;
    *(_QWORD *)v4 = &CResource::`vftable';
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 96LL))(v3, 29LL, v4 + 24);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x44u);
    }
    else if ( !*((_DWORD *)v5 + 6) )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
      goto LABEL_25;
    }
    if ( v7 >= 0 )
    {
      *((_QWORD *)this + 30) = v5;
      goto LABEL_7;
    }
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29u);
    CBaseObject::Release(v5);
LABEL_7:
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 424LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
             *(unsigned int *)(*((_QWORD *)this + 30) + 24LL));
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x68u);
        goto LABEL_14;
      }
      goto LABEL_9;
    }
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x65u);
    goto LABEL_14;
  }
LABEL_9:
  v10 = *((_DWORD *)this + 68);
  if ( v10 > 0 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 136LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            &v17);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x71u);
    }
    else
    {
      v15 = 0LL;
      while ( 1 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, CRenderDataVisual *))(**(_QWORD **)(v15
                                                                                            + *((_QWORD *)this + 31))
                                                                              + 8LL))(
                *(_QWORD *)(v15 + *((_QWORD *)this + 31)),
                v17,
                this);
        v8 = v16;
        if ( v16 < 0 )
          break;
        ++v2;
        v15 += 8LL;
        if ( v2 >= v10 )
          goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x75u);
    }
  }
  else
  {
LABEL_10:
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 30) + 16LL) + 336LL))(
            *(_QWORD *)(*((_QWORD *)this + 30) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 30) + 24LL),
            v17);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7Eu);
    }
    else
    {
      if ( v10 > 0 )
        v12 = *((_QWORD *)this + 30);
      else
        v12 = 0LL;
      (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 40LL))(this, v12);
    }
  }
LABEL_14:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v8;
}
