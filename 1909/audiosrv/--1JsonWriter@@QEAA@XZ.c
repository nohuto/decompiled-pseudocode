/*
 * XREFs of ??1JsonWriter@@QEAA@XZ @ 0x180102554
 * Callers:
 *     __lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator()_::_1_::dtor$1 @ 0x180102946 (__lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JsonWriter::~JsonWriter(JsonWriter *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
