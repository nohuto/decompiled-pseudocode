/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18004F0F0
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180065C24 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004EFD0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800C2744 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  int v6; // edx
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  struct ID2D1PrivateCompositorBuffer *v11; // r15
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 *v16; // r12
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 *v24; // rsi
  int v25; // r8d
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned int i; // r9d
  unsigned int v31; // eax
  __int64 j; // r9
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v44; // [rsp+48h] [rbp-18h]
  unsigned __int64 v45; // [rsp+50h] [rbp-10h]
  __int64 v46; // [rsp+58h] [rbp-8h]
  struct ID2D1PrivateCompositorBuffer *v47; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v49; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v6 = *((_DWORD *)this + 128);
  v7 = 0LL;
  v8 = *((_QWORD *)this + 63);
  v49 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v9 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v49);
  v11 = v49;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x29Du);
    goto LABEL_20;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((_QWORD *)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v47);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2A3u);
    goto LABEL_41;
  }
  v15 = *((_DWORD *)this + 48);
  v16 = (__int64 *)((char *)this + 296);
  v17 = *((_DWORD *)this + 110);
  v18 = *((_DWORD *)this + 111);
  v19 = *((_DWORD *)this + 64);
  if ( v17 >= v15 )
    v17 = *((_DWORD *)this + 48);
  v20 = v15 - v17;
  *((_DWORD *)this + 110) = v17;
  if ( v18 >= v20 )
    v18 = v20;
  v21 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 111) = v18;
  if ( v21 >= v19 )
    v21 = v19;
  *((_DWORD *)this + 112) = v21;
  v22 = DynArrayImpl<0>::Grow((int)this + 296, 8, v18 + v17, 1, 0LL);
  v12 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2AAu);
    goto LABEL_41;
  }
  v24 = (__int64 *)((char *)this + 360);
  v25 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 80) = *((_DWORD *)this + 110) + *((_DWORD *)this + 111);
  v26 = DynArrayImpl<0>::Grow((int)this + 360, 8, v25, 1, 0LL);
  v12 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x2ADu);
LABEL_41:
    v2 = v47;
    goto LABEL_20;
  }
  v28 = 0LL;
  for ( *((_DWORD *)this + 96) = *((_DWORD *)this + 112);
        (unsigned int)v28 < *((_DWORD *)this + 110);
        v28 = (unsigned int)(v28 + 1) )
  {
    v29 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v28);
    *(_QWORD *)(*v16 + 8 * v28) = (v29 + 64) & -(__int64)(v29 != 0);
  }
  for ( i = 0; i < *((_DWORD *)this + 111); *(_QWORD *)(*v16 + 8 * v40) = (v41 + 64) & -(__int64)(v41 != 0) )
  {
    v40 = i + *((_DWORD *)this + 110);
    v41 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v40);
    ++i;
  }
  v31 = *((_DWORD *)this + 112);
  for ( j = 0LL; (unsigned int)j < v31; v31 = *((_DWORD *)this + 112) )
  {
    v42 = *(_QWORD *)(*((_QWORD *)this + 29) + 8 * j);
    *(_QWORD *)(*v24 + 8 * j) = (v42 - 8) & -(__int64)(v42 != 0);
    j = (unsigned int)(j + 1);
  }
  v33 = *v16;
  v34 = v31;
  v35 = *v24;
  v43[0] = v34;
  v43[1] = v35;
  if ( !v35 && v34
    || (v34 = *((unsigned int *)this + 110),
        v36 = *((unsigned int *)this + 111),
        v43[2] = v36,
        (v44 = v33 + 8 * v34) == 0)
    && v36
    || (v45 = v34, (v46 = v33) == 0) && v34 )
  {
    gsl::details::terminate((gsl::details *)v34);
    __debugbreak();
  }
  v2 = v47;
  v37 = CPrimitiveGroupDrawListGenerator::Create(v11, v47, (__int64)v43, (__int64)&v48);
  v12 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x2DCu);
    v7 = v48;
  }
  else
  {
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)v48;
  }
LABEL_20:
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v12;
}
