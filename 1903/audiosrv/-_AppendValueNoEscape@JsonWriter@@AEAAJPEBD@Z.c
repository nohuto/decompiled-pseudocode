/*
 * XREFs of ?_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z @ 0x18014584C
 * Callers:
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG0@Z @ 0x180145254 (-AddKeyValue@JsonWriter@@QEAAJPEBG0@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGH@Z @ 0x180145304 (-AddKeyValue@JsonWriter@@QEAAJPEBGH@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGN@Z @ 0x1801453E0 (-AddKeyValue@JsonWriter@@QEAAJPEBGN@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z @ 0x1801454B0 (-AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JsonWriter::_AppendValueNoEscape(JsonWriter *this, const char *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = *(_QWORD *)this;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  return (*(__int64 (__fastcall **)(__int64, const char *, __int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, a2, v3, 0LL);
}
