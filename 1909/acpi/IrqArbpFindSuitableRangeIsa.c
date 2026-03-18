/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C009CB5C
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C009C430 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C001E618 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009983C (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009B3C8 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcGetPossibleInput @ 0x1C009C6A4 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C009C898 (IcIsInputValid.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AEAB4 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // r12d
  __int16 v6; // di
  unsigned int v7; // r15d
  __int64 v8; // rdx
  char v9; // r11
  char v10; // r11
  unsigned __int8 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rdx
  ULONG Flags; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  char result; // al
  __int16 v21; // di
  _BYTE v22[4]; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+54h] [rbp-15h] BYREF
  int v24; // [rsp+58h] [rbp-11h]
  int v25; // [rsp+5Ch] [rbp-Dh] BYREF
  _BYTE v26[32]; // [rsp+60h] [rbp-9h] BYREF

  memset(v26, 0, sizeof(v26));
  v4 = *(_DWORD *)a2;
  v5 = 0;
  v23 = 0;
  while ( v4 <= *(_DWORD *)(a2 + 8) )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL);
    v7 = IrqArbGsivFromIrq(v4);
    if ( IrqArbpLookupIsaOverrideByGsiv(v4, &v23) && (v9 = byte_1C0081384[8 * v23], v9 != -1) )
    {
      v21 = v6 & 1;
      if ( (v9 & 1) != 0 )
      {
        if ( v21 )
          goto LABEL_23;
      }
      else if ( !v21 )
      {
        goto LABEL_23;
      }
    }
    else if ( IcIsInterruptTypeSecondary(v7) )
    {
      if ( (int)AcpiExternalQueryTranslatedDescriptorForGsiv(v7, v26) < 0 )
        goto LABEL_23;
    }
    else
    {
      ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v4, &v25);
    }
    if ( ((int)IcGetPossibleInput(v7, v8, v22) < 0 || v10 == v22[0]) && IcIsInputValid(v7) )
    {
      v12 = *(_QWORD *)(a2 + 40);
      v13 = *(_QWORD *)(a2 + 72);
      v14 = v5 | 1;
      v15 = *(_DWORD *)(v12 + 36);
      v16 = *(_QWORD *)(v12 + 40);
      if ( (v15 & 1) == 0 )
        v14 = v5;
      v24 = 0;
      v5 = v14;
      Flags = v14;
      v18 = *(_QWORD *)(a2 + 32);
      LOBYTE(v24) = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL) & 1 | (v11 >> 2) & 2;
      if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64))ProcessorFindIdtEntries)(
                  *(_QWORD *)(v18 + 32),
                  v16,
                  v13) >= 0
        && RtlFindRange(
             *(PRTL_RANGE_LIST *)(a1 + 48),
             v4,
             v4,
             1u,
             1u,
             Flags,
             *(_BYTE *)(a2 + 67),
             0LL,
             0LL,
             (PULONGLONG)a2) >= 0 )
      {
        v19 = *(_QWORD *)(a2 + 40);
        result = 1;
        *(_QWORD *)a2 = v4;
        *(_QWORD *)(a2 + 8) = v4;
        *(_QWORD *)(v19 + 16) = 1LL;
        return result;
      }
    }
LABEL_23:
    ++v4;
  }
  return 0;
}
