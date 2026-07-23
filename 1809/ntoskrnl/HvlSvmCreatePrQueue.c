/*
 * XREFs of HvlSvmCreatePrQueue @ 0x140275C10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmCreatePrQueue(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4, int a5)
{
  int v9; // ecx
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // r8
  _QWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF

  memset(v14, 0, sizeof(v14));
  v14[0] = __PAIR64__(a2, a1);
  v14[1] = a3 >> 12;
  LODWORD(v14[2]) = a4;
  if ( HvlpVirtualProcessorsIdentityMapped )
    v9 = a5;
  else
    v9 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * a5 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * a5] << 6);
  HIDWORD(v14[2]) = v9;
  while ( 1 )
  {
    LOWORD(v10) = HvcallpExtendedFastHypercall(65703LL, (__int64)v14, 32LL);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v10) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v11, v10, v12) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v10);
}
