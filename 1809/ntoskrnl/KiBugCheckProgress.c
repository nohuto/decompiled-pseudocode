/*
 * XREFs of KiBugCheckProgress @ 0x140292610
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiHeadlessDisplayString @ 0x140292C1C (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140328B14 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall KiBugCheckProgress(unsigned int a1)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  const wchar_t *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 *v8; // [rsp+30h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  char v10; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x80000LL;
  v8 = 0LL;
  v2 = IopAutoReboot != 0;
  DestinationString.Buffer = (wchar_t *)&v10;
  v7 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 2) != 0 )
  {
    LOBYTE(v3) = v2;
    BgpFwDisplayBugCheckProgressUpdate(a1, &v7, v3);
  }
  BgpFwReleaseLock();
  if ( a1 )
  {
    KiHeadlessDisplayString(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v7 && *((_QWORD *)&v7 + 1) && v8 )
    {
      KiHeadlessDisplayString(*(_QWORD *)(v7 + 8), *(unsigned __int16 *)v7);
      KiHeadlessDisplayString(L" ", 4LL);
      KiHeadlessDisplayString(*(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v7 + 1));
      KiHeadlessDisplayString(DestinationString.Buffer, DestinationString.Length);
      v4 = *v8;
      v5 = (const wchar_t *)*((_QWORD *)v8 + 1);
    }
    else
    {
      RtlUnicodeStringPrintf(&DestinationString, L"%lu", a1);
      KiHeadlessDisplayString(DestinationString.Buffer, DestinationString.Length);
      v4 = 4LL;
      v5 = L"%";
    }
    KiHeadlessDisplayString(v5, v4);
  }
  if ( a1 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
