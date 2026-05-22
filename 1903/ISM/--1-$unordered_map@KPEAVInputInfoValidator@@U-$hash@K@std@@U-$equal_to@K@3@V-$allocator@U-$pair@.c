/*
 * XREFs of ??1?$unordered_map@KPEAVInputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@@std@@QEAA@XZ @ 0x1800BACA0
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$4 @ 0x18003BB65 (_Win32kInterop--Win32kInterop_--_1_--dtor$4.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$5 @ 0x18003BB7B (_Win32kInterop--Win32kInterop_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<unsigned long,InputInfoValidator *>::~unordered_map<unsigned long,InputInfoValidator *>(
        _QWORD *a1)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (_QWORD *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x20);
      v5 = (_QWORD *)a1[1];
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x20);
}
