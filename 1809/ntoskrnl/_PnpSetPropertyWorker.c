/*
 * XREFs of _PnpSetPropertyWorker @ 0x1406E7470
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x1406E6CCC (_PnpSetGenericStoreProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140015DA0 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpSetPropertyWorker(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        ULONG a7)
{
  int v10; // ebx
  int Key; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  HANDLE v20; // [rsp+90h] [rbp-80h] BYREF
  HANDLE v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  int v23; // [rsp+A4h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-60h]
  __int64 v26; // [rsp+B8h] [rbp-58h]
  size_t pcchLength; // [rsp+C0h] [rbp-50h] BYREF
  wchar_t Dst[12]; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[40]; // [rsp+E0h] [rbp-30h] BYREF

  v25 = a2;
  v26 = a6;
  v23 = 0;
  v22 = 0;
  v21 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  if ( a7 > 0x7FFFFFFF )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v10 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  if ( a5 == 25 && a3 && *a3 )
    return (unsigned int)-1073741811;
  if ( RtlStringCchPrintfExW(pszDest, 0x27uLL, 0LL, 0LL, 0x800u, L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}") < 0 )
    goto LABEL_26;
  swprintf_s(Dst, 9uLL, L"%04lX", *(unsigned int *)(a4 + 16));
  v10 = PnpOpenPropertiesKey(a1, v25, 0LL, 4, 1, (__int64)pszFormat, &v21);
  if ( v10 < 0 )
  {
    v21 = 0LL;
    goto LABEL_13;
  }
  Key = PnpCtxRegCreateKey(a1, (_DWORD)v21, (unsigned int)pszDest, 0, 4, 0LL, (__int64)&v20, (__int64)&v23);
  if ( Key == -1073741444 )
    goto LABEL_26;
  if ( Key < 0 )
  {
    v20 = 0LL;
    v10 = Key;
    goto LABEL_13;
  }
  v12 = PnpCtxRegCreateKey(a1, (_DWORD)v20, (unsigned int)Dst, 0, 65542, 0LL, (__int64)&Handle, (__int64)&v22);
  if ( v12 == -1073741444 )
  {
LABEL_26:
    v10 = -1073741595;
LABEL_13:
    if ( Handle )
    {
      ZwClose(Handle);
      if ( v10 < 0 && v22 == 1 )
      {
        if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
          v16 = *(_QWORD *)(v15 + 8);
        else
          v16 = 0LL;
        RegRtlDeleteTreeInternal(v20, Dst, v16, 0LL);
      }
    }
    goto LABEL_15;
  }
  if ( v12 >= 0 )
  {
    v13 = RegRtlSetValue(Handle, a7);
    if ( v13 != -1073741444 )
    {
      if ( v13 < 0 )
        v10 = v13;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  Handle = 0LL;
  v10 = v12;
LABEL_15:
  if ( v20 )
  {
    ZwClose(v20);
    if ( v10 < 0 && v23 == 1 )
    {
      if ( a1 && (v17 = *(_QWORD *)(a1 + 224)) != 0 )
        v18 = *(_QWORD *)(v17 + 8);
      else
        v18 = 0LL;
      RegRtlDeleteTreeInternal(v21, pszDest, v18, 0LL);
    }
  }
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)v10;
}
