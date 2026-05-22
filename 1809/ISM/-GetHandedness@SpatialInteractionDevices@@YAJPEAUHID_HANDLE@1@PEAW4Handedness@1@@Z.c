/*
 * XREFs of ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x1800A5670
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801253B0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800A4EE4 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetHandedness(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        enum SpatialInteractionDevices::Handedness *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  USHORT *v10; // rbx
  unsigned int i; // r13d
  __int64 v12; // r14
  int updated; // edi
  USHORT v14; // di
  USAGE v15; // r15
  NTSTATUS Usages; // eax
  __int16 v17; // r10
  unsigned int v18; // r8d
  _WORD *v19; // rcx
  ULONG UsageLength; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  USHORT *v22; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char v24; // [rsp+A0h] [rbp+8h]
  USAGE v25; // [rsp+B0h] [rbp+18h]
  USHORT v26; // [rsp+B8h] [rbp+20h]

  v21 = -2LL;
  if ( !this )
  {
    v5 = -2147024809;
    v6 = 825LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 826LL;
    goto LABEL_3;
  }
  *(_DWORD *)a2 = 0;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  UsageLength = *((unsigned __int16 *)this + 61);
  v8 = 2LL * *((unsigned __int16 *)this + 61);
  if ( !is_mul_ok(*((unsigned __int16 *)this + 61), 2uLL) )
    v8 = -1LL;
  v10 = (USHORT *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v10;
  for ( i = 0; i < *((_DWORD *)this + 50); ++i )
  {
    v12 = *((_QWORD *)this + 24);
    LOBYTE(v9) = *(_BYTE *)(v12 + 72LL * i + 2);
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)this, v9);
    if ( updated < 0 )
      goto LABEL_31;
    v14 = *(_WORD *)(v12 + 72LL * i + 6);
    v15 = *(_WORD *)(v12 + 72LL * i);
    if ( v24 || v25 != v15 || v26 != v14 )
    {
      UsageLength = *((unsigned __int16 *)this + 61);
      Usages = HidP_GetUsages(
                 HidP_Feature,
                 v15,
                 v14,
                 v10,
                 &UsageLength,
                 *((PHIDP_PREPARSED_DATA *)this + 7),
                 *((PCHAR *)this + 36),
                 *((_DWORD *)this + 70));
      if ( Usages < 0 )
      {
        updated = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x34B,
                    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                    (const char *)(unsigned int)Usages);
        goto LABEL_17;
      }
      v24 = 0;
      v25 = v15;
      v26 = v14;
    }
    updated = 0;
LABEL_17:
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x357,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_31;
    }
    v9 = 0LL;
    if ( UsageLength )
    {
      v17 = *(_WORD *)(v12 + 72LL * i + 56);
      while ( v10[(unsigned int)v9] != v17 )
      {
LABEL_28:
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= UsageLength )
          goto LABEL_29;
      }
      v18 = 0;
      v19 = &unk_180144EE4;
      while ( *(v19 - 2) != *(_WORD *)(v12 + 72LL * i + 10)
           || *(v19 - 1) != *(_WORD *)(v12 + 72LL * i + 8)
           || *v19 != *(_WORD *)(v12 + 72LL * i)
           || *(_BYTE *)(v12 + 72LL * i + 12)
           || v19[1] != v17 )
      {
        ++v18;
        v19 += 12;
        if ( v18 >= 4 )
          goto LABEL_28;
      }
      *(_DWORD *)a2 = *((_DWORD *)v19 + 1);
      break;
    }
LABEL_29:
    ;
  }
  updated = 0;
LABEL_31:
  if ( v10 )
    operator delete(v10, (const struct std::nothrow_t *)v9);
  return (unsigned int)updated;
}
