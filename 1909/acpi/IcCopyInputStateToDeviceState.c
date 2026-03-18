/*
 * XREFs of IcCopyInputStateToDeviceState @ 0x1C0099B20
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0099C90 (IrqArbCommitAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C009D3A4 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 */

NTSTATUS __fastcall IcCopyInputStateToDeviceState(__int64 a1, int a2)
{
  struct _RTL_RANGE_LIST *v4; // rcx
  NTSTATUS result; // eax
  PRTL_RANGE i; // rcx
  _DWORD *UserData; // r8
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 j; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+68h] [rbp+20h] BYREF

  memset(&Iterator, 0, sizeof(Iterator));
  if ( a2 == 1 )
    v4 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  else
    v4 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  result = RtlGetFirstRange(v4, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( i->Owner )
    {
      if ( (i->Attributes & 1) == 0 )
      {
        UserData = i->UserData;
        if ( UserData )
        {
          if ( (unsigned int)(UserData[2] - 1) <= 1 )
          {
            v8 = IrqArbGsivFromIrq(i->Start);
            for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
            {
              if ( *(int *)(j + 28) >= 0 )
              {
                v12 = *(_DWORD *)(j + 16);
                if ( v12 <= v8 && *(_DWORD *)(j + 20) >= v8 )
                {
                  v11 = 200LL * (v8 - v12);
                  *(_OWORD *)(v9 + 32) = *(_OWORD *)(v11 + j + 136);
                  *(_OWORD *)(v9 + 48) = *(_OWORD *)(v11 + j + 152);
                  *(_OWORD *)(v9 + 64) = *(_OWORD *)(v11 + j + 168);
                  *(_OWORD *)(v9 + 80) = *(_OWORD *)(v11 + j + 184);
                  *(_OWORD *)(v9 + 96) = *(_OWORD *)(v11 + j + 200);
                  *(_QWORD *)(v9 + 112) = *(_QWORD *)(v11 + j + 216);
                }
              }
            }
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
