/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18008D750
 * Callers:
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180047B10 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180263220 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18008DC80 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18008FB00 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180090540 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180090988 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18015F9E0 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(
        CBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  unsigned int v2; // ebx
  const struct FastRegion::Internal::CRgnData *v5; // rdi
  const struct FastRegion::Internal::CRgnData **v6; // rbx
  const struct FastRegion::Internal::CRgnData *v7; // rbp
  int v8; // eax
  FastRegion::Internal::CRgnData *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  __int64 v13; // rax
  FastRegion::Internal::CRgnData *v15; // rax
  int v16; // [rsp+30h] [rbp-138h] BYREF
  void *lpMem; // [rsp+38h] [rbp-130h]
  _BYTE v18[256]; // [rsp+40h] [rbp-128h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 184) )
    goto LABEL_8;
  v5 = *a2;
  v6 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 192);
  if ( !*(_DWORD *)*a2 )
  {
    v2 = 0;
    goto LABEL_8;
  }
  v7 = *v6;
  if ( *(_DWORD *)*v6 )
  {
    v8 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v6, *a2);
    v9 = (FastRegion::Internal::CRgnData *)v18;
    lpMem = v18;
    v16 = v8;
    if ( (unsigned __int64)v8 > 0x100 )
    {
      v15 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v8);
      v9 = v15;
      if ( !v15 )
      {
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v16);
        v2 = -2147024882;
        v12 = -2147024882;
        goto LABEL_17;
      }
      v5 = *a2;
      v7 = *v6;
      lpMem = v15;
    }
    FastRegion::Internal::CRgnData::Union(v9, v7, v5);
    v10 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)v6, (struct FastRegion::Internal::CWorkBuffer *)&v16);
    v11 = (unsigned int)lpMem;
    v12 = v10;
    if ( v18 != lpMem )
      operator delete(lpMem);
  }
  else
  {
    v12 = FastRegion::CRegion::Copy((CBitmapRealization *)((char *)this + 192), (const struct CRegion *)a2);
  }
  v2 = v12;
  if ( v12 < 0 )
  {
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x54u, 0LL);
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 128LL))(this);
    return v2;
  }
LABEL_8:
  v13 = *((_QWORD *)this + 33);
  if ( v13 )
    *(_BYTE *)(v13 + 205) = 0;
  (*(void (__fastcall **)(char *, const struct FastRegion::Internal::CRgnData **))(*((_QWORD *)this - 16) + 32LL))(
    (char *)this - 128,
    a2);
  return v2;
}
