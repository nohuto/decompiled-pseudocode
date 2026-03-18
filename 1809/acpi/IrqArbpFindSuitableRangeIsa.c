/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C0093E2C
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C008F2E0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C000DF28 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     IcGetPossibleInput @ 0x1C008F808 (IcGetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0090E30 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C0091218 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C00929DC (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcIsInputValid @ 0x1C0093B94 (IcIsInputValid.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AB3F4 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
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
  int i; // [rsp+54h] [rbp-15h] BYREF
  int v24; // [rsp+58h] [rbp-11h]
  int v25; // [rsp+5Ch] [rbp-Dh] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-9h] BYREF

  v2 = *(_DWORD *)a2;
  v5 = 0;
  for ( i = 0; v2 <= *(_DWORD *)(a2 + 8); ++v2 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL);
    v7 = IrqArbGsivFromIrq(v2);
    if ( IrqArbpLookupIsaOverrideByGsiv(v2, &i) && (v9 = byte_1C007F384[8 * i], v9 != -1) )
    {
      v21 = v6 & 1;
      if ( (v9 & 1) != 0 )
      {
        if ( v21 )
          continue;
      }
      else if ( !v21 )
      {
        continue;
      }
    }
    else if ( IcIsInterruptTypeSecondary(v7) )
    {
      if ( (int)AcpiExternalQueryTranslatedDescriptorForGsiv(v7, v26) < 0 )
        continue;
    }
    else
    {
      ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v25);
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
             v2,
             v2,
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
        *(_QWORD *)a2 = v2;
        *(_QWORD *)(a2 + 8) = v2;
        *(_QWORD *)(v19 + 16) = 1LL;
        return result;
      }
    }
  }
  return 0;
}
