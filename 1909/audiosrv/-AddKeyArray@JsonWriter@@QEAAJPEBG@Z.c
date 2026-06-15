/*
 * XREFs of ?AddKeyArray@JsonWriter@@QEAAJPEBG@Z @ 0x180144C40
 * Callers:
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x18010258C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102990 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18014526C (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyArray(JsonWriter *this, const unsigned __int16 *a2)
{
  int appended; // ecx

  if ( *((_DWORD *)this + 34) < 0x20u )
  {
    if ( !*((_DWORD *)this + 35)
      || (appended = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                       *(_QWORD *)this,
                       ", ",
                       2LL),
          appended >= 0) )
    {
      appended = JsonWriter::_AppendString(this, a2);
      if ( appended >= 0 )
      {
        appended = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                     *(_QWORD *)this,
                     " : [",
                     4LL);
        if ( appended >= 0 )
        {
          *((_DWORD *)this + (*((_DWORD *)this + 34))++ + 2) = 1;
          *((_DWORD *)this + 35) = 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147209213;
  }
  return (unsigned int)appended;
}
