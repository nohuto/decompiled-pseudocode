/*
 * XREFs of ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B8AB0
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B4670 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800B1764 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??0HidLampMultiUpdateReportParser@@AEAA@XZ @ 0x1800B8178 (--0HidLampMultiUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800B87C8 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampMultiUpdateReportParser **a2)
{
  HidLampMultiUpdateReportParser *v4; // rax
  HidLampMultiUpdateReportParser *updated; // rax
  struct HidLampMultiUpdateReportParser *v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v10; // r8
  __int16 v11; // ax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  struct HidLampMultiUpdateReportParser *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampMultiUpdateReportParser *)RefCountedObject::operator new(0x148uLL);
  if ( v4 )
  {
    updated = HidLampMultiUpdateReportParser::HidLampMultiUpdateReportParser(v4);
    v6 = updated;
  }
  else
  {
    v6 = 0LL;
  }
  try
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v6 + 8LL))(v6);
      *((_BYTE *)v6 + 16) = *((_BYTE *)a1 + 4);
      if ( *(_DWORD *)a1 == 2 )
      {
        *((_BYTE *)v6 + 17) = 2;
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
        {
          v10 = *((_QWORD *)a1 + 2) + 72 * i;
          if ( *(_WORD *)(v10 + 18) == 80 && *(_WORD *)(v10 + 16) == 89 )
          {
            v11 = *(_WORD *)(v10 + 10);
            switch ( v11 )
            {
              case 3:
                if ( *(_WORD *)(v10 + 8) == 89 )
                {
                  *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)v10;
                  *(_OWORD *)((char *)v6 + 40) = *(_OWORD *)(v10 + 16);
                  *(_OWORD *)((char *)v6 + 56) = *(_OWORD *)(v10 + 32);
                  *(_OWORD *)((char *)v6 + 72) = *(_OWORD *)(v10 + 48);
                  *((_QWORD *)v6 + 11) = *(_QWORD *)(v10 + 64);
                }
                break;
              case 85:
                if ( *(_WORD *)(v10 + 8) == 89 )
                {
                  *((_OWORD *)v6 + 6) = *(_OWORD *)v10;
                  *((_OWORD *)v6 + 7) = *(_OWORD *)(v10 + 16);
                  *((_OWORD *)v6 + 8) = *(_OWORD *)(v10 + 32);
                  *((_OWORD *)v6 + 9) = *(_OWORD *)(v10 + 48);
                  *((_QWORD *)v6 + 20) = *(_QWORD *)(v10 + 64);
                }
                break;
              case 33:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v12 = (__int64 *)((char *)v6 + 168);
                goto LABEL_21;
              case 81:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v12 = (__int64 *)((char *)v6 + 200);
                goto LABEL_21;
              case 82:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v12 = (__int64 *)((char *)v6 + 232);
                goto LABEL_21;
              case 83:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v12 = (__int64 *)((char *)v6 + 264);
LABEL_21:
                v13 = v12[1];
                if ( v12[2] != v13 )
                  goto LABEL_35;
LABEL_36:
                std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v12, v13, v10);
                continue;
              default:
                if ( v11 == 84 && *(_WORD *)(v10 + 8) == 89 )
                {
                  v12 = (__int64 *)((char *)v6 + 296);
                  v13 = *((_QWORD *)v6 + 38);
                  if ( *((_QWORD *)v6 + 39) != v13 )
                  {
LABEL_35:
                    *(_OWORD *)v13 = *(_OWORD *)v10;
                    *(_OWORD *)(v13 + 16) = *(_OWORD *)(v10 + 16);
                    *(_OWORD *)(v13 + 32) = *(_OWORD *)(v10 + 32);
                    *(_OWORD *)(v13 + 48) = *(_OWORD *)(v10 + 48);
                    *(_QWORD *)(v13 + 64) = *(_QWORD *)(v10 + 64);
                    v12[1] += 72LL;
                    continue;
                  }
                  goto LABEL_36;
                }
                break;
            }
          }
        }
      }
      *((_DWORD *)v6 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                     + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                     + 4)
                                         + 7
                                         + *(_DWORD *)(*((_QWORD *)a1 + 2)
                                                     + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
      if ( HidLampMultiUpdateReportParser::IsParserValid(v6) )
      {
        v14 = v6;
        v6 = 0LL;
        *a2 = v14;
      }
      if ( v6 )
        (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
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
                           v7);
  }
  return result;
}
