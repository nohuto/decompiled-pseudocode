/*
 * XREFs of ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C006B224
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C0023C68 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C006B0CC (HmgAllocateObjectAttr.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00ABE90 (GrepSecureVirtualMemory.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00ABEC0 (GrepUnsecureVirtualMemory.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

PVOID __fastcall HmgAllocateSecureUserMemory(void **a1)
{
  const struct reg_FeatureDescriptor *v2; // rcx
  HANDLE v3; // rax
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp+18h] BYREF
  HANDLE SecureHandle; // [rsp+58h] [rbp+20h]

  Address = 0LL;
  Size = 4096LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u) >= 0 )
  {
    if ( (unsigned int)EvaluateCurrentState(v2) )
      v3 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
    else
      v3 = MmSecureVirtualMemory(Address, Size, 4u);
    SecureHandle = v3;
    *a1 = v3;
    if ( v3 )
    {
      memset(Address, 0, Size);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
      return 0LL;
    }
  }
  return Address;
}
