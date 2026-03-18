/*
 * XREFs of EtwpSysModuleRunDown @ 0x14070A0E8
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     HvlQueryConnection @ 0x140147F60 (HvlQueryConnection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 */

__int64 __fastcall EtwpSysModuleRunDown(__int64 a1, char a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int16 v6; // ax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-51h] BYREF
  __int16 v12; // [rsp+58h] [rbp-39h]
  int v13; // [rsp+5Ah] [rbp-37h]
  __int16 v14; // [rsp+5Eh] [rbp-33h]
  _QWORD v15[8]; // [rsp+68h] [rbp-29h] BYREF
  PVOID *v16; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+1Fh]
  void *v18; // [rsp+C8h] [rbp+37h]
  __int64 v19; // [rsp+D0h] [rbp+3Fh]

  v13 = 0;
  v14 = 0;
  memset(v15, 0, sizeof(v15));
  if ( !a2 )
  {
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1080);
    v16 = &PsNtosImageBase;
    v17 = 8LL;
    EtwpLogKernelEvent((__int64)&v16, v5, v4, 1u, 0x1421u, 0x401802u);
    if ( !(unsigned int)HvlQueryConnection(&v10) )
    {
      v8 = *(_DWORD *)a1;
      v9 = *(_QWORD *)(a1 + 1080);
      v16 = (PVOID *)&v10;
      v17 = 8LL;
      EtwpLogKernelEvent((__int64)&v16, v9, v8, 1u, 0x1422u, 0x401802u);
    }
  }
  v11[2] = a1;
  v11[1] = &v16;
  v11[0] = v15;
  v6 = 5123;
  if ( !a2 )
    v6 = 5124;
  v12 = v6;
  v15[5] = 0LL;
  v16 = (PVOID *)v15;
  v15[6] = 0LL;
  v18 = &EtwpNull;
  v17 = 56LL;
  v19 = 2LL;
  return MmEnumerateSystemImages(EtwpSystemImageEnumCallback, v11);
}
