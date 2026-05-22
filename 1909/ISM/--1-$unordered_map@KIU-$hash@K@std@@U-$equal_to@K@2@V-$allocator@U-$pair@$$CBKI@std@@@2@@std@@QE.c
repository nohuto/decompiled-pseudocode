/*
 * XREFs of ??1?$unordered_map@KIU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA@XZ @ 0x1800BAAC4
 * Callers:
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$2 @ 0x1800BC1EB (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<unsigned long,unsigned int>::~unordered_map<unsigned long,unsigned int>(_QWORD *a1)
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
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x18);
      v5 = (_QWORD *)a1[1];
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x18);
}
