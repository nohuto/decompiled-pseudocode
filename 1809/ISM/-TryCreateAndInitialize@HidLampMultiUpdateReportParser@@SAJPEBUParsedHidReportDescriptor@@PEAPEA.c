/*
 * XREFs of ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007FB34
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180078A84 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??0HidLampMultiUpdateReportParser@@AEAA@XZ @ 0x18007F994 (--0HidLampMultiUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800800CC (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampMultiUpdateReportParser **a2)
{
  HidLampMultiUpdateReportParser *v4; // rax
  HidLampMultiUpdateReportParser *v5; // rbx
  HidLampMultiUpdateReportParser *updated; // rax
  struct HidLampMultiUpdateReportParser *v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v11; // r8
  __int16 v12; // ax
  char *v13; // rcx
  __int64 v14; // rdx
  struct HidLampMultiUpdateReportParser *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampMultiUpdateReportParser *)malloc(0x148uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x148uLL);
    updated = HidLampMultiUpdateReportParser::HidLampMultiUpdateReportParser(v5);
    v7 = updated;
  }
  else
  {
    v7 = 0LL;
  }
  try
  {
    if ( v7 )
    {
      (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v7 + 8LL))(v7);
      *((_BYTE *)v7 + 16) = *((_BYTE *)a1 + 4);
      if ( *(_DWORD *)a1 == 2 )
      {
        *((_BYTE *)v7 + 17) = 2;
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
        {
          v11 = *((_QWORD *)a1 + 2) + 72 * i;
          if ( *(_WORD *)(v11 + 18) == 80 && *(_WORD *)(v11 + 16) == 89 )
          {
            v12 = *(_WORD *)(v11 + 10);
            switch ( v12 )
            {
              case 3:
                if ( *(_WORD *)(v11 + 8) == 89 )
                {
                  *(_OWORD *)((char *)v7 + 24) = *(_OWORD *)v11;
                  *(_OWORD *)((char *)v7 + 40) = *(_OWORD *)(v11 + 16);
                  *(_OWORD *)((char *)v7 + 56) = *(_OWORD *)(v11 + 32);
                  *(_OWORD *)((char *)v7 + 72) = *(_OWORD *)(v11 + 48);
                  *((_QWORD *)v7 + 11) = *(_QWORD *)(v11 + 64);
                }
                break;
              case 85:
                if ( *(_WORD *)(v11 + 8) == 89 )
                {
                  *((_OWORD *)v7 + 6) = *(_OWORD *)v11;
                  *((_OWORD *)v7 + 7) = *(_OWORD *)(v11 + 16);
                  *((_OWORD *)v7 + 8) = *(_OWORD *)(v11 + 32);
                  *((_OWORD *)v7 + 9) = *(_OWORD *)(v11 + 48);
                  *((_QWORD *)v7 + 20) = *(_QWORD *)(v11 + 64);
                }
                break;
              case 33:
                if ( *(_WORD *)(v11 + 8) != 89 )
                  continue;
                v13 = (char *)v7 + 168;
                goto LABEL_21;
              case 81:
                if ( *(_WORD *)(v11 + 8) != 89 )
                  continue;
                v13 = (char *)v7 + 200;
                goto LABEL_21;
              case 82:
                if ( *(_WORD *)(v11 + 8) != 89 )
                  continue;
                v13 = (char *)v7 + 232;
                goto LABEL_21;
              case 83:
                if ( *(_WORD *)(v11 + 8) != 89 )
                  continue;
                v13 = (char *)v7 + 264;
LABEL_21:
                v14 = *((_QWORD *)v13 + 1);
                if ( *((_QWORD *)v13 + 2) != v14 )
                  goto LABEL_35;
LABEL_36:
                std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
                  (void **)v13,
                  (char *)v14,
                  v11);
                continue;
              default:
                if ( v12 == 84 && *(_WORD *)(v11 + 8) == 89 )
                {
                  v13 = (char *)v7 + 296;
                  v14 = *((_QWORD *)v7 + 38);
                  if ( *((_QWORD *)v7 + 39) != v14 )
                  {
LABEL_35:
                    *(_OWORD *)v14 = *(_OWORD *)v11;
                    *(_OWORD *)(v14 + 16) = *(_OWORD *)(v11 + 16);
                    *(_OWORD *)(v14 + 32) = *(_OWORD *)(v11 + 32);
                    *(_OWORD *)(v14 + 48) = *(_OWORD *)(v11 + 48);
                    *(_QWORD *)(v14 + 64) = *(_QWORD *)(v11 + 64);
                    *((_QWORD *)v13 + 1) += 72LL;
                    continue;
                  }
                  goto LABEL_36;
                }
                break;
            }
          }
        }
      }
      *((_DWORD *)v7 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                     + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                     + 4)
                                         + 7
                                         + *(_DWORD *)(*((_QWORD *)a1 + 2)
                                                     + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
      if ( HidLampMultiUpdateReportParser::IsParserValid(v7) )
      {
        v15 = v7;
        v7 = 0LL;
        *a2 = v15;
      }
      if ( v7 )
        (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v7 + 16LL))(v7);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6B,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamp"
                                    "multiupdatereportparser.cpp",
                           v8);
  }
  return result;
}
