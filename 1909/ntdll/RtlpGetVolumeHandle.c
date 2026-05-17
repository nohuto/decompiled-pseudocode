/*
 * XREFs of RtlpGetVolumeHandle @ 0x18008C6D8
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18008C5C0 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180114664 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000283C (StringCbPrintfW.c)
 *     RtlStringLengthWorkerW @ 0x180003214 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x18009D930 (ZwCreateFile.c)
 */

__int64 __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v5; // [rsp+60h] [rbp-29h] BYREF
  __int64 v6; // [rsp+68h] [rbp-21h] BYREF
  wchar_t *v7; // [rsp+70h] [rbp-19h]
  __int64 v8; // [rsp+78h] [rbp-11h] BYREF
  int v9; // [rsp+80h] [rbp-9h] BYREF
  __int64 v10; // [rsp+88h] [rbp-1h]
  __int64 *v11; // [rsp+90h] [rbp+7h]
  int v12; // [rsp+98h] [rbp+Fh]
  __int128 v13; // [rsp+A0h] [rbp+17h]
  _BYTE v14[16]; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t pszDest[12]; // [rsp+C0h] [rbp+37h] BYREF

  v2 = *a1;
  v5 = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v6 = 0LL;
  v7 = 0LL;
  if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v8) >= 0 )
  {
    LOWORD(v6) = 2 * v8;
    WORD1(v6) = 2 * v8 + 2;
    v7 = pszDest;
  }
  v10 = 0LL;
  v9 = 48;
  v12 = 64;
  v11 = &v6;
  v13 = 0LL;
  result = ZwCreateFile(&v5, 1048704LL, &v9, v14, 0LL, 0, 7, 1, 32, 0LL, 0);
  if ( (int)result >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  return result;
}
