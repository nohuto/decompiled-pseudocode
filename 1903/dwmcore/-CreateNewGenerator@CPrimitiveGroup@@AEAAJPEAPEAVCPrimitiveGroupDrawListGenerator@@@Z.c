/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800897E0
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800888D0 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180088980 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180089AA0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18008F0E0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  unsigned int v6; // edx
  __int64 v7; // r14
  void *v8; // rcx
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
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned int i; // r9d
  unsigned int v31; // eax
  __int64 j; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int128 v41; // [rsp+30h] [rbp-30h] BYREF
  __int128 v42; // [rsp+40h] [rbp-20h] BYREF
  __int128 v43; // [rsp+50h] [rbp-10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v44; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v46; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v6 = *((_DWORD *)this + 128);
  v7 = 0LL;
  v8 = (void *)*((_QWORD *)this + 63);
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v9 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v46);
  v11 = v46;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2B2u, 0LL);
    goto LABEL_20;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v44);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2B8u, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2BFu, 0LL);
    goto LABEL_41;
  }
  v24 = (__int64 *)((char *)this + 360);
  *((_DWORD *)this + 80) = *((_DWORD *)this + 110) + *((_DWORD *)this + 111);
  v25 = DynArrayImpl<0>::Grow((int)this + 360, 8, *((_DWORD *)this + 112), 1, 0LL);
  v12 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x2C2u, 0LL);
LABEL_41:
    v2 = v44;
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
  for ( i = 0; i < *((_DWORD *)this + 111); *(_QWORD *)(*v16 + 8 * v27) = (v39 + 64) & -(__int64)(v39 != 0) )
  {
    v27 = i + *((_DWORD *)this + 110);
    v39 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v27);
    ++i;
  }
  v31 = *((_DWORD *)this + 112);
  for ( j = 0LL; (unsigned int)j < v31; v31 = *((_DWORD *)this + 112) )
  {
    v40 = *(_QWORD *)(*((_QWORD *)this + 29) + 8 * j);
    *(_QWORD *)(*v24 + 8 * j) = (v40 - 8) & -(__int64)(v40 != 0);
    j = (unsigned int)(j + 1);
  }
  v33 = *v16;
  v34 = v31;
  v35 = *v24;
  *(_QWORD *)&v41 = v34;
  *((_QWORD *)&v41 + 1) = v35;
  if ( !v35 && v34
    || (v34 = *((unsigned int *)this + 110),
        v27 = *((unsigned int *)this + 111),
        *(_QWORD *)&v42 = v27,
        (*((_QWORD *)&v42 + 1) = v33 + 8 * v34) == 0LL)
    && v27
    || (*(_QWORD *)&v43 = v34, (*((_QWORD *)&v43 + 1) = v33) == 0LL) && v34 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v34,
      v33,
      v27,
      j);
    __debugbreak();
  }
  v2 = v44;
  v36 = CPrimitiveGroupDrawListGenerator::Create(v11, v44, &v43, &v42, &v41, &v45);
  v12 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x2F1u, 0LL);
    v7 = v45;
  }
  else
  {
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)v45;
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
