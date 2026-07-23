/*
 * XREFs of CmpFireCleanupNotifications @ 0x1407EC6C4
 * Callers:
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpFireCleanupNotifications(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
  {
    result = a1 + 72;
    if ( i == (_QWORD *)(a1 + 72) )
      break;
    v4 = i[5];
    v5 = a1;
    v6 = i[7];
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(v4 + 40))(*(_QWORD *)(v4 + 32), 40LL, &v5);
  }
  return result;
}
