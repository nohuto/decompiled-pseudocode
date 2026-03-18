/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18000790C
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180007CB8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x180015AC0 (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18003D0E0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800AF460 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F01FF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // r12d
  unsigned int i; // ecx
  bool v12; // r13
  __int64 v13; // r8
  char v14; // r11
  __int64 v15; // rdx
  struct CHwLightCollectionBuffer *v16; // rax
  unsigned int v18; // edx
  const struct LightInfo *v19; // rcx
  __int64 v20; // r15
  bool v21; // zf
  const struct CMILMatrix *v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  void *v29; // rcx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  const struct CMILMatrix *v34; // [rsp+38h] [rbp-C8h]
  struct CVisual *CurrentVisual; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  struct CDrawingContext *v37; // [rsp+50h] [rbp-B0h]
  struct CHwLightCollectionBuffer **v38; // [rsp+58h] [rbp-A8h]
  void *Buf2; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+70h] [rbp-90h]
  unsigned int v42[3]; // [rsp+74h] [rbp-8Ch]
  _BYTE v43[32]; // [rsp+80h] [rbp-80h] BYREF
  struct LightInfo *v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+B0h] [rbp-50h]
  unsigned int v46[2]; // [rsp+B4h] [rbp-4Ch]
  _BYTE v47[720]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v48[168]; // [rsp+390h] [rbp+290h] BYREF
  int v49; // [rsp+438h] [rbp+338h]
  int v50; // [rsp+47Ch] [rbp+37Ch]

  v4 = 0;
  v38 = a4;
  *a4 = 0LL;
  v34 = a3;
  v37 = a2;
  if ( *((_DWORD *)this + 24) )
    return (unsigned int)v4;
  v7 = *((_DWORD *)this + 6);
  if ( !v7 )
    return (unsigned int)v4;
  v8 = 0;
  Buf2 = v43;
  v40 = v43;
  v9 = *((_QWORD *)a2 + 757);
  v36 = v9;
  v41 = 3;
  *(_QWORD *)v42 = 3LL;
  v10 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v12 = 1;
  do
  {
    v13 = *(_QWORD *)this;
    v14 = 1;
    if ( *(_DWORD *)(*(_QWORD *)this + 16LL * v10 + 8) == 1 )
      goto LABEL_15;
    v15 = 0LL;
    if ( v8 )
    {
      while ( *((_QWORD *)Buf2 + v15) != *(_QWORD *)(v13 + 16LL * v10) )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v8 )
          goto LABEL_6;
      }
      v14 = 0;
    }
LABEL_6:
    for ( i = v10 + 1; i < *((_DWORD *)this + 6); ++i )
    {
      if ( *(_DWORD *)(v13 + 16LL * i + 8) == 1 && *(_QWORD *)(v13 + 16LL * v10) == *(_QWORD *)(v13 + 16LL * i) )
      {
        v14 = 0;
        break;
      }
    }
    if ( v14 )
    {
      v33 = *(_QWORD *)(v13 + 16LL * v10);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 264LL))(v33, v15)
        || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, struct CVisual *))(*(_QWORD *)v33 + 256LL))(
              v33,
              v9,
              CurrentVisual) )
      {
        v12 = 0;
      }
      else
      {
        v8 = v42[1] + 1;
        if ( v42[1] + 1 < v42[1] )
        {
          v4 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(i, 0LL, 0, -2147024362, 0xB8u, 0LL);
        }
        else
        {
          if ( v8 <= v42[0] )
          {
            i = v42[1];
            *((_QWORD *)Buf2 + v42[1]) = v33;
            v42[1] = v8;
            goto LABEL_14;
          }
          v32 = DynArrayImpl<0>::AddMultipleAndSet(&Buf2, 8LL, 1LL, &v33);
          v4 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(i, 0LL, 0, v32, 0xC3u, 0LL);
        }
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(i, 0LL, 0, v4, 0x11Au, 0LL);
          v8 = v42[1];
          goto LABEL_19;
        }
        v9 = v36;
      }
      v8 = v42[1];
    }
LABEL_14:
    v7 = *((_DWORD *)this + 6);
LABEL_15:
    ++v10;
  }
  while ( v10 < v7 );
  if ( v8 )
    v12 = 1;
  v4 = 0;
LABEL_19:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(i, 0LL, 0, v4, 0x8Bu, 0LL);
LABEL_60:
    DynArrayImpl<0>::~DynArrayImpl<0>(&Buf2);
    return (unsigned int)v4;
  }
  if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 112, a3)
    || *((_DWORD *)this + 52) != v8
    || memcmp_0(*((const void **)this + 23), Buf2, 8LL * v8) )
  {
    ReleaseInterface<CDisplay>((char *)this + 104);
    v8 = v42[1];
  }
  v16 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
  if ( !v16 )
  {
    v18 = 0;
    v44[1] = (struct LightInfo *)v47;
    v19 = (const struct LightInfo *)v47;
    v44[0] = (struct LightInfo *)v47;
    v20 = 0LL;
    v45 = 3;
    v21 = v8 == 0;
    *(_QWORD *)v46 = 3LL;
    v22 = v34;
    if ( v21 )
    {
LABEL_39:
      v27 = CHwLightCollectionBuffer::Create(v19, v18, v12, (struct CHwLightCollectionBuffer **)this + 13);
      v4 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xAAu, 0LL);
      }
      else
      {
        *((_OWORD *)this + 7) = *(_OWORD *)v22;
        *((_OWORD *)this + 8) = *((_OWORD *)v22 + 1);
        *((_OWORD *)this + 9) = *((_OWORD *)v22 + 2);
        *((_OWORD *)this + 10) = *((_OWORD *)v22 + 3);
        *((_DWORD *)this + 44) = *((_DWORD *)v22 + 16);
        v29 = (void *)*((_QWORD *)this + 23);
        if ( v29 != *((void **)this + 24) )
        {
          operator delete(v29);
          *((_QWORD *)this + 23) = 0LL;
        }
        *((_DWORD *)this + 52) = v42[1];
        *((_DWORD *)this + 51) = v42[0];
        v30 = DynArrayImpl<0>::DetachData(&Buf2, 8LL, (char *)this + 184);
        v4 = v30;
        if ( v30 >= 0 )
        {
          DynArrayImpl<0>::~DynArrayImpl<0>(v44);
          v16 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
          goto LABEL_24;
        }
        *(_QWORD *)((char *)this + 204) = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xADu, 0LL);
      }
    }
    else
    {
      while ( 1 )
      {
        v49 = 0;
        v50 = 0;
        v23 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**((_QWORD **)Buf2 + v20) + 216LL))(
                *((_QWORD *)Buf2 + v20),
                v37,
                v22,
                v48);
        v4 = v23;
        if ( v23 < 0 )
          break;
        v25 = DynArray<LightInfo,0>::AddMultipleAndSet(v44, v48);
        v4 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xA2u, 0LL);
          goto LABEL_56;
        }
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v42[1] )
        {
          v18 = v46[1];
          v19 = v44[0];
          goto LABEL_39;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xA0u, 0LL);
    }
LABEL_56:
    DynArrayImpl<0>::~DynArrayImpl<0>(v44);
    goto LABEL_60;
  }
LABEL_24:
  *v38 = v16;
  if ( Buf2 != v40 )
    operator delete(Buf2);
  return (unsigned int)v4;
}
