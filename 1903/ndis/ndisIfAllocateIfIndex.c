/*
 * XREFs of ndisIfAllocateIfIndex @ 0x1C00251FC
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C80 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ?ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z @ 0x1C003F2A0 (-ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z.c)
 */

__int64 __fastcall ndisIfAllocateIfIndex(unsigned int a1, _DWORD *a2)
{
  ULONG64 v3; // rdi
  __int64 ClearBitsAndSet; // rax
  __int64 result; // rax
  int v6; // edx

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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        22,
        34,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
        v3);
    }
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
