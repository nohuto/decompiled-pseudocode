/*
 * XREFs of ?Commit@JsonWriter@@QEAAJXZ @ 0x18014559C
 * Callers:
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x180102A2C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x1801459E4 (-_InsideArray@JsonWriter@@AEAAHXZ.c)
 */

__int64 __fastcall JsonWriter::Commit(JsonWriter *this)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 (__fastcall *v4)(__int64, const char *, __int64); // r11
  const char *v5; // rdx
  __int64 result; // rax

  v2 = JsonWriter::_InsideArray(this);
  v5 = "]";
  if ( !v2 )
    v5 = "}";
  result = v4(v3, v5, 1LL);
  if ( (int)result >= 0 )
    --*((_DWORD *)this + 34);
  return result;
}
