/*
 * XREFs of ndisIfAllocateIfIndex @ 0x1C001C260
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 * Callees:
 *     ?ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z @ 0x1C0025BCC (-ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

__int64 __fastcall ndisIfAllocateIfIndex(unsigned int a1, _DWORD *a2)
{
  ULONG64 v3; // rdi
  __int64 ClearBitsAndSet; // rax
  __int64 result; // rax

  *a2 = 0;
  v3 = a1;
  if ( a1 - 1 <= 0xFFFD )
  {
    if ( a1 >= ndisIfAllocatedInterfaceIndexes.SizeOfBitMap )
    {
      result = ndisIfGrowAllocatedInterfaceIndexBitmap(a1);
      if ( (_DWORD)result )
        return result;
    }
    if ( !RtlTestBitEx(&ndisIfAllocatedInterfaceIndexes, v3) )
    {
      RtlSetBitEx(&ndisIfAllocatedInterfaceIndexes, v3);
      *a2 = v3;
      return 0LL;
    }
    if ( (unsigned __int8)byte_1C00A0265 >= 3u )
      WPP_SF_D(34LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (unsigned int)v3);
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&ndisIfAllocatedInterfaceIndexes, 1LL);
  if ( ClearBitsAndSet != -1 )
  {
LABEL_3:
    *a2 = ClearBitsAndSet;
    return 0LL;
  }
  result = ndisIfGrowAllocatedInterfaceIndexBitmap(ndisIfAllocatedInterfaceIndexes.SizeOfBitMap + 64);
  if ( !(_DWORD)result )
  {
    LODWORD(ClearBitsAndSet) = RtlFindClearBitsAndSetEx(&ndisIfAllocatedInterfaceIndexes, 1LL);
    goto LABEL_3;
  }
  return result;
}
