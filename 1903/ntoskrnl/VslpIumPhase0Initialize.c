/*
 * XREFs of VslpIumPhase0Initialize @ 0x140A39B20
 * Callers:
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 *     VslInitSystem @ 0x140A218C4 (VslInitSystem.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x1400FA170 (MmBuildMdlForNonPagedPool.c)
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeIsTsxDisabled @ 0x1401BE350 (KeIsTsxDisabled.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeQueryKvaShadowInformation @ 0x14072D9B0 (KeQueryKvaShadowInformation.c)
 *     VslpIumPhase0InitializeNtKd @ 0x140A39E68 (VslpIumPhase0InitializeNtKd.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  _KIDTENTRY64 *IdtBase; // rbx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  NTSTATUS v7; // eax
  unsigned int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h]
  struct _MDL MemoryDescriptorList; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v15[14]; // [rsp+98h] [rbp-70h] BYREF

  v8 = 0;
  memset(&MemoryDescriptorList, 0, 0x38uLL);
  v12 = 0LL;
  v13 = 0LL;
  memset(v15, 0, 0x68uLL);
  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    LODWORD(v15[1]) = 167772167;
    v15[2] = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL).QuadPart;
    VslpIumPhase0InitializeNtKd(a1, v15);
    IdtBase = KeGetPcr()->IdtBase;
    v15[7] = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList).QuadPart;
    v15[9] = MmGetPhysicalAddress(IdtBase).QuadPart;
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    ((void (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140426798[0])(45LL, 8LL, &v15[8], &v9);
    MEMORY[0xFFFFF7800000036C] |= 0x100u;
    if ( KiKvaShadowMode )
      HIDWORD(v15[1]) |= 1u;
    KeQueryKvaShadowInformation(&v8, 4u, &v9);
    v4 = HIDWORD(v15[1]);
    if ( ((v8 >> 4) & 1) != 0 )
    {
      v4 = HIDWORD(v15[1]) | 2;
      HIDWORD(v15[1]) |= 2u;
    }
    if ( BBTBuffer )
    {
      v4 |= 4u;
      HIDWORD(v15[1]) = v4;
    }
    if ( ((v8 >> 4) & 1) != 0 && KiImplementedPhysicalBits > 0 )
      HIDWORD(v15[1]) = v4 | 8;
    if ( KeIsTsxDisabled() )
      HIDWORD(v15[1]) = v5 | 0x10;
    v6 = *(_DWORD *)(a1 + 264);
    v11 = VslpNestedPageProtectionFlags & 2;
    if ( (v6 & 1) != 0 && (v6 & 2) == 0 && (VslpNestedPageProtectionFlags & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64 *, int *))off_140426798[0])(48LL, 16LL, &v12, &v9);
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.ByteCount = v13;
      MemoryDescriptorList.StartVa = (PVOID)(v12 & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = v12 & 0xFFF;
      MemoryDescriptorList.Size = 8 * ((((v12 & 0xFFF) + (unsigned __int64)(unsigned int)v13 + 4095) >> 12) + 6);
      MmBuildMdlForNonPagedPool(&MemoryDescriptorList);
      v15[6] = v12;
    }
    v7 = VslpEnterIumSecureMode(2, 208LL, 0LL, (__int64)v15);
    if ( v7 < 0 )
      KeBugCheckEx(0x6Fu, v7, 0LL, 1uLL, 0LL);
    if ( LODWORD(v15[2]) != 167772167 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    dword_140463024 = HIDWORD(v15[2]);
    qword_140463030 = (__int64)&qword_140463028;
    qword_140463028 = (__int64)&qword_140463028;
    dword_140463038 = HIDWORD(v15[2]);
    VslpIumThreadSemaphore = 5;
    byte_140463022 = 8;
    VslVsmEnabled = 1;
    v10 = 0;
    ((void (__fastcall *)(__int64, __int64, int *))off_1404267A0[0])(16LL, 4LL, &v10);
    return ((__int64 (__fastcall *)(__int64, __int64, int *))off_1404267A0[0])(18LL, 4LL, &v11);
  }
  return result;
}
