/*
 * XREFs of ?EndObject@JsonWriter@@QEAAJXZ @ 0x180145198
 * Callers:
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x18010258C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102990 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JsonWriter::EndObject(JsonWriter *this)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + *((int *)this + 34) + 1) )
    return 2147758082LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
             *(_QWORD *)this,
             "}",
             1LL);
  if ( (int)result >= 0 )
  {
    --*((_DWORD *)this + 34);
    *((_DWORD *)this + 35) = 1;
  }
  return result;
}
