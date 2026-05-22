/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18007FDF8
 * Callers:
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x18007A448 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x18007E248 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18007E2A4 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x18007E304 (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        __int64 a2,
        char *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rbp
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int inserted; // eax
  unsigned __int8 *v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  const struct std::nothrow_t *v17; // rdx
  int v18; // r12d
  __int64 v19; // rsi
  int v20; // ebp
  unsigned __int8 *v21; // r9
  __int64 v22; // rdx
  void *v23; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v26; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v4 = a4;
  if ( !*(_QWORD *)(a2 + 8)
    || !*(_QWORD *)(a2 + 16) && *(_BYTE *)(a1 + 324)
    || !*(_QWORD *)(a2 + 24) && *(_BYTE *)(a1 + 325)
    || !*(_QWORD *)(a2 + 32) && *(_BYTE *)(a1 + 326)
    || !*(_QWORD *)(a2 + 40) && *(_BYTE *)(a1 + 327) )
  {
    v10 = -2147024809;
    v11 = 115LL;
    goto LABEL_44;
  }
  v8 = (unsigned __int8 *)operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    v11 = 118LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)v10);
    return v10;
  }
  memset_0(v8, 0, *(unsigned int *)(a1 + 20));
  *v9 = *(_BYTE *)(a1 + 16);
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 24),
               *(_DWORD *)a2,
               *(unsigned int *)(a1 + 20),
               v9);
  v14 = inserted;
  if ( inserted < 0 )
  {
    v15 = 125LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)inserted);
LABEL_42:
    operator delete(v9, v17);
    return v14;
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 96),
               *(_DWORD *)(a2 + 4),
               *(unsigned int *)(a1 + 20),
               v13);
  v14 = inserted;
  if ( inserted < 0 )
  {
    v15 = 126LL;
    goto LABEL_16;
  }
  v18 = 0;
  if ( *(int *)a2 > 0 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      v20 = HidChannelValueInfo::InsertValue(
              (HidChannelValueInfo *)(*(_QWORD *)(a1 + 168) + 72LL * v18),
              *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v19),
              *(unsigned int *)(a1 + 20),
              v9);
      if ( v20 < 0 )
        break;
      if ( *(_BYTE *)(a1 + 324) )
      {
        v20 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 200) + 72LL * v18),
                *(_BYTE *)(v19 + *(_QWORD *)(a2 + 16)),
                *(unsigned int *)(a1 + 20),
                v21);
        if ( v20 < 0 )
        {
          v22 = 134LL;
          goto LABEL_41;
        }
      }
      if ( *(_BYTE *)(a1 + 325) )
      {
        v20 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 232) + 72LL * v18),
                *(_BYTE *)(v19 + *(_QWORD *)(a2 + 24)),
                *(unsigned int *)(a1 + 20),
                v9);
        if ( v20 < 0 )
        {
          v22 = 139LL;
          goto LABEL_41;
        }
      }
      if ( *(_BYTE *)(a1 + 326) )
      {
        v20 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 264) + 72LL * v18),
                *(_BYTE *)(v19 + *(_QWORD *)(a2 + 32)),
                *(unsigned int *)(a1 + 20),
                v9);
        if ( v20 < 0 )
        {
          v22 = 144LL;
          goto LABEL_41;
        }
      }
      if ( *(_BYTE *)(a1 + 327) )
      {
        v20 = HidChannelValueInfo::InsertValue(
                (HidChannelValueInfo *)(*(_QWORD *)(a1 + 296) + 72LL * v18),
                *(_BYTE *)(v19 + *(_QWORD *)(a2 + 40)),
                *(unsigned int *)(a1 + 20),
                v9);
        if ( v20 < 0 )
        {
          v22 = 149LL;
          goto LABEL_41;
        }
      }
      ++v18;
      ++v19;
      if ( v18 >= *(_DWORD *)a2 )
      {
        v4 = v27;
        goto LABEL_31;
      }
    }
    v22 = 130LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)v20);
    v14 = v20;
    goto LABEL_42;
  }
LABEL_31:
  if ( a3 != &v26 )
  {
    v23 = *(void **)a3;
    *(_QWORD *)a3 = v9;
    v9 = 0LL;
    if ( v23 )
      operator delete(v23, v16);
  }
  *v4 = *(_DWORD *)(a1 + 20);
  if ( v9 )
    operator delete(v9, v16);
  return 0LL;
}
