/*
 * XREFs of sub_18006591C @ 0x18006591C
 * Callers:
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

__int64 __fastcall sub_18006591C(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  const void *v4; // rdx
  _QWORD *v6; // rax

  v4 = a3;
  if ( a3[3] >= 0x10 )
    v4 = (const void *)*a3;
  v6 = std::string::append(a2, v4, a3[2]);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = 15LL;
  *(_BYTE *)v6 = 0;
  return a1;
}
