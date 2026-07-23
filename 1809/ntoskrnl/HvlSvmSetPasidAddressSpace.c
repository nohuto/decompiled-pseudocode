/*
 * XREFs of HvlSvmSetPasidAddressSpace @ 0x140276270
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmSetPasidAddressSpace(int a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int16 v4; // cx
  __int64 v5; // r8
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v7[1] = a1;
  v7[0] = a2;
  v8 = a3;
  while ( 1 )
  {
    LOWORD(v3) = HvcallpExtendedFastHypercall(65695LL, (__int64)v7, 16LL);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v3);
}
