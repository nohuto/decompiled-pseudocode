/*
 * XREFs of ??1?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA@XZ @ 0x180004E24
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x1800043C4 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800044A8 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<InputProvider>::~vector<InputProvider>(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[2];
        if ( v4 )
        {
          v2[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v2 += 3;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)a1;
    }
    v5 = 24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 24LL);
    if ( v5 >= 0x1000 )
    {
      v5 += 39LL;
      v6 = *(v2 - 1);
      if ( (unsigned __int64)v2 - v6 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180004EF6LL);
      }
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, (const struct std::nothrow_t *)v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
