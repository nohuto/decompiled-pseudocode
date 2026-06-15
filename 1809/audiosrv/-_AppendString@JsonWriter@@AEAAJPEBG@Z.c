/*
 * XREFs of ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x1801416BC
 * Callers:
 *     ?AddKeyArray@JsonWriter@@QEAAJPEBG@Z @ 0x180141094 (-AddKeyArray@JsonWriter@@QEAAJPEBG@Z.c)
 *     ?AddKeyObject@JsonWriter@@QEAAJPEBG@Z @ 0x180141148 (-AddKeyObject@JsonWriter@@QEAAJPEBG@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG0@Z @ 0x1801411F8 (-AddKeyValue@JsonWriter@@QEAAJPEBG0@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGH@Z @ 0x1801412A8 (-AddKeyValue@JsonWriter@@QEAAJPEBGH@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGN@Z @ 0x180141384 (-AddKeyValue@JsonWriter@@QEAAJPEBGN@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z @ 0x180141454 (-AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_AppendValue@JsonWriter@@AEAAJPEBG@Z @ 0x18014172C (-_AppendValue@JsonWriter@@AEAAJPEBG@Z.c)
 */

int __fastcall JsonWriter::_AppendString(JsonWriter *this, const unsigned __int16 *a2)
{
  int result; // eax

  result = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64))(**(_QWORD **)this + 32LL))(
             *(_QWORD *)this,
             L"\"",
             1LL);
  if ( result >= 0 )
  {
    result = JsonWriter::_AppendValue(this, a2);
    if ( result >= 0 )
      return (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64))(**(_QWORD **)this + 32LL))(
               *(_QWORD *)this,
               L"\"",
               1LL);
  }
  return result;
}
