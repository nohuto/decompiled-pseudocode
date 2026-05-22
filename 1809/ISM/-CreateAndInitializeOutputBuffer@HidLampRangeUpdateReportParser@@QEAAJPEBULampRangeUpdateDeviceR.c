/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180080B3C
 * Callers:
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18007A63C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x18007E248 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18007E2A4 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x18007E304 (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        __int64 a2,
        char *a3,
        _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  int inserted; // eax
  unsigned __int8 *v14; // r9
  unsigned int v15; // esi
  __int64 v16; // rdx
  unsigned __int8 *v17; // r9
  const struct std::nothrow_t *v18; // rdx
  unsigned __int8 *v19; // r9
  const struct std::nothrow_t *v20; // rdx
  void *v21; // rcx
  unsigned __int8 *v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v24; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(a2 + 8) )
  {
    v8 = -2147024809;
    v9 = 118LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)v8);
    return v8;
  }
  v11 = (unsigned __int8 *)operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    v9 = 121LL;
    goto LABEL_3;
  }
  memset_0(v11, 0, *(unsigned int *)(a1 + 20));
  *v12 = *(_BYTE *)(a1 + 16);
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 24),
               *(_DWORD *)a2,
               *(unsigned int *)(a1 + 20),
               v12);
  v15 = inserted;
  if ( inserted < 0 )
  {
    v16 = 128LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)(unsigned int)inserted);
    operator delete(v12, v20);
    return v15;
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 96),
               *(_DWORD *)(a2 + 4),
               *(unsigned int *)(a1 + 20),
               v14);
  v15 = inserted;
  if ( inserted < 0 )
  {
    v16 = 129LL;
    goto LABEL_24;
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 168),
               *(_DWORD *)(a2 + 8),
               *(unsigned int *)(a1 + 20),
               v17);
  v15 = inserted;
  if ( inserted < 0 )
  {
    v16 = 130LL;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 528) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 240),
                 *(_BYTE *)(a2 + 12),
                 *(unsigned int *)(a1 + 20),
                 v19);
    v15 = inserted;
    if ( inserted < 0 )
    {
      v16 = 136LL;
      goto LABEL_24;
    }
  }
  if ( *(_BYTE *)(a1 + 529) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 312),
                 *(_BYTE *)(a2 + 13),
                 *(unsigned int *)(a1 + 20),
                 v12);
    v15 = inserted;
    if ( inserted < 0 )
    {
      v16 = 141LL;
      goto LABEL_24;
    }
  }
  if ( *(_BYTE *)(a1 + 530) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 384),
                 *(_BYTE *)(a2 + 14),
                 *(unsigned int *)(a1 + 20),
                 v12);
    v15 = inserted;
    if ( inserted < 0 )
    {
      v16 = 146LL;
      goto LABEL_24;
    }
  }
  if ( *(_BYTE *)(a1 + 531) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 456),
                 *(_BYTE *)(a2 + 15),
                 *(unsigned int *)(a1 + 20),
                 v12);
    v15 = inserted;
    if ( inserted < 0 )
    {
      v16 = 151LL;
      goto LABEL_24;
    }
  }
  if ( a3 != &v24 )
  {
    v21 = *(void **)a3;
    v22 = v12;
    v12 = 0LL;
    *(_QWORD *)a3 = v22;
    if ( v21 )
      operator delete(v21, v18);
  }
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v12 )
    operator delete(v12, v18);
  return 0LL;
}
