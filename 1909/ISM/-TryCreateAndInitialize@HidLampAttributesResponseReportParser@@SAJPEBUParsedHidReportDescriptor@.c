/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B7BF4
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B4670 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0HidLampAttributesResponseReportParser@@AEAA@XZ @ 0x1800B74D4 (--0HidLampAttributesResponseReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800B78BC (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800B9988 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampAttributesResponseReportParser **a2)
{
  HidLampAttributesResponseReportParser *v4; // rax
  struct HidLampAttributesResponseReportParser *v5; // rdi
  struct HidLampAttributesResponseReportParser *v6; // rbx
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
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampAttributesResponseReportParser *)RefCountedObject::operator new(0x380uLL);
  if ( v4 )
    v5 = HidLampAttributesResponseReportParser::HidLampAttributesResponseReportParser(v4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_BYTE *)v5 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v5 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72 * i + 18) == 34 && *(_WORD *)(v8 + 72 * i + 16) == 89 )
        {
          v9 = *(_WORD *)(v8 + 72 * i + 10);
          switch ( v9 )
          {
            case '!':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 24) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 40) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 56) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 72) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 11) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '#':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 6) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 7) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 8) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 9) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 20) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '$':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 168) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 184) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 200) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 216) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 29) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '%':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 15) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 16) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 17) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 18) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 38) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '\'':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 344) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 360) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 47) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '&':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 24) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 25) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 26) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 27) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 56) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '(':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 600) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 616) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 632) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 648) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 83) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case ')':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 42) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 43) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 44) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 45) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 92) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '*':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 744) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 760) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 776) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 792) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 101) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case '+':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 51) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 52) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 53) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 54) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 110) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case ',':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v5 + 456) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)v5 + 472) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)v5 + 488) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)v5 + 504) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 65) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            default:
              if ( v9 == 45 && *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)v5 + 33) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)v5 + 34) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)v5 + 35) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)v5 + 36) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)v5 + 74) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
          }
        }
      }
    }
    v10 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + 7
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
    *((_DWORD *)v5 + 5) = v10;
    *((_BYTE *)v5 + 888) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 600),
                             v10,
                             255LL);
    *((_BYTE *)v5 + 889) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 672),
                             v11,
                             v12);
    *((_BYTE *)v5 + 890) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 744),
                             v13,
                             v14);
    *((_BYTE *)v5 + 891) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 816),
                             v15,
                             v16);
    *((_BYTE *)v5 + 892) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 528),
                             v17,
                             0x7FFFFFFFLL);
    if ( HidLampAttributesResponseReportParser::IsParserValid(v5, v18) )
    {
      v6 = 0LL;
      *a2 = v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
