/*
 * XREFs of VslSetupLiveDumpBufferInSk @ 0x14027C1C0
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x140277CB8 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14027C4FC (VslpAddLiveDumpBufferChunk.c)
 *     VslpSetupLiveDumpBuffer @ 0x14027C858 (VslpSetupLiveDumpBuffer.c)
 */

__int64 __fastcall VslSetupLiveDumpBufferInSk(
        PVOID *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdi
  NTSTATUS v10; // ebx
  _QWORD v12[14]; // [rsp+20h] [rbp-B8h] BYREF

  v7 = a2;
  memset(v12, 0, 0x68uLL);
  v12[1] = v7 * a3;
  v10 = VslpEnterIumSecureMode(2u, 49LL, 0, (__int64)v12);
  if ( v10 >= 0 )
  {
    for ( ; (_DWORD)v7; LODWORD(v7) = v7 - 1 )
    {
      v10 = VslpAddLiveDumpBufferChunk(*a1);
      if ( v10 < 0 )
        goto LABEL_6;
      ++a1;
    }
    v10 = VslpSetupLiveDumpBuffer(a4, a5, a6);
    if ( v10 < 0 )
    {
LABEL_6:
      memset(v12, 0, 0x68uLL);
      VslpEnterIumSecureMode(2u, 53LL, 0, (__int64)v12);
    }
  }
  return (unsigned int)v10;
}
