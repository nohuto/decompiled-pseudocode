/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007EF20
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampAttributesResponseReportParser@@AEAA@XZ @ 0x18007EBE4 (--0HidLampAttributesResponseReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x18007F7D0 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampAttributesResponseReportParser **a2)
{
  HidLampAttributesResponseReportParser *v4; // rax
  HidLampAttributesResponseReportParser *v5; // rbx
  struct HidLampAttributesResponseReportParser *v6; // rdi
  struct HidLampAttributesResponseReportParser *v7; // rbx
  char v8; // r8
  unsigned int i; // r9d
  __int64 v10; // rax
  __int16 v11; // dx
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampAttributesResponseReportParser *)malloc(0x380uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x380uLL);
    v6 = HidLampAttributesResponseReportParser::HidLampAttributesResponseReportParser(v5);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_BYTE *)v6 + 16) = *((_BYTE *)a1 + 4);
    v8 = 1;
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v6 + 17) = 2;
      for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
      {
        v10 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v10 + 72LL * i + 18) == 34 && *(_WORD *)(v10 + 72LL * i + 16) == 89 )
        {
          v11 = *(_WORD *)(v10 + 72LL * i + 10);
          switch ( v11 )
          {
            case '!':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)(v10 + 72LL * i);
                *(_OWORD *)((char *)v6 + 40) = *(_OWORD *)(v10 + 72LL * i + 16);
                *(_OWORD *)((char *)v6 + 56) = *(_OWORD *)(v10 + 72LL * i + 32);
                *(_OWORD *)((char *)v6 + 72) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 11) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '#':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *((_OWORD *)v6 + 6) = *(_OWORD *)(v10 + 72LL * i);
                *((_OWORD *)v6 + 7) = *(_OWORD *)(v10 + 72LL * i + 16);
                *((_OWORD *)v6 + 8) = *(_OWORD *)(v10 + 72LL * i + 32);
                *((_OWORD *)v6 + 9) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 20) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '$':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 168) = *(_OWORD *)(v10 + 72LL * i);
                *(_OWORD *)((char *)v6 + 184) = *(_OWORD *)(v10 + 72LL * i + 16);
                *(_OWORD *)((char *)v6 + 200) = *(_OWORD *)(v10 + 72LL * i + 32);
                *(_OWORD *)((char *)v6 + 216) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 29) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '%':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *((_OWORD *)v6 + 15) = *(_OWORD *)(v10 + 72LL * i);
                *((_OWORD *)v6 + 16) = *(_OWORD *)(v10 + 72LL * i + 16);
                *((_OWORD *)v6 + 17) = *(_OWORD *)(v10 + 72LL * i + 32);
                *((_OWORD *)v6 + 18) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 38) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '\'':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 312) = *(_OWORD *)(v10 + 72LL * i);
                *(_OWORD *)((char *)v6 + 328) = *(_OWORD *)(v10 + 72LL * i + 16);
                *(_OWORD *)((char *)v6 + 344) = *(_OWORD *)(v10 + 72LL * i + 32);
                *(_OWORD *)((char *)v6 + 360) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 47) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '&':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *((_OWORD *)v6 + 24) = *(_OWORD *)(v10 + 72LL * i);
                *((_OWORD *)v6 + 25) = *(_OWORD *)(v10 + 72LL * i + 16);
                *((_OWORD *)v6 + 26) = *(_OWORD *)(v10 + 72LL * i + 32);
                *((_OWORD *)v6 + 27) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 56) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '(':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 600) = *(_OWORD *)(v10 + 72LL * i);
                *(_OWORD *)((char *)v6 + 616) = *(_OWORD *)(v10 + 72LL * i + 16);
                *(_OWORD *)((char *)v6 + 632) = *(_OWORD *)(v10 + 72LL * i + 32);
                *(_OWORD *)((char *)v6 + 648) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 83) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case ')':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *((_OWORD *)v6 + 42) = *(_OWORD *)(v10 + 72LL * i);
                *((_OWORD *)v6 + 43) = *(_OWORD *)(v10 + 72LL * i + 16);
                *((_OWORD *)v6 + 44) = *(_OWORD *)(v10 + 72LL * i + 32);
                *((_OWORD *)v6 + 45) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 92) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '*':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 744) = *(_OWORD *)(v10 + 72LL * i);
                *(_OWORD *)((char *)v6 + 760) = *(_OWORD *)(v10 + 72LL * i + 16);
                *(_OWORD *)((char *)v6 + 776) = *(_OWORD *)(v10 + 72LL * i + 32);
                *(_OWORD *)((char *)v6 + 792) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 101) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case '+':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *((_OWORD *)v6 + 51) = *(_OWORD *)(v10 + 72LL * i);
                *((_OWORD *)v6 + 52) = *(_OWORD *)(v10 + 72LL * i + 16);
                *((_OWORD *)v6 + 53) = *(_OWORD *)(v10 + 72LL * i + 32);
                *((_OWORD *)v6 + 54) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 110) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            case ',':
              if ( *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 456) = *(_OWORD *)(v10 + 72LL * i);
                *(_OWORD *)((char *)v6 + 472) = *(_OWORD *)(v10 + 72LL * i + 16);
                *(_OWORD *)((char *)v6 + 488) = *(_OWORD *)(v10 + 72LL * i + 32);
                *(_OWORD *)((char *)v6 + 504) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 65) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
            default:
              if ( v11 == 45 && *(_WORD *)(v10 + 72LL * i + 8) == 89 )
              {
                *((_OWORD *)v6 + 33) = *(_OWORD *)(v10 + 72LL * i);
                *((_OWORD *)v6 + 34) = *(_OWORD *)(v10 + 72LL * i + 16);
                *((_OWORD *)v6 + 35) = *(_OWORD *)(v10 + 72LL * i + 32);
                *((_OWORD *)v6 + 36) = *(_OWORD *)(v10 + 72LL * i + 48);
                *((_QWORD *)v6 + 74) = *(_QWORD *)(v10 + 72LL * i + 64);
              }
              break;
          }
        }
      }
    }
    *((_DWORD *)v6 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                                       + *(_DWORD *)(*((_QWORD *)a1 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                   + 4)
                                       + 7) >> 3;
    if ( !*((_DWORD *)v6 + 151)
      || !*((_DWORD *)v6 + 150)
      || *((_QWORD *)v6 + 78)
      || (v12 = 1, (unsigned __int64)(*((_QWORD *)v6 + 79) - 1LL) > 0xFE) )
    {
      v12 = 0;
    }
    *((_BYTE *)v6 + 888) = v12;
    if ( !*((_DWORD *)v6 + 169)
      || !*((_DWORD *)v6 + 168)
      || *((_QWORD *)v6 + 87)
      || (v13 = 1, (unsigned __int64)(*((_QWORD *)v6 + 88) - 1LL) > 0xFE) )
    {
      v13 = 0;
    }
    *((_BYTE *)v6 + 889) = v13;
    if ( !*((_DWORD *)v6 + 187)
      || !*((_DWORD *)v6 + 186)
      || *((_QWORD *)v6 + 96)
      || (v14 = 1, (unsigned __int64)(*((_QWORD *)v6 + 97) - 1LL) > 0xFE) )
    {
      v14 = 0;
    }
    *((_BYTE *)v6 + 890) = v14;
    if ( !*((_DWORD *)v6 + 205)
      || !*((_DWORD *)v6 + 204)
      || *((_QWORD *)v6 + 105)
      || (v15 = 1, (unsigned __int64)(*((_QWORD *)v6 + 106) - 1LL) > 0xFE) )
    {
      v15 = 0;
    }
    *((_BYTE *)v6 + 891) = v15;
    if ( !*((_DWORD *)v6 + 133)
      || !*((_DWORD *)v6 + 132)
      || *((_QWORD *)v6 + 69)
      || (unsigned __int64)(*((_QWORD *)v6 + 70) - 1LL) > 0x7FFFFFFE )
    {
      v8 = 0;
    }
    *((_BYTE *)v6 + 892) = v8;
    if ( HidLampAttributesResponseReportParser::IsParserValid(v6) )
    {
      v7 = 0LL;
      *a2 = v6;
    }
    if ( v7 )
      (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v7 + 16LL))(v7);
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
