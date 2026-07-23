/*
 * XREFs of HvlSvmCreatePasidSpace @ 0x140275B90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmCreatePasidSpace(int a1, int a2)
{
  __int64 v2; // rdx
  __int16 v3; // cx
  __int64 v4; // r8
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  while ( 1 )
  {
    LOWORD(v2) = HvcallpExtendedFastHypercall(65693LL, (__int64)v6, 8LL);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v2);
}
