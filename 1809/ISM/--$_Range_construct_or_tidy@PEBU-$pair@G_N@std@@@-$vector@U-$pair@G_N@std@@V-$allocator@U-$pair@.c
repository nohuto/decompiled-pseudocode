/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180037C64
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x1800015C0 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180037CF0 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  unsigned int *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  unsigned __int64 v9; // r8

  v4 = a2;
  v5 = a3 - (_QWORD)a2;
  result = std::vector<enum _Button>::_Buy(&xmmword_1801937E8, (__int64)(a3 - (_QWORD)a2) >> 2);
  v7 = 0LL;
  if ( (_BYTE)result )
  {
    v8 = xmmword_1801937E8;
    v9 = (v5 + 3) >> 2;
    if ( (unsigned __int64)v4 > a3 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        result = *v4;
        *v8++ = result;
        ++v4;
        ++v7;
      }
      while ( v7 != v9 );
    }
    *(&xmmword_1801937E8 + 1) = v8;
  }
  return result;
}
