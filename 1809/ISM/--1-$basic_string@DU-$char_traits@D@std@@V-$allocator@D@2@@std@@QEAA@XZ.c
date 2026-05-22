/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180101F04
 * Callers:
 *     _std::to_string_::_1_::dtor$1 @ 0x1801355EB (_std--to_string_--_1_--dtor$1.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$0 @ 0x180135617 (_ISMTracing--GetVector3AsString_--_1_--dtor$0.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$1 @ 0x180135629 (_ISMTracing--GetVector3AsString_--_1_--dtor$1.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$3 @ 0x18013563B (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$3.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$1 @ 0x18013564D (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$1.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$4 @ 0x18013565F (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$4.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$5 @ 0x180135671 (_ISMTracing--GetVector3AsString_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  char *v5; // r8
  char *v6; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
  {
    v3 = *(char **)a1;
    v4 = (const struct std::nothrow_t *)(v1 + 1);
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v5 = (char *)*((_QWORD *)v3 - 1);
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v6 = (char *)(v3 - v5);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v4);
        JUMPOUT(0x180101F5FLL);
      }
      v3 = v5;
    }
    operator delete(v3, v4);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
