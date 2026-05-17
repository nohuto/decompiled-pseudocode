/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EAED0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800EABD0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtWriteFile @ 0x18009CF90 (NtWriteFile.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1800EB34C (RtlpRecordBootStatusData.c)
 */

__int64 RtlRestoreBootStatusDefaults()
{
  char v0; // cl
  int *v1; // rax
  __int64 v2; // rdx
  int v4; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v5[43]; // [rsp+74h] [rbp-8Ch] BYREF

  memset(v5, 0, 0xA4uLL);
  v4 = 168;
  RtlGetNtProductType(v5);
  v0 = 0;
  *(_WORD *)((char *)&v5[1] + 1) = 286;
  v1 = &v4;
  BYTE1(v5[11]) = 1;
  v2 = 168LL;
  HIBYTE(v5[1]) = 0;
  do
  {
    v0 -= *(_BYTE *)v1;
    v1 = (int *)((char *)v1 + 1);
    --v2;
  }
  while ( v2 );
  BYTE2(v5[11]) = v0;
  RtlpRecordBootStatusData(0LL, &v4, 0LL, 168LL);
  return NtWriteFile();
}
