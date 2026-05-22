/*
 * XREFs of ??1?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA@XZ @ 0x1800214F0
 * Callers:
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x1800210F0 (--_EInputSite@@UEAAPEAXI@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18008706C (--1DWMInputRouter@@MEAA@XZ.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$8 @ 0x1801320A6 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$8.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<InputSite::AttachedInputObjectEntry>::~vector<InputSite::AttachedInputObjectEntry>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  __int64 v6; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[1];
        if ( v4 )
        {
          v2[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v2 += 2;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)a1;
    }
    v5 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v6 = *(v2 - 1);
      if ( (unsigned __int64)v2 - v6 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18002159FLL);
      }
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
