/*
 * XREFs of MiDbgCopyMemory @ 0x1402D0648
 * Callers:
 *     MmDbgCopyMemory @ 0x1402D164C (MmDbgCopyMemory.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     KeIsUserVaAccessAllowed @ 0x14012DBD4 (KeIsUserVaAccessAllowed.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCopyFromUntrustedMemory @ 0x1402D03E4 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1402D0510 (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x1402D0D9C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D0EBC (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402D1268 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1402D1348 (MiDbgWriteCheck.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, _BYTE *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  SIZE_T v5; // r13
  unsigned int v8; // r14d
  int v9; // r15d
  int v10; // edx
  int v11; // r8d
  char v12; // bl
  unsigned int v13; // eax
  unsigned int v14; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a3;
  v16[0] = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  memset(v18, 0, 0x20uLL);
  v16[1] = 0LL;
  if ( !(_DWORD)v5 )
    return 3221225713LL;
  v8 = a5;
  if ( (a5 & 0x40) != 0 )
  {
    v9 = a5 & 2;
    if ( (a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0 )
      return 3221225714LL;
  }
  else
  {
    v9 = a5 & 2;
  }
  v12 = 0;
  if ( KeIsUserVaAccessAllowed() )
    v12 = 2;
  if ( v11 )
  {
    if ( v10 || KeGetCurrentIrql() <= 1u )
    {
      BaseAddress = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v17);
      if ( !BaseAddress )
        return 3221225473LL;
LABEL_46:
      v9 = v8 & 2;
      if ( (v9 | 4) == 4 && KeSmapEnabled )
        __asm { stac }
      if ( (v8 & 1) != 0 )
      {
        BaseAddress = (char *)MiDbgWriteCheck(BaseAddress, v16);
        if ( !BaseAddress )
        {
          v14 = -1073741585;
LABEL_30:
          if ( (v9 | 4) == 4 && (v12 & 2) == 0 && KeSmapEnabled )
            __asm { clac }
          if ( (v12 & 1) != 0 )
            MiDbgReleaseAddress(BaseAddress, v16, v8);
          if ( v9 )
            MiDbgUnTranslatePhysicalAddress(v17);
          return v14;
        }
        v12 |= 1u;
        goto LABEL_53;
      }
      goto LABEL_28;
    }
    return 3221225714LL;
  }
  if ( v10 )
  {
    if ( MmIsAddressValidEx((__int64)BaseAddress) )
    {
      if ( (a5 & 0x40) == 0 )
        goto LABEL_46;
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
      BaseAddress = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                              a5,
                              v17);
      if ( BaseAddress )
      {
        v8 = a5 | 2;
        goto LABEL_46;
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
  {
    if ( (a5 & 1) != 0 )
    {
      ProbeForWrite(BaseAddress, v5, v5);
    }
    else
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)BaseAddress) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&BaseAddress[v5] > 0x7FFFFFFF0000LL || &BaseAddress[v5] < BaseAddress )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (a5 & 1) != 0 )
    {
LABEL_53:
      v13 = MiCopyToUntrustedMemory(BaseAddress, a2, v5, a4);
      goto LABEL_29;
    }
LABEL_28:
    v13 = MiCopyFromUntrustedMemory(a2, BaseAddress, v5, a4);
LABEL_29:
    v14 = v13;
    goto LABEL_30;
  }
  v18[0] = BaseAddress;
  v18[2] = __PAIR64__(a4, v5);
  v18[1] = a2;
  LODWORD(v18[3]) = a5;
  KeGenericCallDpc((__int64)MiDbgCopyMemoryTarget, (__int64)v18);
  return HIDWORD(v18[3]);
}
