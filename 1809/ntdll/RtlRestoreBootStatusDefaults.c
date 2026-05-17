/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EDCE0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800ED9E0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180062D30 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtWriteFile @ 0x1800A03E0 (NtWriteFile.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1800EE178 (RtlpRecordBootStatusData.c)
 */

__int64 RtlRestoreBootStatusDefaults()
{
  char v0; // cl
  _BYTE *v1; // rax
  __int64 v2; // rdx
  _DWORD v4[44]; // [rsp+70h] [rbp-90h] BYREF

  memset(v4, 0, 0xA8uLL);
  v4[0] = 168;
  RtlGetNtProductType(&v4[1]);
  v0 = 0;
  *(_WORD *)((char *)&v4[2] + 1) = 286;
  v1 = v4;
  BYTE1(v4[12]) = 1;
  v2 = 168LL;
  HIBYTE(v4[2]) = 0;
  do
  {
    v0 -= *v1++;
    --v2;
  }
  while ( v2 );
  BYTE2(v4[12]) = v0;
  RtlpRecordBootStatusData(0LL, v4, 0LL, 168LL);
  return NtWriteFile();
}
