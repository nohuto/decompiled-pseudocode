/*
 * XREFs of KiBugCheckProgress @ 0x1402A8BD0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiBugCheckConvertProgressValueToUnicodeString @ 0x1402A8A54 (KiBugCheckConvertProgressValueToUnicodeString.c)
 *     KiHeadlessDisplayString @ 0x1402A9248 (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140349C04 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall KiBugCheckProgress(unsigned int a1)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  const wchar_t *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 *v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  char *v10; // [rsp+40h] [rbp-20h]
  char v11; // [rsp+48h] [rbp-18h] BYREF

  v9 = 0x80000LL;
  v8 = 0LL;
  v2 = IopAutoReboot != 0;
  v10 = &v11;
  v7 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_14042C010 & 2) != 0 )
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
      KiHeadlessDisplayString(v10, (unsigned __int16)v9);
      v4 = *v8;
      v5 = (const wchar_t *)*((_QWORD *)v8 + 1);
    }
    else
    {
      KiBugCheckConvertProgressValueToUnicodeString(a1, (__int64)&v9);
      KiHeadlessDisplayString(v10, (unsigned __int16)v9);
      v4 = 4LL;
      v5 = L"%";
    }
    KiHeadlessDisplayString(v5, v4);
  }
  if ( a1 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
