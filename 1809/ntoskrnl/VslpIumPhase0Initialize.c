/*
 * XREFs of VslpIumPhase0Initialize @ 0x1409F5600
 * Callers:
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 *     VslInitSystem @ 0x1409DF5F0 (VslInitSystem.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140102040 (MmBuildMdlForNonPagedPool.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeIsTsxDisabled @ 0x1401B4454 (KeIsTsxDisabled.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeQueryKvaShadowInformation @ 0x140845A48 (KeQueryKvaShadowInformation.c)
 *     VslpIumPhase0InitializeNtKd @ 0x1409F5928 (VslpIumPhase0InitializeNtKd.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  _KIDTENTRY64 *IdtBase; // rbx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  NTSTATUS v8; // eax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  struct _MDL MemoryDescriptorList; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v16[8]; // [rsp+98h] [rbp-70h] BYREF
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+A8h] [rbp-60h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  PHYSICAL_ADDRESS v21; // [rsp+D0h] [rbp-38h]
  _BYTE v22[8]; // [rsp+D8h] [rbp-30h] BYREF
  PHYSICAL_ADDRESS v23; // [rsp+E0h] [rbp-28h]

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    memset(v16, 0, (unsigned int)(v3 + 104));
    v17 = 167772166;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    VslpIumPhase0InitializeNtKd(a1, v16);
    IdtBase = KeGetPcr()->IdtBase;
    v21 = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList);
    v23 = MmGetPhysicalAddress(IdtBase);
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    ((void (__fastcall *)(__int64, __int64, _BYTE *, int *))off_140401458[0])(45LL, 8LL, v22, &v9);
    MEMORY[0xFFFFF7800000036C] |= 0x100u;
    if ( KiKvaShadowMode )
      v18 |= 1u;
    KeQueryKvaShadowInformation(&v10, 4u, &v9);
    v5 = v18;
    if ( ((v10 >> 4) & 1) != 0 )
    {
      v5 = v18 | 2;
      v18 |= 2u;
    }
    if ( BBTBuffer )
    {
      v5 |= 4u;
      v18 = v5;
    }
    if ( ((v10 >> 4) & 1) != 0 && KiImplementedPhysicalBits > 0 )
      v18 = v5 | 8;
    if ( KeIsTsxDisabled() )
      v18 = v6 | 0x10;
    v7 = *(_DWORD *)(a1 + 264);
    v12 = VslpNestedPageProtectionFlags & 2;
    if ( (v7 & 1) != 0 && (v7 & 2) == 0 && (VslpNestedPageProtectionFlags & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64 *, int *))off_140401458[0])(48LL, 16LL, &v13, &v9);
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.ByteCount = v14;
      MemoryDescriptorList.StartVa = (PVOID)(v13 & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = v13 & 0xFFF;
      MemoryDescriptorList.Size = 8 * ((((v13 & 0xFFF) + (unsigned __int64)(unsigned int)v14 + 4095) >> 12) + 6);
      MmBuildMdlForNonPagedPool(&MemoryDescriptorList);
      v20 = v13;
    }
    v8 = VslpEnterIumSecureMode(2u, 208LL, 0, (__int64)v16);
    if ( v8 < 0 )
      KeBugCheckEx(0x6Fu, v8, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772166 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    dword_140438484 = PhysicalAddress.HighPart;
    qword_140438490 = (__int64)&qword_140438488;
    qword_140438488 = (__int64)&qword_140438488;
    dword_140438498 = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore = 5;
    byte_140438482 = 8;
    VslVsmEnabled = 1;
    v11 = 0;
    ((void (__fastcall *)(__int64, __int64, int *))off_140401460[0])(16LL, 4LL, &v11);
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_140401460[0])(18LL, 4LL, &v12);
  }
  return result;
}
