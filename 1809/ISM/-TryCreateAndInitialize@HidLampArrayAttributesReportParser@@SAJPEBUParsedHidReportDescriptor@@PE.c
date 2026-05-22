/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007E550
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampArrayAttributesReportParser@@AEAA@XZ @ 0x18007E390 (--0HidLampArrayAttributesReportParser@@AEAA@XZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampArrayAttributesReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampArrayAttributesReportParser **a2)
{
  HidLampArrayAttributesReportParser *v4; // rax
  HidLampArrayAttributesReportParser *v5; // rbx
  HidLampArrayAttributesReportParser *v6; // rdi
  HidLampArrayAttributesReportParser *v7; // rbx
  __int64 i; // r8
  __int64 v9; // rax
  __int16 v10; // dx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampArrayAttributesReportParser *)malloc(0x1C8uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x1C8uLL);
    v6 = HidLampArrayAttributesReportParser::HidLampArrayAttributesReportParser(v5);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_BYTE *)v6 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v6 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v9 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 18) == 2 && *(_WORD *)(v9 + 72LL * (unsigned int)i + 16) == 89 )
        {
          v10 = *(_WORD *)(v9 + 72LL * (unsigned int)i + 10);
          switch ( v10 )
          {
            case 3:
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)v6 + 40) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)v6 + 56) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)v6 + 72) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)v6 + 11) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 4:
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *((_OWORD *)v6 + 6) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *((_OWORD *)v6 + 7) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *((_OWORD *)v6 + 8) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *((_OWORD *)v6 + 9) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)v6 + 20) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 5:
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 168) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)v6 + 184) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)v6 + 200) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)v6 + 216) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)v6 + 29) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 6:
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *((_OWORD *)v6 + 15) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *((_OWORD *)v6 + 16) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *((_OWORD *)v6 + 17) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *((_OWORD *)v6 + 18) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)v6 + 38) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 7:
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)v6 + 312) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)v6 + 328) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)v6 + 344) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)v6 + 360) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)v6 + 47) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            default:
              if ( v10 == 8 && *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *((_OWORD *)v6 + 24) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *((_OWORD *)v6 + 25) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *((_OWORD *)v6 + 26) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *((_OWORD *)v6 + 27) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)v6 + 56) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
          }
        }
      }
    }
    v11 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                       + 7) >> 3;
    *((_DWORD *)v6 + 5) = v11;
    if ( *((_BYTE *)v6 + 17) == 2
      && *((_DWORD *)v6 + 7)
      && *((_DWORD *)v6 + 6)
      && !*((_QWORD *)v6 + 6)
      && (unsigned __int64)(*((_QWORD *)v6 + 7) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)v6 + 25)
      && *((_DWORD *)v6 + 24)
      && !*((_QWORD *)v6 + 15)
      && (unsigned __int64)(*((_QWORD *)v6 + 16) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)v6 + 43)
      && *((_DWORD *)v6 + 42)
      && !*((_QWORD *)v6 + 24)
      && (unsigned __int64)(*((_QWORD *)v6 + 25) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)v6 + 61)
      && *((_DWORD *)v6 + 60)
      && !*((_QWORD *)v6 + 33)
      && (unsigned __int64)(*((_QWORD *)v6 + 34) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)v6 + 79)
      && *((_DWORD *)v6 + 78)
      && !*((_QWORD *)v6 + 42)
      && (unsigned __int64)(*((_QWORD *)v6 + 43) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)v6 + 97)
      && *((_DWORD *)v6 + 96)
      && !*((_QWORD *)v6 + 51)
      && (unsigned __int64)(*((_QWORD *)v6 + 52) - 1LL) <= 0x7FFFFFFE )
    {
      v7 = 0LL;
      *a2 = v6;
    }
    if ( v7 )
      (*(void (__fastcall **)(HidLampArrayAttributesReportParser *, __int64, __int64))(*(_QWORD *)v7 + 16LL))(
        v7,
        v11,
        i);
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
