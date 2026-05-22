/*
 * XREFs of ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x1800DC1D4
 * Callers:
 *     ?InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z @ 0x18016622C (-InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_bef6160119932037be51d1ebe66c9222_::operator() @ 0x1800DBF98 (_lambda_bef6160119932037be51d1ebe66c9222_--operator().c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800DD640 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetHandedness(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        enum SpatialInteractionDevices::Handedness *a3)
{
  unsigned int updated; // ebx
  __int64 v5; // rdx
  char *v6; // rbx
  size_t v7; // rax
  void *v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r14d
  SpatialInteractionDevices *v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  __int16 v15; // r11
  unsigned int v16; // r9d
  __int16 v18; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-4Ch] BYREF
  _QWORD v20[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v21[7]; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  SpatialInteractionDevices *v23; // [rsp+B0h] [rbp+40h] BYREF
  char v24; // [rsp+C0h] [rbp+50h] BYREF
  __int16 v25; // [rsp+C8h] [rbp+58h] BYREF

  v23 = this;
  v20[1] = -2LL;
  if ( !this )
  {
    updated = -2147024809;
    v5 = 825LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)updated);
    return updated;
  }
  if ( !a2 )
  {
    updated = -2147467261;
    v5 = 826LL;
    goto LABEL_3;
  }
  *(_DWORD *)a2 = 0;
  v6 = (char *)this + 280;
  v24 = 1;
  v25 = 0;
  v18 = 0;
  v19 = *((unsigned __int16 *)this + 61);
  v7 = 2LL * *((unsigned __int16 *)this + 61);
  if ( !is_mul_ok(*((unsigned __int16 *)this + 61), 2uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v20[0] = v8;
  v21[0] = &v24;
  v21[1] = &v25;
  v21[2] = &v18;
  v21[3] = &v19;
  v21[4] = &v23;
  v21[5] = v20;
  v21[6] = v6;
  v11 = 0;
  v12 = v23;
  if ( *((_DWORD *)v23 + 50) )
  {
    while ( 1 )
    {
      v13 = *((_QWORD *)v12 + 24);
      LOBYTE(v9) = *(_BYTE *)(v13 + 72LL * v11 + 2);
      updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(v12, v9, v10);
      if ( (updated & 0x80000000) != 0 )
        goto LABEL_29;
      v14 = lambda_bef6160119932037be51d1ebe66c9222_::operator()(
              (__int64)v21,
              *(_WORD *)(v13 + 72LL * v11),
              *(_WORD *)(v13 + 72LL * v11 + 6));
      updated = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x357,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v14);
LABEL_29:
        v8 = (void *)v20[0];
        goto LABEL_24;
      }
      v10 = 0LL;
      v8 = (void *)v20[0];
      if ( v19 )
        break;
LABEL_22:
      ++v11;
      v12 = v23;
      if ( v11 >= *((_DWORD *)v23 + 50) )
        goto LABEL_23;
    }
    v15 = *(_WORD *)(v13 + 72LL * v11 + 56);
    while ( *(_WORD *)(v20[0] + 2LL * (unsigned int)v10) != v15 )
    {
LABEL_21:
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v19 )
        goto LABEL_22;
    }
    v16 = 0;
    v9 = &unk_18017BC64;
    while ( *(v9 - 2) != *(_WORD *)(v13 + 72LL * v11 + 10)
         || *(v9 - 1) != *(_WORD *)(v13 + 72LL * v11 + 8)
         || *v9 != *(_WORD *)(v13 + 72LL * v11)
         || *(_BYTE *)(v13 + 72LL * v11 + 12)
         || v9[1] != v15 )
    {
      ++v16;
      v9 += 12;
      if ( v16 >= 4 )
        goto LABEL_21;
    }
    *(_DWORD *)a2 = *((_DWORD *)v9 + 1);
  }
LABEL_23:
  updated = 0;
LABEL_24:
  if ( v8 )
    operator delete(v8, (const struct std::nothrow_t *)v9);
  return updated;
}
