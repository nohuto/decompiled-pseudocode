/*
 * XREFs of _SysCtxOpenControlSet @ 0x14073CE88
 * Callers:
 *     _SysCtxOpenMachine @ 0x14073CC58 (_SysCtxOpenMachine.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C8B4C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406D4A5C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 */

__int64 __fastcall SysCtxOpenControlSet(__int64 a1, char *a2, __int64 a3, HANDLE *a4)
{
  char v7; // r15
  unsigned int KeyTransacted; // ebx
  unsigned int v10; // eax
  _DWORD v11[4]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+60h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-11h] BYREF
  int v14; // [rsp+70h] [rbp-9h] BYREF
  wchar_t pszDest[16]; // [rsp+78h] [rbp-1h] BYREF

  *a4 = 0LL;
  v11[0] = 0;
  Handle = 0LL;
  v7 = 0;
  KeyTransacted = RegRtlOpenKeyTransacted(a2, L"CurrentControlSet", 0, 0x2000000u, a4, a3);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RegRtlOpenKeyTransacted(a2, L"Select", 0, 1u, &Handle, a3);
    if ( KeyTransacted == -1073741772 )
      KeyTransacted = RegRtlCreateKeyTransacted(a2, L"Select", 0, 3u, 0LL, 0, &Handle, 0LL, a3);
    if ( !KeyTransacted )
    {
      LODWORD(v12) = 4;
      v10 = RegRtlQueryValue(Handle, L"Current", &v14, v11, (unsigned int *)&v12);
      KeyTransacted = v10;
      if ( v10 == -1073741772 )
      {
        v11[0] = 1;
        v7 = 1;
        KeyTransacted = RegRtlSetValue(Handle, L"Current", 4u, v11, 4u);
        if ( KeyTransacted )
          goto LABEL_2;
      }
      else
      {
        if ( v10 )
          goto LABEL_2;
        if ( v14 != 4 || (_DWORD)v12 != 4 )
          goto LABEL_19;
      }
      if ( v11[0] <= 0x3E7u && RtlStringCchPrintfW(pszDest, 0xEuLL, L"ControlSet%03d") >= 0 )
      {
        KeyTransacted = RegRtlOpenKeyTransacted(a2, pszDest, 0, 0x2000000u, a4, a3);
        if ( KeyTransacted == -1073741772 && v7 )
          KeyTransacted = RegRtlCreateKeyTransacted(a2, pszDest, 0, 0x2000000u, 0LL, 0, a4, 0LL, a3);
        goto LABEL_2;
      }
LABEL_19:
      KeyTransacted = -1073741811;
    }
  }
LABEL_2:
  if ( Handle )
    ZwClose(Handle);
  return KeyTransacted;
}
