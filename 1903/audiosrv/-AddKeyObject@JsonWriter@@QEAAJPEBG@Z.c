/*
 * XREFs of ?AddKeyObject@JsonWriter@@QEAAJPEBG@Z @ 0x1801451A4
 * Callers:
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x180102A2C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102E30 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18014571C (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyObject(JsonWriter *this, const unsigned __int16 *a2)
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
                     " : {",
                     4LL);
        if ( appended >= 0 )
        {
          *((_DWORD *)this + (*((_DWORD *)this + 34))++ + 2) = 0;
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
