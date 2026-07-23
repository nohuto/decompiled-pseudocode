/*
 * XREFs of RtlpGetDirPath @ 0x180057540
 * Callers:
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 * Callees:
 *     wcschr @ 0x180095A50 (wcschr.c)
 *     wcsrchr @ 0x180095C90 (wcsrchr.c)
 */

const wchar_t *__fastcall RtlpGetDirPath(wchar_t *Str, _QWORD *a2)
{
  const wchar_t *v3; // rbx
  wchar_t *v4; // rax
  wchar_t *v5; // rsi
  _QWORD *SubSystemTib; // rcx
  __int64 v8; // rbx

  v3 = Str;
  if ( !Str )
  {
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && (v8 = SubSystemTib[1]) != 0 )
      v3 = *(const wchar_t **)(v8 + 8);
    else
      v3 = *(const wchar_t **)(LdrpImageEntry + 80);
  }
  v4 = wcschr(v3, 0x5Cu);
  v5 = v4;
  if ( v4 )
  {
    v4 = wcsrchr(v4, 0x5Cu);
    if ( v4 == v5 )
      ++v4;
  }
  if ( v4 )
  {
    *a2 = (char *)v4 - (char *)v3;
    return v3;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
