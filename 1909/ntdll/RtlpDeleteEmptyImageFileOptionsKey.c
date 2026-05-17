/*
 * XREFs of RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E1C88
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtDeleteKey @ 0x18009E860 (NtDeleteKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08 (RtlpIsEmptyImageFileOptionsKey.c)
 */

__int64 __fastcall RtlpDeleteEmptyImageFileOptionsKey(unsigned __int16 *a1)
{
  int v2; // ebx
  __int64 result; // rax
  char IsEmptyImageFileOptionsKey; // si
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  while ( 1 )
  {
    result = RtlpOpenImageFileOptionsKeyEx(a1, 65545LL, 0, &Handle);
    if ( (int)result < 0 )
      break;
    IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(Handle);
    if ( IsEmptyImageFileOptionsKey )
      NtDeleteKey();
    NtClose(Handle);
    if ( IsEmptyImageFileOptionsKey )
    {
      if ( (unsigned int)++v2 < 2 )
        continue;
    }
    return 0LL;
  }
  if ( (_DWORD)result != -1073741772 )
    return result;
  return 0LL;
}
