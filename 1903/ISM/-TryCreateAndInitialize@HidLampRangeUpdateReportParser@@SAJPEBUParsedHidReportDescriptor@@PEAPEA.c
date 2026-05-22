/*
 * XREFs of ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B9384
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B47C0 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0HidLampRangeUpdateReportParser@@AEAA@XZ @ 0x1800B8EEC (--0HidLampRangeUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800B92F8 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800B9AD8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampRangeUpdateReportParser **a2)
{
  HidLampRangeUpdateReportParser *v4; // rax
  struct HidLampRangeUpdateReportParser *updated; // rdi
  struct HidLampRangeUpdateReportParser *v6; // rbx
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
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampRangeUpdateReportParser *)RefCountedObject::operator new(0x218uLL);
  if ( v4 )
    updated = HidLampRangeUpdateReportParser::HidLampRangeUpdateReportParser(v4);
  else
    updated = 0LL;
  v6 = updated;
  if ( updated )
  {
    (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)updated + 8LL))(updated);
    *((_BYTE *)updated + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)updated + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72 * i + 18) == 96 && *(_WORD *)(v8 + 72 * i + 16) == 89 )
        {
          v9 = *(_WORD *)(v8 + 72 * i + 10);
          switch ( v9 )
          {
            case 'U':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 24) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 40) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)updated + 56) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)updated + 72) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 11) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 'a':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)updated + 6) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)updated + 7) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)updated + 8) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)updated + 9) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 20) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 'b':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 168) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 184) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)updated + 200) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)updated + 216) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 29) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 'Q':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)updated + 15) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)updated + 16) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)updated + 17) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)updated + 18) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 38) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 'R':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 312) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 328) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)updated + 344) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)updated + 360) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 47) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            case 'S':
              if ( *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *((_OWORD *)updated + 24) = *(_OWORD *)(v8 + 72 * i);
                *((_OWORD *)updated + 25) = *(_OWORD *)(v8 + 72 * i + 16);
                *((_OWORD *)updated + 26) = *(_OWORD *)(v8 + 72 * i + 32);
                *((_OWORD *)updated + 27) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 56) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
            default:
              if ( v9 == 84 && *(_WORD *)(v8 + 72 * i + 8) == 89 )
              {
                *(_OWORD *)((char *)updated + 456) = *(_OWORD *)(v8 + 72 * i);
                *(_OWORD *)((char *)updated + 472) = *(_OWORD *)(v8 + 72 * i + 16);
                *(_OWORD *)((char *)updated + 488) = *(_OWORD *)(v8 + 72 * i + 32);
                *(_OWORD *)((char *)updated + 504) = *(_OWORD *)(v8 + 72 * i + 48);
                *((_QWORD *)updated + 65) = *(_QWORD *)(v8 + 72 * i + 64);
              }
              break;
          }
        }
      }
    }
    v10 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1) + 4)
                       + 7
                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
    *((_DWORD *)updated + 5) = v10;
    *((_BYTE *)updated + 528) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 240),
                                  v10,
                                  255LL);
    *((_BYTE *)updated + 529) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 312),
                                  v11,
                                  v12);
    *((_BYTE *)updated + 530) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 384),
                                  v13,
                                  v14);
    *((_BYTE *)updated + 531) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 456),
                                  v15,
                                  v16);
    if ( HidLampRangeUpdateReportParser::IsParserValid(updated) )
    {
      v6 = 0LL;
      *a2 = updated;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
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
