/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800B85EC
 * Callers:
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x1800B5218 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6D18 (--4-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x1800B99B8 (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x1800B99E8 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x1800B9A14 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        __int64 a2,
        void **a3,
        _DWORD *a4)
{
  void *v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int inserted; // eax
  unsigned __int8 *v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rdx
  int v16; // ebp
  __int64 v17; // r11
  unsigned __int8 *v18; // r9
  __int64 v19; // r11
  const struct std::nothrow_t *v20; // rdx
  void *v21; // rcx
  const struct std::nothrow_t *v23; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v25; // [rsp+58h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a2 + 8)
    || !*(_QWORD *)(a2 + 16) && *(_BYTE *)(a1 + 324)
    || !*(_QWORD *)(a2 + 24) && *(_BYTE *)(a1 + 325)
    || !*(_QWORD *)(a2 + 32) && *(_BYTE *)(a1 + 326)
    || !*(_QWORD *)(a2 + 40) && *(_BYTE *)(a1 + 327) )
  {
    v10 = -2147024809;
    v11 = 115LL;
    goto LABEL_38;
  }
  v8 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v25 = v8;
  v9 = (unsigned __int8 *)v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    v11 = 118LL;
LABEL_38:
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
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)inserted);
    operator delete(v9, v23);
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
    goto LABEL_36;
  }
  v16 = 0;
  if ( *(int *)a2 > 0 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      inserted = HidChannelValueInfo::InsertValue(
                   (HidChannelValueInfo *)(*(_QWORD *)(a1 + 168) + 72LL * v16),
                   *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v17),
                   *(unsigned int *)(a1 + 20),
                   v9);
      v14 = inserted;
      if ( inserted < 0 )
        break;
      if ( *(_BYTE *)(a1 + 324) )
      {
        inserted = HidChannelValueInfo::InsertValue(
                     (HidChannelValueInfo *)(*(_QWORD *)(a1 + 200) + 72LL * v16),
                     *(_BYTE *)(v19 + *(_QWORD *)(a2 + 16)),
                     *(unsigned int *)(a1 + 20),
                     v18);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 134LL;
          goto LABEL_36;
        }
      }
      if ( *(_BYTE *)(a1 + 325) )
      {
        inserted = HidChannelValueInfo::InsertValue(
                     (HidChannelValueInfo *)(*(_QWORD *)(a1 + 232) + 72LL * v16),
                     *(_BYTE *)(v19 + *(_QWORD *)(a2 + 24)),
                     *(unsigned int *)(a1 + 20),
                     v9);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 139LL;
          goto LABEL_36;
        }
      }
      if ( *(_BYTE *)(a1 + 326) )
      {
        inserted = HidChannelValueInfo::InsertValue(
                     (HidChannelValueInfo *)(*(_QWORD *)(a1 + 264) + 72LL * v16),
                     *(_BYTE *)(v19 + *(_QWORD *)(a2 + 32)),
                     *(unsigned int *)(a1 + 20),
                     v9);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 144LL;
          goto LABEL_36;
        }
      }
      if ( *(_BYTE *)(a1 + 327) )
      {
        inserted = HidChannelValueInfo::InsertValue(
                     (HidChannelValueInfo *)(*(_QWORD *)(a1 + 296) + 72LL * v16),
                     *(_BYTE *)(v19 + *(_QWORD *)(a2 + 40)),
                     *(unsigned int *)(a1 + 20),
                     v9);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 149LL;
          goto LABEL_36;
        }
      }
      ++v16;
      v17 = v19 + 1;
      if ( v16 >= *(_DWORD *)a2 )
        goto LABEL_28;
    }
    v15 = 130LL;
    goto LABEL_36;
  }
LABEL_28:
  std::unique_ptr<unsigned char [0]>::operator=(a3, (const struct std::nothrow_t *)&v25);
  v21 = v25;
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v21 )
    operator delete(v21, v20);
  return 0LL;
}
