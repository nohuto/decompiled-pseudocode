/*
 * XREFs of ??$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180361B54
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180361DA0 (-CreateInstance@-$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0AllUpViewUriHandler@@QEAA@XZ @ 0x180361BCC (--0AllUpViewUriHandler@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AllUpViewUriHandler,IUnknown,>(_QWORD *a1)
{
  AllUpViewUriHandler *v2; // rax
  unsigned int v3; // edi
  AllUpViewUriHandler *v4; // rbx

  *a1 = 0LL;
  v2 = (AllUpViewUriHandler *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = AllUpViewUriHandler::AllUpViewUriHandler(v2);
    v3 = (**(__int64 (__fastcall ***)(AllUpViewUriHandler *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(AllUpViewUriHandler *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
