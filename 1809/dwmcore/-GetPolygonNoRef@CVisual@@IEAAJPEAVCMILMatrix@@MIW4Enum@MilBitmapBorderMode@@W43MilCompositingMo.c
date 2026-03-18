/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801B6B48
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18022464C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801BF434 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        char a10,
        __int64 *a11)
{
  __int64 v12; // rax
  int v13; // ebx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // r9d
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+88h] [rbp-78h] BYREF
  __int128 v39; // [rsp+98h] [rbp-68h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-58h] BYREF
  int v41; // [rsp+B8h] [rbp-48h]
  void *v42[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+D0h] [rbp-30h]
  unsigned int v44; // [rsp+D4h] [rbp-2Ch]
  unsigned int v45; // [rsp+D8h] [rbp-28h]
  _BYTE v46[80]; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0;
  v37 = 0LL;
  if ( !*(_QWORD *)(a1 + 256) && !a10 )
    goto LABEL_41;
  v45 = 0;
  v42[0] = v46;
  v42[1] = v46;
  v43 = 4;
  v44 = 4;
  v38 = _xmm;
  v41 = 1;
  if ( a10 )
  {
    v39 = *(_OWORD *)(a1 + 164);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a1 + 192LL))(a1, 0LL, &v39);
    v13 = v16;
    if ( v16 < 0 )
    {
      v32 = 6363;
LABEL_6:
      v18 = v16;
LABEL_48:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v18, v32);
      DynArrayImpl<1>::~DynArrayImpl<1>(v42);
      goto LABEL_49;
    }
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 288LL))(a1, &v39, &v39);
  v20 = v45 + 1;
  LODWORD(v33) = v39;
  *(_QWORD *)((char *)&v33 + 4) = DWORD1(v39);
  HIDWORD(v33) = 1065353216;
  v13 = v45 + 1 < v45 ? 0x80070216 : 0;
  v40 = v33;
  if ( v45 + 1 < v45 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v13, 0xB5u);
  }
  else
  {
    if ( v20 <= v44 )
    {
      v17 = v42[0];
      v21 = 5LL * v45;
      *(_OWORD *)((char *)v42[0] + 4 * v21) = v33;
      v17[v21 + 4] = v41;
      v45 = v20;
      goto LABEL_15;
    }
    v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42, 20, 1, &v40);
    v13 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v22, 0xC0u);
  }
  v20 = v45;
LABEL_15:
  if ( v13 < 0 )
  {
    v32 = 6374;
    goto LABEL_47;
  }
  v23 = v20 + 1;
  LODWORD(v34) = DWORD2(v39);
  *(_QWORD *)((char *)&v34 + 4) = DWORD1(v39);
  v13 = v20 + 1 < v20 ? 0x80070216 : 0;
  HIDWORD(v34) = 1065353216;
  v40 = v34;
  if ( v20 + 1 < v20 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v13, 0xB5u);
  }
  else
  {
    if ( v23 <= v44 )
    {
      v17 = v42[0];
      v24 = 5LL * v20;
      *(_OWORD *)((char *)v42[0] + 4 * v24) = v34;
      v17[v24 + 4] = v41;
      v45 = v20 + 1;
      goto LABEL_23;
    }
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42, 20, 1, &v40);
    v13 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v25, 0xC0u);
  }
  v23 = v45;
LABEL_23:
  if ( v13 < 0 )
  {
    v32 = 6376;
    goto LABEL_47;
  }
  v26 = v23 + 1;
  LODWORD(v35) = DWORD2(v39);
  *(_QWORD *)((char *)&v35 + 4) = HIDWORD(v39);
  v13 = v23 + 1 < v23 ? 0x80070216 : 0;
  HIDWORD(v35) = 1065353216;
  v40 = v35;
  if ( v23 + 1 < v23 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v13, 0xB5u);
  }
  else
  {
    if ( v26 <= v44 )
    {
      v17 = v42[0];
      v27 = 5LL * v23;
      *(_OWORD *)((char *)v42[0] + 4 * v27) = v35;
      v17[v27 + 4] = v41;
      v45 = v23 + 1;
      goto LABEL_31;
    }
    v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42, 20, 1, &v40);
    v13 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v28, 0xC0u);
  }
  v26 = v45;
LABEL_31:
  if ( v13 < 0 )
  {
    v32 = 6378;
    goto LABEL_47;
  }
  LODWORD(v36) = v39;
  *(_QWORD *)((char *)&v36 + 4) = HIDWORD(v39);
  v13 = v26 + 1 < v26 ? 0x80070216 : 0;
  HIDWORD(v36) = 1065353216;
  v40 = v36;
  if ( v26 + 1 < v26 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v13, 0xB5u);
  }
  else if ( v26 + 1 > v44 )
  {
    v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42, 20, 1, &v40);
    v13 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v30, 0xC0u);
  }
  else
  {
    v17 = v42[0];
    v29 = 5LL * v26;
    *(_OWORD *)((char *)v42[0] + 4 * v29) = v36;
    v17[v29 + 4] = v41;
    v45 = v26 + 1;
  }
  if ( v13 < 0 )
  {
    v32 = 6380;
LABEL_47:
    v18 = v13;
    goto LABEL_48;
  }
  v16 = CPolygon::Create(
          (unsigned int)v42,
          a1,
          *(_QWORD *)(a1 + 256),
          a2,
          LODWORD(a3),
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          (__int64)&v38,
          (__int64)&v37);
  v13 = v16;
  if ( v16 < 0 )
  {
    v32 = 6395;
    goto LABEL_6;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v42);
  v12 = v37;
LABEL_41:
  v37 = 0LL;
  *a11 = v12;
LABEL_49:
  ReleaseInterface<CD3DSurface>(&v37);
  return (unsigned int)v13;
}
