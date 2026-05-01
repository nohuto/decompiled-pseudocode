/*
 * XREFs of ?RmpActivityHostRemoveResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B56C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000AF10 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostRemoveResourceSet(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax

  v2 = a1[180];
  v4 = 3 * (a2 + 44LL);
  v5 = a1 + 177;
  v6 = a1[177];
  if ( *(__int64 **)(v6 + 8) != a1 + 177 || (v7 = (_QWORD *)a1[178], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *v5 = 0LL;
  v5[1] = 0LL;
  --*(_DWORD *)(v2 + 8 * v4 + 16);
  v8 = *a1;
  *((_DWORD *)a1 + 362) = 2;
  (*(void (__fastcall **)(__int64 *))(v8 + 16))(a1);
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
}
