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

NTSTATUS __cdecl LdrEnumerateLoadedModules(BOOLEAN ReservedFlag, PLDR_ENUM_CALLBACK EnumProc, PVOID Context)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+20h]

  if ( ReservedFlag || !EnumProc )
    return -1073741811;
  v13 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v5 = 1;
    v14 = 1;
  }
  else
  {
    v5 = 0;
    v14 = 0;
    sub_18002E73C(0);
  }
  sub_18002D7BC();
  for ( i = (__int64 *)qword_1801653D0; i != &qword_1801653D0; i = (__int64 *)*i )
  {
    ((void (__fastcall *)(__int64 *, PVOID, char *))EnumProc)(i, Context, &v13);
    if ( v13 )
      break;
  }
  sub_18002D75C(v6, 15, 0);
  if ( !v5 )
    sub_180073E1C(v9, v8, v10, v11);
  return 0;
}
