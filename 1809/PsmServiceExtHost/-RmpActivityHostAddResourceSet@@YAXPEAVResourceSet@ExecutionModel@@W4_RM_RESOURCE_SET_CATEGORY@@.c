/*
 * XREFs of ?RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B4E4
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000AF10 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RmpActivityHostAddResourceSet(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 1440);
  v4 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = (_DWORD *)(v3 + 24 * (v4 + 44));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = *(_QWORD *)v5;
  result = (_QWORD *)(a1 + 1416);
  if ( *(_DWORD **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 1424) = v5;
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  *(_QWORD *)v5 = result;
  ++v5[4];
  *(_DWORD *)(a1 + 1448) = v4;
  return result;
}
