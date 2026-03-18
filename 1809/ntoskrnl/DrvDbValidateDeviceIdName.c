/*
 * XREFs of DrvDbValidateDeviceIdName @ 0x140903998
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406F5040 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140015DA0 (RtlUnalignedStringCchLengthW.c)
 *     wcschr @ 0x1401976B0 (wcschr.c)
 */

__int64 __fastcall DrvDbValidateDeviceIdName(__int64 a1, const wchar_t *a2)
{
  NTSTATUS v3; // ebx
  wchar_t *v4; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v3 < 0 || (v4 = wcschr(a2, 0x5Cu)) != 0LL && (v4 == a2 || !v4[1] || wcschr(v4 + 1, 0x5Cu)) )
    return (unsigned int)-1073741773;
  return (unsigned int)v3;
}
