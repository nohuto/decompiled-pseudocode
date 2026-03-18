/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180009CEC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x18000A0D8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x1800154B8 (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18006BB54 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  __int64 v4; // rbx
  unsigned int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // esi
  bool v11; // r13
  unsigned int v12; // r12d
  __int64 v13; // r9
  char v14; // r11
  __int64 v15; // rdx
  unsigned int v16; // eax
  struct CHwLightCollectionBuffer *v17; // rax
  unsigned int v19; // edx
  const struct LightInfo *v20; // rcx
  __int64 v21; // r14
  bool v22; // zf
  const struct CMILMatrix *v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  void *v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h]
  const struct CMILMatrix *v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  struct CDrawingContext *v38; // [rsp+50h] [rbp-B0h]
  struct CHwLightCollectionBuffer **v39; // [rsp+58h] [rbp-A8h]
  void *Buf2; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+70h] [rbp-90h]
  unsigned int v43[3]; // [rsp+74h] [rbp-8Ch]
  _BYTE v44[32]; // [rsp+80h] [rbp-80h] BYREF
  struct LightInfo *v45[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+B0h] [rbp-50h]
  unsigned int v47[2]; // [rsp+B4h] [rbp-4Ch]
  _BYTE v48[720]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v49[168]; // [rsp+390h] [rbp+290h] BYREF
  int v50; // [rsp+438h] [rbp+338h]
  int v51; // [rsp+47Ch] [rbp+37Ch]

  v4 = 0LL;
  v39 = a4;
  *a4 = 0LL;
  v36 = a3;
  v38 = a2;
  if ( *((_DWORD *)this + 24) )
    return (unsigned int)v4;
  v7 = *((_DWORD *)this + 6);
  if ( !v7 )
    return (unsigned int)v4;
  v35 = 0LL;
  Buf2 = v44;
  v8 = 0;
  v41 = v44;
  v42 = 3;
  *(_QWORD *)v43 = 3LL;
  v9 = *((_QWORD *)a2 + 757);
  v37 = v9;
  if ( *((_BYTE *)a2 + 6048) )
  {
    if ( *((_BYTE *)a2 + 6049) )
      v4 = *((_QWORD *)a2 + 417);
    else
      v4 = *(_QWORD *)(v9 + 24);
    v35 = v4;
  }
  v10 = 0;
  v11 = 1;
  v12 = v34;
  while ( 1 )
  {
    v13 = *(_QWORD *)this;
    v14 = 1;
    if ( *(_DWORD *)(*(_QWORD *)this + 16LL * v10 + 8) == 1 )
      goto LABEL_22;
    v15 = 0LL;
    if ( v8 )
    {
      while ( *((_QWORD *)Buf2 + v15) != *(_QWORD *)(v13 + 16LL * v10) )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v8 )
          goto LABEL_10;
      }
      v14 = 0;
    }
LABEL_10:
    LODWORD(v9) = v10 + 1;
    while ( (unsigned int)v9 < *((_DWORD *)this + 6) )
    {
      if ( *(_DWORD *)(v13 + 16LL * (unsigned int)v9 + 8) == 1
        && *(_QWORD *)(v13 + 16LL * v10) == *(_QWORD *)(v13 + 16LL * (unsigned int)v9) )
      {
        v14 = 0;
        break;
      }
      LODWORD(v9) = v9 + 1;
    }
    if ( v14 )
    {
      v34 = *(_QWORD *)(v13 + 16LL * v10);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 224LL))(v34, v15)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v34 + 216LL))(v34, v37, v4) )
      {
        LODWORD(v9) = v43[1];
        v16 = v43[1] + 1;
        if ( v43[1] + 1 >= v43[1] )
          v12 = v43[1] + 1;
        LODWORD(v4) = v16 < v43[1] ? 0x80070216 : 0;
        if ( v16 < v43[1] )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43[1], 0LL, 0, v4, 0xB5u);
        }
        else
        {
          if ( v12 <= v43[0] )
          {
            v8 = v12;
            *((_QWORD *)Buf2 + v43[1]) = v34;
            v43[1] = v12;
            goto LABEL_20;
          }
          v33 = DynArrayImpl<0>::AddMultipleAndSet(&Buf2, 8LL, 1LL, &v34);
          LODWORD(v4) = v33;
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v33, 0xC0u);
        }
        v8 = v43[1];
