/*
 * XREFs of ?EndArray@JsonWriter@@QEAAJXZ @ 0x180145140
 * Callers:
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x18010258C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102990 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x180145534 (-_InsideArray@JsonWriter@@AEAAHXZ.c)
 */

__int64 __fastcall JsonWriter::EndArray(JsonWriter *this)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  if ( !(unsigned int)JsonWriter::_InsideArray(this) )
    return 2147758081LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, "]", 1LL);
  if ( (int)result >= 0 )
  {
    --*((_DWORD *)this + 34);
    *((_DWORD *)this + 35) = 1;
  }
  return result;
}
