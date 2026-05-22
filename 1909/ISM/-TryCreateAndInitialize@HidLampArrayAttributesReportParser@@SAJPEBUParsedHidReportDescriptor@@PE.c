/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B6E38
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B4670 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0HidLampArrayAttributesReportParser@@AEAA@XZ @ 0x1800B6A50 (--0HidLampArrayAttributesReportParser@@AEAA@XZ.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800B9988 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampArrayAttributesReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampArrayAttributesReportParser **a2)
{
  HidLampArrayAttributesReportParser *v4; // rax
  HidLampArrayAttributesReportParser *v5; // rdi
  HidLampArrayAttributesReportParser *v6; // rbx
  __int64 i; // r8
  __int64 v8; // rax
  __int16 v9; // dx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampArrayAttributesReportParser *)RefCountedObject::operator new(0x1C8uLL);
  if ( v4 )
    v5 = HidLampArrayAttributesReportParser::HidLampArrayAttributesReportParser(v4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_BYTE *)v5 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v5 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72 * i + 18) == 2 && *(_WORD *)(v8 + 72 * i + 16) == 89 )
        {
          v9 = *(_WORD *)(v8 + 72 * i + 10);
          switch ( v9 )
          {
            case 3:
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 24) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 40) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 56) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 72) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 11) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 4:
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 6) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 7) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 8) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 9) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 20) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 5:
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 168) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 184) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 200) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 216) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 29) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 6:
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 15) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 16) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 17) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 18) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 38) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 7:
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 344) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 360) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 47) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            default:
              if ( v9 == 8 && *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 24) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 25) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 26) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 27) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 56) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
          }
        }
      }
    }
    v10 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                       + 7) >> 3;
    *((_DWORD *)v5 + 5) = v10;
    if ( *((_BYTE *)v5 + 17) == 2
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 24), v10, 0x7FFFFFFFLL)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 96), v11, v12)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 168), v13, v14)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 240), v15, v16)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 312), v17, v18)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 384), v19, v20) )
    {
      v6 = 0LL;
      *a2 = v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
