/*
 * XREFs of ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18003D414
 * Callers:
 *     ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x18003D3D0 (--_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x1800170E8 (--1CResourceProxy@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(CImageLegacyMilBrushProxy *this)
{
  __int64 v1; // rdx
  _QWORD v3[2]; // [rsp+90h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+A0h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CImageLegacyMilBrushProxy::`vftable';
  v3[0] = 0LL;
  v3[1] = 0LL;
  v4[0] = 0LL;
  v4[1] = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD *, _QWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v1 + 16) + 1112LL))(
    *(_QWORD *)(v1 + 16),
    *(unsigned int *)(v1 + 24),
    v3,
    v4,
    v3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
}
