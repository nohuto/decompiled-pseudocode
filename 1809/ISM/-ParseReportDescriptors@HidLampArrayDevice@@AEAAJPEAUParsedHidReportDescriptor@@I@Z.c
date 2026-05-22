/*
 * XREFs of ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x18007BC64 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007E550 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PE.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007E9E0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007EF20 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007FB34 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180080650 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180080D50 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampArrayDevice::ParseReportDescriptors(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  unsigned int i; // r14d
  int v7; // ebx
  struct HidLampArrayAttributesReportParser *v8; // rbx
  __int64 v9; // rcx
  struct HidLampArrayAttributesReportParser *v10; // rbx
  __int64 v11; // rcx
  const struct ParsedHidReportDescriptor *v12; // rsi
  struct HidLampArrayAttributesReportParser *v13; // rbx
  __int64 v14; // rcx
  struct HidLampArrayAttributesReportParser *v15; // rbx
  __int64 v16; // rcx
  struct HidLampArrayAttributesReportParser *v17; // rbx
  __int64 v18; // rcx
  struct HidLampArrayAttributesReportParser *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct HidLampArrayAttributesReportParser *v25; // [rsp+78h] [rbp+48h] BYREF

  for ( i = 0; i < a3; ++i )
  {
    if ( *((_QWORD *)this + 72) )
      goto LABEL_53;
    v25 = 0LL;
    v7 = HidLampArrayAttributesReportParser::TryCreateAndInitialize(
           (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * i),
           &v25);
    if ( v7 < 0 )
    {
      v22 = 642LL;
      goto LABEL_42;
    }
    v8 = v25;
    if ( !v25 )
    {
LABEL_53:
      if ( *((_QWORD *)this + 74) )
        goto LABEL_14;
      v25 = 0LL;
      v7 = HidLampAttributesRequestReportParser::TryCreateAndInitialize(
             (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * i),
             &v25);
      if ( v7 < 0 )
      {
        v22 = 656LL;
        goto LABEL_42;
      }
      v10 = v25;
      if ( !v25 )
      {
LABEL_14:
        v12 = (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * i);
        if ( *((_QWORD *)this + 75) )
          goto LABEL_54;
        v25 = 0LL;
        v7 = HidLampAttributesResponseReportParser::TryCreateAndInitialize(v12, &v25);
        if ( v7 < 0 )
        {
          v22 = 670LL;
          goto LABEL_42;
        }
        v13 = v25;
        if ( !v25 )
        {
LABEL_54:
          if ( *((_QWORD *)this + 76) )
            goto LABEL_55;
          v25 = 0LL;
          v7 = HidLampMultiUpdateReportParser::TryCreateAndInitialize(v12, &v25);
          if ( v7 < 0 )
          {
            v22 = 684LL;
            goto LABEL_42;
          }
          v15 = v25;
          if ( !v25 )
          {
LABEL_55:
            if ( *((_QWORD *)this + 77) )
              goto LABEL_56;
            v25 = 0LL;
            v7 = HidLampRangeUpdateReportParser::TryCreateAndInitialize(v12, &v25);
            if ( v7 < 0 )
            {
              v22 = 698LL;
              goto LABEL_42;
            }
            v17 = v25;
            if ( !v25 )
            {
LABEL_56:
              if ( !*((_QWORD *)this + 73) )
              {
                v25 = 0LL;
                v7 = HidLampArrayControlReportParser::TryCreateAndInitialize(v12, &v25);
                if ( v7 < 0 )
                {
                  v22 = 712LL;
LABEL_42:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v22,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                    (const char *)(unsigned int)v7);
                  if ( v25 )
                    (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v25 + 16LL))(v25);
                  return (unsigned int)v7;
                }
                v19 = v25;
                if ( v25 )
                {
                  v20 = *((_QWORD *)this + 73);
                  if ( v20 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                  *((_QWORD *)this + 73) = v19;
                }
              }
            }
            else
            {
              v18 = *((_QWORD *)this + 77);
              if ( v18 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
              *((_QWORD *)this + 77) = v17;
            }
          }
          else
          {
            v16 = *((_QWORD *)this + 76);
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            *((_QWORD *)this + 76) = v15;
          }
        }
        else
        {
          v14 = *((_QWORD *)this + 75);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *((_QWORD *)this + 75) = v13;
        }
      }
      else
      {
        v11 = *((_QWORD *)this + 74);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *((_QWORD *)this + 74) = v10;
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 72);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)this + 72) = v8;
    }
  }
  v21 = HidLampArrayDevice::ValidateReportParsers(this);
  v7 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v21);
    return (unsigned int)v7;
  }
  return 0LL;
}
