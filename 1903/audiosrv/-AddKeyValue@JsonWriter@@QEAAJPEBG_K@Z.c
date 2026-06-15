/*
 * XREFs of ?AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z @ 0x1801454B0
 * Callers:
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x180102E30 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?StringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801456A4 (-StringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?_AppendString@JsonWriter@@AEAAJPEBG@Z @ 0x18014571C (-_AppendString@JsonWriter@@AEAAJPEBG@Z.c)
 *     ?_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z @ 0x18014584C (-_AppendValueNoEscape@JsonWriter@@AEAAJPEBD@Z.c)
 */

__int64 __fastcall JsonWriter::AddKeyValue(JsonWriter *this, const unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  __int16 v8; // [rsp+4Ch] [rbp-1Ch]

  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v8 = 0;
  result = StringCbPrintfA((char *)v6, 0x1EuLL, "%I64u", a3);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)this + 35)
      || (result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                     *(_QWORD *)this,
                     ", ",
                     2LL),
          (int)result >= 0) )
    {
      result = JsonWriter::_AppendString(this, a2);
      if ( (int)result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
                   *(_QWORD *)this,
                   " : ",
                   3LL);
        if ( (int)result >= 0 )
        {
          result = JsonWriter::_AppendValueNoEscape(this, (const char *)v6);
          if ( (int)result >= 0 )
            *((_DWORD *)this + 35) = 1;
        }
      }
    }
  }
  return result;
}
