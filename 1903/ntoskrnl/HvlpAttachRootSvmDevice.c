/*
 * XREFs of HvlpAttachRootSvmDevice @ 0x14028A3E0
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x140289A10 (HvlSvmAttachPasidSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401BDFF0 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401BE0F0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAttachRootSvmDevice(unsigned int a1, int a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+3Ch] [rbp-34h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]

  v13 = 0;
  v7 = -1LL;
  v9 = 0x40000000;
  v10 = 7LL;
  v11 = a1;
  v8 = a1;
  v12 = a2;
  while ( 1 )
  {
    v2 = HvcallpExtendedFastHypercall(65666LL, (__int64)&v7, 40LL);
    if ( !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
