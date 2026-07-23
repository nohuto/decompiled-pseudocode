/*
 * XREFs of MiDbgCopyMemory @ 0x1402BA940
 * Callers:
 *     MmDbgCopyMemory @ 0x1402BB7D0 (MmDbgCopyMemory.c)
 * Callees:
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     MiCopyFromUntrustedMemory @ 0x1402BA6E0 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1402BA808 (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x1402BAFFC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BB0E8 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402BB494 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1402BB574 (MiDbgWriteCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(
        struct _SINGLE_LIST_ENTRY *BaseAddress,
        struct _SINGLE_LIST_ENTRY *a2,
        ULONG a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _SINGLE_LIST_ENTRY *v8; // rsi
  unsigned int v9; // r14d
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+28h] [rbp-50h] BYREF
  struct _SINGLE_LIST_ENTRY v18[2]; // [rsp+38h] [rbp-40h] BYREF
  ULONG v19; // [rsp+48h] [rbp-30h]
  unsigned int v20; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v21; // [rsp+50h] [rbp-28h]
  unsigned int v22; // [rsp+54h] [rbp-24h]

  v8 = BaseAddress;
  v9 = a5;
  if ( !a3 )
    return 3221225713LL;
  if ( (a5 & 0x40) != 0 )
  {
    if ( (a5 & 2) != 0 )
      return 3221225714LL;
    if ( (a5 & 1) == 0 )
      return 3221225714LL;
    v11 = a5 & 4;
    if ( (a5 & 4) == 0 )
      return 3221225714LL;
  }
  else
  {
    v11 = a5 & 4;
  }
  v12 = 0;
  if ( (a5 & 2) != 0 )
  {
    if ( v11 || KeGetCurrentIrql() <= 1u )
    {
      v8 = (struct _SINGLE_LIST_ENTRY *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v17);
      if ( !v8 )
        return 3221225473LL;
LABEL_40:
      if ( (v9 & 1) != 0 )
      {
        v8 = (struct _SINGLE_LIST_ENTRY *)MiDbgWriteCheck(v8, v16);
        if ( !v8 )
        {
          v14 = -1073741585;
          goto LABEL_28;
        }
        v12 = 1;
        goto LABEL_44;
      }
      goto LABEL_26;
    }
    return 3221225714LL;
  }
  if ( v11 )
  {
    if ( MiIsAddressValid((__int64)BaseAddress) )
    {
      if ( (a5 & 0x40) == 0 )
        goto LABEL_40;
      PhysicalAddress = MmGetPhysicalAddress(v8);
      v8 = (struct _SINGLE_LIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                                          (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                                          a5,
                                          v17);
      if ( v8 )
      {
        v9 = a5 | 2;
        goto LABEL_40;
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
      ProbeForWrite(BaseAddress, a3, a3);
    }
    else
    {
      if ( ((a3 - 1) & (unsigned int)BaseAddress) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)BaseAddress + a3 > 0x7FFFFFFF0000LL
        || (struct _SINGLE_LIST_ENTRY *)((char *)BaseAddress + a3) < BaseAddress )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( (a5 & 1) != 0 )
    {
LABEL_44:
      v13 = MiCopyToUntrustedMemory(v8, a2, a3, a4);
      goto LABEL_27;
    }
LABEL_26:
    v13 = MiCopyFromUntrustedMemory(a2, v8, a3, a4);
LABEL_27:
    v14 = v13;
LABEL_28:
    if ( v12 )
      MiDbgReleaseAddress(v8, v16, v9);
    if ( (v9 & 2) != 0 )
      MiDbgUnTranslatePhysicalAddress(v17);
    return v14;
  }
  v18[0].Next = BaseAddress;
  v19 = a3;
  v18[1].Next = a2;
  v20 = a4;
  v21 = a5;
  KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiDbgCopyMemoryTarget, v18);
  return v22;
}
