/*
 * XREFs of LdrEnumerateLoadedModules @ 0x180073D60
 * Callers:
 *     RtlLockModuleSection @ 0x180073C20 (RtlLockModuleSection.c)
 * Callees:
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrEnumerateLoadedModules(int a1, void (__fastcall *a2)(__int64 *, __int64, char *), __int64 a3)
{
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // rcx
  __int64 *i; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+40h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+20h]

  if ( a1 || !a2 )
    return 3221225485LL;
  v14 = 0;
  v5 = 4096LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v6 = 1;
    v15 = 1;
  }
  else
  {
    v6 = 0;
    v15 = 0;
    sub_18002E73C(0);
  }
  sub_18002D7BC(v5);
  for ( i = (__int64 *)qword_1801653D0; i != &qword_1801653D0; i = (__int64 *)*i )
  {
    a2(i, a3, &v14);
    if ( v14 )
      break;
  }
  sub_18002D75C(v7, 15, 0);
  if ( !v6 )
    sub_180073E1C(v10, v9, v11, v12);
  return 0LL;
}
