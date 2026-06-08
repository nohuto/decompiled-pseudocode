/*
 * XREFs of AcpiEvaluateMethod @ 0x1C0023480
 * Callers:
 *     AcpiEval_OSC @ 0x1C00069C0 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1C0023634 (AcpiEval_PDC.c)
 *     AcpiEval_CST @ 0x1C0023740 (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C0023B48 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0023D1C (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C002404C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00243CC (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C002478C (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C00248C4 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C0024BAC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0024CD4 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C0024FC0 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C00251A0 (AcpiEval_CPC.c)
 *     InitAcpiLpiStates @ 0x1C002E1E8 (InitAcpiLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, int *a3, unsigned int **a4, _DWORD *a5)
{
  int *v6; // r14
  unsigned int v8; // edi
  unsigned int v9; // ebx
  SIZE_T v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // rsi
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp+Fh] BYREF
  int v21; // [rsp+D0h] [rbp+6Fh] BYREF
  int v22; // [rsp+D4h] [rbp+73h]

  v6 = a3;
  if ( a3 )
  {
    v11 = *a3;
    if ( *a3 != 1114203457 )
    {
      switch ( v11 )
      {
        case 1130980673:
          v9 = a3[2];
          break;
        case 1231643969:
          v9 = 12;
          break;
        case 1399416129:
          v9 = a3[2] + 15;
          break;
        default:
          return (unsigned int)-1073741584;
      }
      goto LABEL_6;
    }
  }
  else
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    v21 = 1114203457;
    v6 = &v21;
    v22 = a2;
  }
  v9 = 8;
LABEL_6:
  v10 = 1024LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x72637250u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v12 = *(_QWORD *)(a1 + 16);
    v20[0] = 1LL;
    v20[1] = v6;
    v20[2] = v9;
    v19[0] = 1LL;
    v19[1] = PoolWithTag;
    v19[2] = (unsigned int)v10;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            v20,
            v19,
            0LL,
            &v18);
    v8 = v13;
    if ( v13 != -2147483643 )
      break;
    v10 = v15[1];
    ExFreePoolWithTag(v15, 0);
  }
  if ( v13 >= 0 && (v17 = v18, v18) )
  {
    *a4 = v15;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v15, 0);
    v17 = v18;
  }
  if ( a5 )
    *a5 = v17;
  return v8;
}
