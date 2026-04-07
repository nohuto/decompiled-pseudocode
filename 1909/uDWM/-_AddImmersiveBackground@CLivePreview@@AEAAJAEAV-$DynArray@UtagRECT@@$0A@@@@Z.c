/*
 * XREFs of ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18007ADBC
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18007BCB4 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023740 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180029898 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x18007CC7C (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18007DE04 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_AddImmersiveBackground(__int64 a1, __int64 a2)
{
  struct CAccent *v2; // rsi
  CVisual *v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r15
  struct tagRECT *v9; // rdx
  struct tagRECT v10; // xmm0
  char v11; // r12
  unsigned int v12; // r14d
  int v13; // eax
  int updated; // eax
  int v15; // eax
  int inserted; // eax
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // eax
  struct tagPOINT v23; // [rsp+30h] [rbp-59h] BYREF
  CVisual *v24; // [rsp+38h] [rbp-51h] BYREF
  struct CAccent *v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h]
  __m128i v27; // [rsp+50h] [rbp-39h] BYREF
  __m256i v28; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v30[2]; // [rsp+90h] [rbp+7h] BYREF

  v26 = a2;
  v23 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v29.left = 0LL;
  *(_QWORD *)&v29.right = 0LL;
  v25 = 0LL;
  v27 = 0uLL;
  v5 = 0;
  v24 = 0LL;
  if ( !CLivePreview::_ShouldAddImmersiveChrome((CLivePreview *)a1) )
    return v5;
  v7 = *(_QWORD *)(a1 + 552);
  v8 = 0LL;
  if ( !*(_DWORD *)(v7 + 40) )
    return v5;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      v9 = 0LL;
    else
      v9 = (struct tagRECT *)(*(_QWORD *)(v7 + 16) + 24 * v8);
    v10 = *v9;
    v11 = 0;
    v12 = 0;
    v30[0] = 0LL;
    v29 = v10;
    v30[1] = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
    {
      while ( (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(*(_QWORD *)v6 + 16LL * v12, &v29, v30) != 2 )
      {
        v6 = v26;
        if ( ++v12 >= *(_DWORD *)(v26 + 24) )
          goto LABEL_11;
      }
      v11 = 1;
    }
LABEL_11:
    if ( v11 )
      goto LABEL_23;
    v13 = CAccent::Create(&v25);
    v5 = v13;
    if ( v13 < 0 )
      break;
    v2 = v25;
    v27.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v27.m128i_i32[0] = 1;
    updated = CAccent::UpdateAccentPolicy(v25, &v29, &v27, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x441u);
      goto LABEL_31;
    }
    v15 = CVisual::Create(&v24);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x443u);
      v3 = v24;
      goto LABEL_31;
    }
    v3 = v24;
    v23.x = v29.left;
    v23.y = v29.top;
    CVisual::SetOffset((struct tagPOINT *)v24, &v23);
    inserted = VisualCollection::InsertRelative((CVisual *)((char *)v3 + 32), v2, 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x449u);
      goto LABEL_31;
    }
    v17 = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(a1 + 504) + 32LL), v3, 0LL, 0, 1);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x44Bu);
      goto LABEL_31;
    }
    v28.m256i_i64[0] = (__int64)v3;
    v18 = (_QWORD *)(a1 + 432);
    v28.m256i_i64[3] = 0LL;
    v19 = *(unsigned int *)(a1 + 456);
    *(struct tagRECT *)&v28.m256i_u64[1] = v29;
    v20 = v19 + 1;
    if ( (int)v19 + 1 >= (unsigned int)v19 )
    {
      if ( v20 > *(_DWORD *)(a1 + 452) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18, 32, 1, &v28);
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xC0u);
      }
      else
      {
        *(__m256i *)(*v18 + 32 * v19) = v28;
        *(_DWORD *)(a1 + 456) = v20;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
LABEL_23:
    v7 = *(_QWORD *)(a1 + 552);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      goto LABEL_31;
    v6 = v26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x43Du);
  v2 = v25;
LABEL_31:
  if ( (v5 & 0x80000000) == 0 )
  {
LABEL_34:
    if ( v3 )
      CBaseObject::Release(v3);
  }
  else if ( v3 )
  {
    VisualCollection::RemoveAll((CVisual *)((char *)v3 + 32));
    goto LABEL_34;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return v5;
}
