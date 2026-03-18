/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180197420
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801979D0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CFilterEffect@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18019730C (-CreateResource@CFilterEffect@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801E3DE0 (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DEffect **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // rdi
  char v5; // r15
  __int64 v6; // r9
  __int64 v9; // r8
  struct CD2DEffect *v10; // rax
  int DefaultDevice; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct CD2DEffect *v15; // r10
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // r9d
  struct CD2DEffect *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-10h]
  struct CD2DEffect *v26; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v27; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v27 = 0LL;
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_7;
  while ( 1 )
  {
    v9 = *((_QWORD *)a1 + 2);
    if ( !a2 || a2 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v6) + 24LL) + 24LL) )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
      goto LABEL_7;
  }
  v10 = *(struct CD2DEffect **)(v9 + 8 * v6);
  v26 = v10;
  if ( !v10 )
  {
LABEL_7:
    if ( !a2 )
    {
      DefaultDevice = FindDefaultDevice(&v27);
      v3 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, DefaultDevice, 0x4Fu);
        v4 = v27;
LABEL_33:
        v23 = v26;
        goto LABEL_34;
      }
      v4 = v27;
      a2 = v27;
    }
    v13 = CFilterEffect::CreateResource(*((CFilterEffect **)a1 + 1), a2, &v26);
    v3 = v13;
    if ( v13 < 0 )
    {
      v25 = 83;
      v22 = v13;
      goto LABEL_32;
    }
    v15 = v26;
    v27 = a1;
    v16 = *((_DWORD *)v26 + 20);
    v17 = v16 + 1;
    v3 = v16 + 1 < v16 ? 0x80070216 : 0;
    if ( v16 + 1 < v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0xB5u);
    }
    else if ( v17 > *((_DWORD *)v26 + 19) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v26 + 56, 8, 1, &v27);
      v3 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v18, 0xC0u);
    }
    else
    {
      v14 = v16;
      *(_QWORD *)(*((_QWORD *)v26 + 7) + 8LL * v16) = v27;
      *((_DWORD *)v15 + 20) = v17;
    }
    if ( v3 < 0 )
    {
      v25 = 85;
      goto LABEL_27;
    }
    v19 = *((_DWORD *)a1 + 10);
    v5 = 1;
    v20 = v19 + 1;
    v3 = v19 + 1 < v19 ? 0x80070216 : 0;
    if ( v19 + 1 < v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0xB5u);
    }
    else if ( v20 > *((_DWORD *)a1 + 9) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8, 1, &v26);
      v3 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v21, 0xC0u);
    }
    else
    {
      v14 = v19;
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v19) = v26;
      *((_DWORD *)a1 + 10) = v20;
    }
    if ( v3 < 0 )
    {
      v25 = 88;
LABEL_27:
      v22 = v3;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v22, v25);
      goto LABEL_33;
    }
    v10 = v26;
  }
  v23 = 0LL;
  *a3 = v10;
  v26 = 0LL;
LABEL_34:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v23 )
        goto LABEL_40;
      CD2DResource::RemoveResourceNotifier((struct CD2DEffect *)((char *)v23 + 16), a1);
      v23 = v26;
    }
  }
  if ( v23 )
    (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_40:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