LABEL_20:
        if ( (int)v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v4, 0x11Au);
          v8 = v43[1];
          goto LABEL_26;
        }
        goto LABEL_21;
      }
      v8 = v43[1];
      v11 = 0;
    }
LABEL_21:
    v7 = *((_DWORD *)this + 6);
LABEL_22:
    if ( ++v10 >= v7 )
      break;
    v4 = v35;
  }
  if ( v8 )
    v11 = 1;
  LODWORD(v4) = 0;
LABEL_26:
  if ( (int)v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v4, 0x8Bu);
LABEL_67:
    DynArrayImpl<1>::~DynArrayImpl<1>(&Buf2);
    return (unsigned int)v4;
  }
  if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 112, a3)
    || *((_DWORD *)this + 52) != v8
    || memcmp_0(*((const void **)this + 23), Buf2, 8LL * v8) )
  {
    ReleaseInterface<CDisplay>((char *)this + 104);
    v8 = v43[1];
  }
  v17 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
  if ( !v17 )
  {
    v19 = 0;
    v45[1] = (struct LightInfo *)v48;
    v20 = (const struct LightInfo *)v48;
    v45[0] = (struct LightInfo *)v48;
    v21 = 0LL;
    v46 = 3;
    v22 = v8 == 0;
    *(_QWORD *)v47 = 3LL;
    v23 = v36;
    if ( v22 )
    {
LABEL_47:
      v28 = CHwLightCollectionBuffer::Create(v20, v19, v11, (struct CHwLightCollectionBuffer **)this + 13);
      LODWORD(v4) = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xAAu);
      }
      else
      {
        *((_OWORD *)this + 7) = *(_OWORD *)v23;
        *((_OWORD *)this + 8) = *((_OWORD *)v23 + 1);
        *((_OWORD *)this + 9) = *((_OWORD *)v23 + 2);
        *((_OWORD *)this + 10) = *((_OWORD *)v23 + 3);
        *((_DWORD *)this + 44) = *((_DWORD *)v23 + 16);
        v30 = (void *)*((_QWORD *)this + 23);
        if ( v30 != *((void **)this + 24) )
        {
          WPF::ProcessHeapImpl::Free(v30);
          *((_QWORD *)this + 23) = 0LL;
        }
        *((_DWORD *)this + 52) = v43[1];
        *((_DWORD *)this + 51) = v43[0];
        v31 = DynArrayImpl<0>::DetachData(&Buf2, 8LL, (char *)this + 184);
        LODWORD(v4) = v31;
        if ( v31 >= 0 )
        {
          DynArrayImpl<1>::~DynArrayImpl<1>(v45);
          v17 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
          goto LABEL_31;
        }
        *(_QWORD *)((char *)this + 204) = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xADu);
      }
    }
    else
    {
      while ( 1 )
      {
        v50 = 0;
        v51 = 0;
        v24 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**((_QWORD **)Buf2 + v21) + 176LL))(
                *((_QWORD *)Buf2 + v21),
                v38,
                v23,
                v49);
        LODWORD(v4) = v24;
        if ( v24 < 0 )
          break;
        v26 = DynArray<LightInfo,0>::AddMultipleAndSet(v45, v49);
        LODWORD(v4) = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xA2u);
          goto LABEL_63;
        }
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v43[1] )
        {
          v19 = v47[1];
          v20 = v45[0];
          goto LABEL_47;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xA0u);
    }
LABEL_63:
    DynArrayImpl<1>::~DynArrayImpl<1>(v45);
    goto LABEL_67;
  }
LABEL_31:
  *v39 = v17;
  if ( Buf2 != v41 )
    WPF::ProcessHeapImpl::Free(Buf2);
  return (unsigned int)v4;
}
