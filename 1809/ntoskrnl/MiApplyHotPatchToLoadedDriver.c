/*
 * XREFs of MiApplyHotPatchToLoadedDriver @ 0x140855628
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140855584 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140682C2C (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x1406832A4 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 *     MiBackSingleImageWithPagefile @ 0x14070E700 (MiBackSingleImageWithPagefile.c)
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 */

NTSTATUS __fastcall MiApplyHotPatchToLoadedDriver(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  char v6; // r15
  NTSTATUS result; // eax
  PVOID v8; // rbx
  void *v9; // rsi
  __int64 *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 SystemAddressForImage; // r13
  int active; // edi
  int v15; // r14d
  unsigned __int64 v16; // rax
  int v17; // r13d
  int v18; // [rsp+30h] [rbp-40h] BYREF
  PVOID P; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v22; // [rsp+60h] [rbp-10h] BYREF
  _DWORD *v24; // [rsp+C8h] [rbp+58h] BYREF

  v6 = 0;
  result = MiGenerateSystemImageNames(a2, 0LL, 0LL, &v21, &v22, &String1);
  if ( result >= 0 )
  {
    result = MiObtainSectionForDriver(&String1, (__int64)a2, a3, 0x40000000u, (__int64 *)&P);
    if ( result == 272 )
    {
      if ( (*((_DWORD *)P + 49) & 0x20) == 0 )
        return 272;
      if ( *((_QWORD *)P + 35) == a1 )
        return MiApplyDriverHotPatch((unsigned __int64)P, a1);
      return -1073741791;
    }
    if ( result < 0 )
      return result;
    v8 = P;
    v9 = (void *)*((_QWORD *)P + 14);
    if ( !v9 )
    {
      ExFreePoolWithTag(P, 0);
      return -1073741792;
    }
    v10 = (__int64 *)MiSectionControlArea(*((_QWORD *)P + 14));
    v11 = *(_DWORD *)(*v10 + 8);
    *((_DWORD *)v8 + 16) = v11 << 12;
    LODWORD(v24) = v11;
    SystemAddressForImage = MiGetSystemAddressForImage(v12, 0, &v18);
    if ( !SystemAddressForImage )
    {
      ObDereferenceObjectDeferDelete(v9);
      ExFreePoolWithTag(v8, 0);
      return -1073741670;
    }
    MiCheckPurgeAndUpMapCount((__int64)v10);
    *((_QWORD *)v8 + 6) = SystemAddressForImage;
    v15 = MiControlAreaRequiresCharge((__int64)v10);
    if ( !v15 )
    {
      active = -1073740277;
      goto LABEL_15;
    }
    if ( v15 == 2 )
    {
      active = MiReferenceActiveSubsection(v10 + 16, 136, 0x11u);
      if ( active < 0 )
      {
        v15 = 1;
LABEL_15:
        if ( v8 )
        {
          if ( v15 == 2 && (v6 & 4) == 0 )
          {
            v16 = MiSectionControlArea(*((_QWORD *)v8 + 14));
            MiReturnCrossPartitionControlAreaCharges(v16);
          }
          MiUnloadSystemImage((__int64)v8, v6);
        }
        return active;
      }
    }
    active = MiMapSystemImage((__int64)v9, SystemAddressForImage);
    if ( active < 0 )
      goto LABEL_15;
    _InterlockedExchangeAdd(&dword_14043C0F8, (unsigned int)v24);
    v8 = P;
    v17 = v18;
    v6 = 1;
    active = MiConstructLoaderEntry((__int64)P, (const void **)&v21, (const void **)&String1, 0, v18, &v24);
    if ( active < 0 )
      goto LABEL_15;
    ExFreePoolWithTag(v8, 0);
    v8 = v24;
    v6 = 5;
    if ( v15 == 2 )
      v24[49] = v24[49] & 0x7F | 0x80;
    if ( !v17 )
      MiBackSingleImageWithPagefile((__int64)v8);
    active = MiHandleDriverNonPagedSections((__int64)v8, 0, 1);
    if ( active < 0 )
      goto LABEL_15;
    active = MiApplyDriverHotPatch((unsigned __int64)v8, a1);
    if ( active < 0 )
      goto LABEL_15;
    if ( (MiFlags & 0x80000) != 0 )
      *((_DWORD *)v8 + 26) |= 0x2100u;
    MiDriverLoadSucceeded((__int64)v8, (__int64)v9, a2, (__int64)&String1, (__int64)&v21, 1);
    return 0;
  }
  return result;
}
