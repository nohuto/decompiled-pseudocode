/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801EF508
 * Callers:
 *     ?GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801EF75C (-GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositor.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18004CF4C (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        unsigned __int64 a2,
        struct CD2DPrimitiveProperties **a3)
{
  int v4; // ebx
  char v5; // r14
  struct CD2DPrimitiveProperties *v6; // rcx
  __int64 v7; // r9
  struct CD2DPrimitiveProperties **v8; // r15
  unsigned __int64 v9; // r10
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  CD2DContext *v13; // rbx
  __int64 v14; // rcx
  struct CD2DPrimitiveProperties *v15; // r10
  unsigned int v16; // eax
  unsigned int v17; // edx
  signed int v18; // eax
  unsigned int v19; // eax
  signed int v20; // eax
  unsigned int v21; // r9d
  struct CD2DPrimitiveProperties *v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-10h]
  struct CD2DPrimitiveProperties *v25; // [rsp+60h] [rbp+30h] BYREF
  CPrimitiveColor *v26; // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v25 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a3;
  v9 = a2;
  if ( *((_DWORD *)this + 22) )
  {
    a3 = (struct CD2DPrimitiveProperties **)*((_QWORD *)this + 8);
    while ( 1 )
    {
      a2 = (unsigned __int64)a3[v7];
      if ( v9 == *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL) )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 22) )
        goto LABEL_7;
    }
    v6 = a3[v7];
  }
LABEL_7:
  v25 = v6;
  if ( v6 )
    goto LABEL_24;
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, struct CD2DPrimitiveProperties **, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v9 + 240LL))(
          v9,
          &v25,
          a3,
          v7);
  v4 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)v25 + 13);
    v13 = *(CD2DContext **)(*((_QWORD *)v25 + 3) + 24LL);
    CD2DContext::EnsureBeginDraw(v13);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(**((_QWORD **)v13 + 30) + 48LL))(
      *((_QWORD **)v13 + 30),
      v12,
      (char *)this + 112);
    v15 = v25;
    v26 = this;
    v16 = *((_DWORD *)v25 + 20);
    v17 = v16 + 1;
    if ( v16 + 1 >= v16 )
    {
      if ( v17 <= *((_DWORD *)v25 + 19) )
      {
        v11 = *((unsigned int *)v25 + 20);
        *(_QWORD *)(*((_QWORD *)v25 + 7) + 8 * v11) = v26;
        *((_DWORD *)v15 + 20) = v17;
        goto LABEL_16;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25 + 56, 8, 1, &v26);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v18, 0xC3u, 0LL);
    }
    else
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v4 < 0 )
    {
      v24 = 121;
LABEL_26:
      v21 = v4;
      goto LABEL_29;
    }
LABEL_16:
    v19 = *((_DWORD *)this + 22);
    v5 = 1;
    a2 = v19 + 1;
    if ( (unsigned int)a2 >= v19 )
    {
      if ( (unsigned int)a2 <= *((_DWORD *)this + 21) )
      {
        v4 = 0;
        *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * *((unsigned int *)this + 22)) = v25;
        *((_DWORD *)this + 22) = a2;
LABEL_23:
        v6 = v25;
LABEL_24:
        (*(void (__fastcall **)(struct CD2DPrimitiveProperties *, unsigned __int64, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v6 + 8LL))(
          v6,
          a2,
          a3,
          v7);
        *v8 = v25;
        return (unsigned int)v4;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8, 1, &v25);
      v4 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v20, 0xC3u, 0LL);
    }
    else
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v4 >= 0 )
      goto LABEL_23;
    v24 = 125;
    goto LABEL_26;
  }
  v21 = v10;
  v24 = 115;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v21, v24, 0LL);
  v22 = v25;
  if ( v25 )
  {
    if ( v5 )
    {
      CD2DResource::RemoveResourceNotifier((struct CD2DPrimitiveProperties *)((char *)v25 + 16), this);
      v22 = v25;
    }
    if ( v22 )
      (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v4;
}
