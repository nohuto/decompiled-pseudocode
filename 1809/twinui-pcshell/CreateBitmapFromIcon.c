/*
 * XREFs of CreateBitmapFromIcon @ 0x1802E72E4
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1802E65F8 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     HIMAGELIST_QueryInterface @ 0x1800E4824 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Create @ 0x1800E488C (ImageList_Create.c)
 *     ImageList_Destroy @ 0x1800E48F0 (ImageList_Destroy.c)
 *     ImageList_ReplaceIcon @ 0x1800E4940 (ImageList_ReplaceIcon.c)
 *     ?Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z @ 0x1802E6534 (-Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall CreateBitmapFromIcon(HICON hicon, __int64 a2, void **a3, const struct tagSIZE *a4, _QWORD *a5)
{
  int v6; // r12d
  HRESULT v8; // ebx
  HDC CompatibleDC; // rax
  HDC v10; // rsi
  HGDIOBJ v11; // rax
  UINT v12; // r8d
  int v13; // r9d
  struct _IMAGELIST *v14; // rax
  int v15; // edx
  struct _IMAGELIST *v16; // r14
  const IID *v17; // rdx
  void *v18; // rcx
  HGDIOBJ v19; // rax
  int v21; // [rsp+20h] [rbp-91h]
  void *ppv; // [rsp+30h] [rbp-81h] BYREF
  HGDIOBJ h; // [rsp+38h] [rbp-79h] BYREF
  HGDIOBJ v24; // [rsp+40h] [rbp-71h]
  int v25; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-59h] BYREF
  int v27; // [rsp+60h] [rbp-51h]
  HDC v28; // [rsp+68h] [rbp-49h]
  LONG cx; // [rsp+78h] [rbp-39h]
  LONG cy; // [rsp+7Ch] [rbp-35h]
  int v31; // [rsp+88h] [rbp-29h]
  int v32; // [rsp+8Ch] [rbp-25h]
  int v33; // [rsp+90h] [rbp-21h]
  _DWORD v34[4]; // [rsp+B0h] [rbp-1h] BYREF

  v6 = 0;
  *a5 = 0LL;
  v8 = Create32BitHBITMAP((HDC)hicon, a4, a3, (HBITMAP *)&h);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = -2147467259;
  CompatibleDC = CreateCompatibleDC(0LL);
  v10 = CompatibleDC;
  if ( !CompatibleDC )
  {
LABEL_19:
    DeleteObject(h);
    *a5 = 0LL;
    return (unsigned int)v8;
  }
  v11 = SelectObject(CompatibleDC, h);
  v34[0] = 0;
  v34[1] = 0;
  v24 = v11;
  v34[2] = a4->cx;
  v34[3] = a4->cy;
  SHFillRectClr(v10, v34, 0xFFFFFFFFLL);
  ppv = 0LL;
  if ( hicon )
  {
    v8 = -2147024882;
    v14 = ImageList_Create(a4->cx, a4->cy, v12, v13, v21);
    v16 = v14;
    if ( !v14 )
      goto LABEL_13;
    v6 = ImageList_ReplaceIcon(v14, v15, hicon);
    if ( v6 != -1 )
      v8 = HIMAGELIST_QueryInterface(v16, v17, &ppv);
    ImageList_Destroy(v16);
  }
  else
  {
    v8 = SHGetImageList(-1, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, &ppv);
    if ( v8 < 0 )
      goto LABEL_13;
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppv + 256LL))(
           ppv,
           (unsigned int)a4->cx,
           (unsigned int)a4->cy);
    if ( v8 < 0 )
      goto LABEL_13;
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppv + 296LL))(ppv, 0LL, 0LL);
  }
  if ( v8 >= 0 )
  {
    v25 = 88;
    memset_0(v26, 0, 0x50uLL);
    cx = a4->cx;
    cy = a4->cy;
    v31 = -16777216;
    v32 = -16777216;
    v27 = v6 & 0xFFFFFF;
    v28 = v10;
    v33 = 327681;
    v8 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppv + 64LL))(ppv, &v25);
  }
LABEL_13:
  v18 = ppv;
  ppv = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = SelectObject(v10, v24);
  *a5 = v19;
  if ( v8 >= 0 && !v19 )
    v8 = -2147467259;
  DeleteDC(v10);
  if ( v8 < 0 )
    goto LABEL_19;
  return (unsigned int)v8;
}
