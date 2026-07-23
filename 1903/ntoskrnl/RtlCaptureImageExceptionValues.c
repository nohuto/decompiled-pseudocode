/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14019C11C
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1401AA168 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r9
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = (_QWORD *)a2;
  v4 = a3;
  LOWORD(a3) = 3;
  LOBYTE(a2) = 1;
  v5 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, v4, &v8);
  v6 = v8;
  if ( v5 < 0 )
    v6 = 0LL;
  result = 0LL;
  *v3 = v6;
  return result;
}
