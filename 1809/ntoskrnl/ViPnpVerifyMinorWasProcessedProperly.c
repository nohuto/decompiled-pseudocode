/*
 * XREFs of ViPnpVerifyMinorWasProcessedProperly @ 0x140941A7C
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x140941620 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409417B0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402ABBC0 (MmIsNonPagedSystemAddressValid.c)
 *     IovUtilMarkDeviceObject @ 0x14030AFE8 (IovUtilMarkDeviceObject.c)
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030B1B0 (ViErrorReport10.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140936490 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409365A0 (IovUtilIsDeviceObjectMarked.c)
 */

char __fastcall ViPnpVerifyMinorWasProcessedProperly(__int64 a1, __int64 a2, int a3, int a4, const void *a5, int a6)
{
  int IsDeviceObjectMarked; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // rdi
  __int64 i; // rsi
  _QWORD *v12; // rbp
  _QWORD *BottomDeviceObjectWithTag; // r15
  unsigned int v14; // ecx

  LOBYTE(IsDeviceObjectMarked) = *(_BYTE *)(a2 + 1);
  if ( (unsigned __int8)IsDeviceObjectMarked > 0xCu )
  {
    if ( (unsigned __int8)IsDeviceObjectMarked < 0xFu )
      return IsDeviceObjectMarked;
    if ( (unsigned __int8)IsDeviceObjectMarked > 0x12u )
    {
      if ( (_BYTE)IsDeviceObjectMarked == 19 )
      {
        if ( *(_DWORD *)(a2 + 8) > 3u )
          return IsDeviceObjectMarked;
      }
      else if ( (_BYTE)IsDeviceObjectMarked != 21 )
      {
        return IsDeviceObjectMarked;
      }
    }
    goto LABEL_41;
  }
  if ( (unsigned __int8)IsDeviceObjectMarked >= 0xAu )
  {
LABEL_41:
    if ( !a3 || a4 != 2 )
      return IsDeviceObjectMarked;
    v14 = 536;
LABEL_44:
    LOBYTE(IsDeviceObjectMarked) = ViErrorReport1(v14, a5, (const void *)a1);
    return IsDeviceObjectMarked;
  }
  if ( (unsigned __int8)IsDeviceObjectMarked <= 1u )
    goto LABEL_32;
  if ( (_BYTE)IsDeviceObjectMarked == 2 )
  {
    if ( a6 || a4 == 2 )
      return IsDeviceObjectMarked;
    v14 = 774;
    goto LABEL_44;
  }
  if ( (unsigned __int8)IsDeviceObjectMarked <= 6u )
  {
LABEL_32:
    if ( a6 || a4 )
      return IsDeviceObjectMarked;
    v14 = 535;
    goto LABEL_44;
  }
  if ( (_BYTE)IsDeviceObjectMarked != 7 )
    return IsDeviceObjectMarked;
  if ( *(_DWORD *)(a2 + 8) != 4 )
    goto LABEL_17;
  if ( a3 )
  {
    if ( a4 == 2 )
    {
      v9 = 536;
LABEL_16:
      ViErrorReport1(v9, a5, (const void *)a1);
    }
  }
  else
  {
    if ( !a4 )
    {
      v9 = 554;
      goto LABEL_16;
    }
    if ( *(int *)(a1 + 48) >= 0 && !*(_QWORD *)(a1 + 56) )
    {
      v9 = 555;
      goto LABEL_16;
    }
  }
LABEL_17:
  LOBYTE(IsDeviceObjectMarked) = VfIoDisabled;
  if ( !VfIoDisabled && *(int *)(a1 + 48) >= 0 )
  {
    v10 = *(_DWORD **)(a1 + 56);
    if ( v10 )
    {
      if ( *(_DWORD *)(a2 + 8) <= 4u )
      {
        LOBYTE(IsDeviceObjectMarked) = MmIsNonPagedSystemAddressValid(*(PVOID *)(a1 + 56));
        if ( (_BYTE)IsDeviceObjectMarked )
        {
          for ( i = 0LL; (unsigned int)i < *v10; i = (unsigned int)(i + 1) )
          {
            v12 = *(_QWORD **)&v10[2 * i + 2];
            IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked((__int64)v12, 5);
            if ( !IsDeviceObjectMarked )
            {
              BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(v12);
              if ( BottomDeviceObjectWithTag != v12 )
                ViErrorReport10(0x248u, a5, (const void *)a1, v12);
              IovUtilMarkDeviceObject((__int64)v12, 5LL);
              LOBYTE(IsDeviceObjectMarked) = ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
            }
          }
        }
      }
    }
  }
  return IsDeviceObjectMarked;
}
