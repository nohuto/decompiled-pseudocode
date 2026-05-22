/*
 * XREFs of ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180080650
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampRangeUpdateReportParser@@AEAA@XZ @ 0x180080454 (--0HidLampRangeUpdateReportParser@@AEAA@XZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampRangeUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampRangeUpdateReportParser **a2)
{
  HidLampRangeUpdateReportParser *v4; // rax
  HidLampRangeUpdateReportParser *v5; // rbx
  HidLampRangeUpdateReportParser *updated; // rdi
  HidLampRangeUpdateReportParser *v7; // rbx
  __int64 i; // r8
  __int64 v9; // rax
  __int16 v10; // dx
  __int64 v11; // rdx
  char v12; // cl
  char v13; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampRangeUpdateReportParser *)malloc(0x218uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x218uLL);
    updated = HidLampRangeUpdateReportParser::HidLampRangeUpdateReportParser(v5);
  }
  else
  {
    updated = 0LL;
  }
  v7 = updated;
  if ( updated )
  {
    (*(void (__fastcall **)(HidLampRangeUpdateReportParser *))(*(_QWORD *)updated + 8LL))(updated);
    *((_BYTE *)updated + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)updated + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v9 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 18) == 96 && *(_WORD *)(v9 + 72LL * (unsigned int)i + 16) == 89 )
        {
          v10 = *(_WORD *)(v9 + 72LL * (unsigned int)i + 10);
          switch ( v10 )
          {
            case 'U':
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 24) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)updated + 40) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)updated + 56) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)updated + 72) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 11) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 'a':
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *((_OWORD *)updated + 6) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *((_OWORD *)updated + 7) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *((_OWORD *)updated + 8) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *((_OWORD *)updated + 9) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 20) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 'b':
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 168) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)updated + 184) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)updated + 200) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)updated + 216) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 29) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 'Q':
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *((_OWORD *)updated + 15) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *((_OWORD *)updated + 16) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *((_OWORD *)updated + 17) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *((_OWORD *)updated + 18) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 38) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 'R':
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 312) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)updated + 328) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)updated + 344) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)updated + 360) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 47) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            case 'S':
              if ( *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *((_OWORD *)updated + 24) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *((_OWORD *)updated + 25) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *((_OWORD *)updated + 26) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *((_OWORD *)updated + 27) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 56) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
            default:
              if ( v10 == 84 && *(_WORD *)(v9 + 72LL * (unsigned int)i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 456) = *(_OWORD *)(v9 + 72LL * (unsigned int)i);
                *(_OWORD *)((char *)updated + 472) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 16);
                *(_OWORD *)((char *)updated + 488) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 32);
                *(_OWORD *)((char *)updated + 504) = *(_OWORD *)(v9 + 72LL * (unsigned int)i + 48);
                *((_QWORD *)updated + 65) = *(_QWORD *)(v9 + 72LL * (unsigned int)i + 64);
              }
              break;
          }
        }
      }
    }
    v11 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                       + 7) >> 3;
    *((_DWORD *)updated + 5) = v11;
    if ( !*((_DWORD *)updated + 61)
      || !*((_DWORD *)updated + 60)
      || *((_QWORD *)updated + 33)
      || (LOBYTE(i) = 1, (unsigned __int64)(*((_QWORD *)updated + 34) - 1LL) > 0xFE) )
    {
      LOBYTE(i) = 0;
    }
    *((_BYTE *)updated + 528) = i;
    if ( !*((_DWORD *)updated + 79)
      || !*((_DWORD *)updated + 78)
      || *((_QWORD *)updated + 42)
      || (LOBYTE(v11) = 1, (unsigned __int64)(*((_QWORD *)updated + 43) - 1LL) > 0xFE) )
    {
      LOBYTE(v11) = 0;
    }
    *((_BYTE *)updated + 529) = v11;
    if ( !*((_DWORD *)updated + 97)
      || !*((_DWORD *)updated + 96)
      || *((_QWORD *)updated + 51)
      || (v12 = 1, (unsigned __int64)(*((_QWORD *)updated + 52) - 1LL) > 0xFE) )
    {
      v12 = 0;
    }
    *((_BYTE *)updated + 530) = v12;
    if ( !*((_DWORD *)updated + 115)
      || !*((_DWORD *)updated + 114)
      || *((_QWORD *)updated + 60)
      || (v13 = 1, (unsigned __int64)(*((_QWORD *)updated + 61) - 1LL) > 0xFE) )
    {
      v13 = 0;
    }
    *((_BYTE *)updated + 531) = v13;
    if ( ((_BYTE)i || (_BYTE)v11 || v12)
      && *((_QWORD *)updated + 16) == *((_QWORD *)updated + 25)
      && *((_BYTE *)updated + 17) == 2
      && *((_DWORD *)updated + 25)
      && *((_DWORD *)updated + 24)
      && !*((_QWORD *)updated + 15)
      && (unsigned __int64)(*((_QWORD *)updated + 16) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)updated + 43)
      && *((_DWORD *)updated + 42)
      && !*((_QWORD *)updated + 24)
      && (unsigned __int64)(*((_QWORD *)updated + 25) - 1LL) <= 0x7FFFFFFE
      && *((_DWORD *)updated + 7)
      && *((_DWORD *)updated + 6)
      && !*((_QWORD *)updated + 6)
      && (unsigned __int64)(*((_QWORD *)updated + 7) - 1LL) <= 0xFFFFFFFE )
    {
      v7 = 0LL;
      *a2 = updated;
    }
    if ( v7 )
      (*(void (__fastcall **)(HidLampRangeUpdateReportParser *, __int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(
        v7,
        v11,
        i,
        254LL,
        -2LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
