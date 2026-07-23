/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x1800EBCB0
 * Callers:
 *     LdrpGetModuleName @ 0x18006A6E8 (LdrpGetModuleName.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlFindUnicodeSubstring @ 0x1800EBB40 (RtlFindUnicodeSubstring.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800EC0CC (RtlpWow64SelectSystem32PathInternal.c)
 */

ULONG __cdecl RtlReplaceSystemDirectoryInPath(
        PUNICODE_STRING Destination,
        USHORT Machine,
        USHORT TargetMachine,
        BOOLEAN IncludePathSeperator)
{
  USHORT v5; // di
  ULONG result; // eax
  __int64 v8; // rdx
  ULONG v9; // ebx
  unsigned __int16 v10; // di
  PWCHAR UnicodeSubstring; // rax
  _UNICODE_STRING SearchString; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v13; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = Machine;
  if ( Machine == TargetMachine )
    return 0;
  LOBYTE(Machine) = IncludePathSeperator;
  result = RtlpWow64SelectSystem32PathInternal(TargetMachine, Machine, &v13);
  v9 = 0;
  if ( (result & 0x80000000) == 0 )
  {
    LOBYTE(v8) = IncludePathSeperator;
    result = RtlpWow64SelectSystem32PathInternal(v5, v8, &SearchString);
    if ( (result & 0x80000000) == 0 )
    {
      v10 = v13;
      if ( SearchString.Length != v13 )
        return -1073741811;
      UnicodeSubstring = RtlFindUnicodeSubstring(Destination, &SearchString, 1u);
      if ( UnicodeSubstring )
        memmove(UnicodeSubstring, Src, v10);
      return v9;
    }
  }
  return result;
}
