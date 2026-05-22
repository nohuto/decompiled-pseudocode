/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180080D50
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampArrayControlReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampArrayControlReportParser **a2)
{
  char *v4; // rax
  char *v5; // rdi
  char *v6; // rbx
  unsigned int i; // edx
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = (char *)malloc(0x60uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x60uLL);
    *(_QWORD *)v5 = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &HidLampArrayControlReportParser::`vftable';
    *((_WORD *)v5 + 8) = 0;
    *(_QWORD *)(v5 + 20) = 0LL;
    *(_QWORD *)(v5 + 28) = 0LL;
    *(_QWORD *)(v5 + 36) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_DWORD *)v5 + 20) = 0;
    v5[84] = 0;
    *((_DWORD *)v5 + 11) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v5[16] = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      v5[17] = 2;
      for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
      {
        v8 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v8 + 72LL * i + 18) == 112
          && *(_WORD *)(v8 + 72LL * i + 16) == 89
          && *(_WORD *)(v8 + 72LL * i + 10) == 113
          && *(_WORD *)(v8 + 72LL * i + 8) == 89 )
        {
          *(_OWORD *)(v5 + 24) = *(_OWORD *)(v8 + 72LL * i);
          *(_OWORD *)(v5 + 40) = *(_OWORD *)(v8 + 72LL * i + 16);
          *(_OWORD *)(v5 + 56) = *(_OWORD *)(v8 + 72LL * i + 32);
          *(_OWORD *)(v5 + 72) = *(_OWORD *)(v8 + 72LL * i + 48);
          *((_QWORD *)v5 + 11) = *(_QWORD *)(v8 + 72LL * i + 64);
        }
      }
    }
    *((_DWORD *)v5 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                   + 4)
                                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                                       + 7) >> 3;
    if ( v5[17] == 2 && *((_DWORD *)v5 + 7) && *((_DWORD *)v5 + 6) && !*((_QWORD *)v5 + 6) && *((_QWORD *)v5 + 7) == 1LL )
    {
      v6 = 0LL;
      *a2 = (struct HidLampArrayControlReportParser *)v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraycontrolreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
