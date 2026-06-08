/*
 * XREFs of AcpiEvaluateMethod @ 0x1C0022290
 * Callers:
 *     AcpiEval_OSC @ 0x1C0004BE4 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1C0022454 (AcpiEval_PDC.c)
 *     AcpiEval_CST @ 0x1C0022560 (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C00229CC (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0022BC4 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0022F24 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00232F8 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C002370C (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C002387C (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C0023B94 (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0023CF0 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C0024010 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C0024214 (AcpiEval_CPC.c)
 *     InitAcpiLpiStates @ 0x1C0034270 (InitAcpiLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, unsigned int **a4, _DWORD *a5)
{
  __int64 *v6; // rsi
  unsigned int v8; // edi
  int v9; // ebx
  SIZE_T v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r14
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  int v19; // [rsp+58h] [rbp-9h] BYREF
  int v20; // [rsp+5Ch] [rbp-5h]
  unsigned int *v21; // [rsp+60h] [rbp-1h]
  int v22; // [rsp+68h] [rbp+7h]
  int v23; // [rsp+6Ch] [rbp+Bh]
  int v24; // [rsp+70h] [rbp+Fh] BYREF
  int v25; // [rsp+74h] [rbp+13h]
  __int64 *v26; // [rsp+78h] [rbp+17h]
  int v27; // [rsp+80h] [rbp+1Fh]
  int v28; // [rsp+84h] [rbp+23h]
  __int64 v29; // [rsp+D0h] [rbp+6Fh] BYREF

  v29 = 0LL;
  v25 = 0;
  v6 = a3;
  v28 = 0;
  v20 = 0;
  v23 = 0;
  if ( a3 )
  {
    v11 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 1114203457 )
    {
      switch ( v11 )
      {
        case 1130980673:
          v9 = *((_DWORD *)a3 + 2);
          break;
        case 1231643969:
          v9 = 12;
          break;
        case 1399416129:
          v9 = *((_DWORD *)a3 + 2) + 15;
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
    LODWORD(v29) = 1114203457;
    v6 = &v29;
    HIDWORD(v29) = a2;
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
    v25 = 0;
    v28 = 0;
    v20 = 0;
    v23 = 0;
    v12 = *(_QWORD *)(a1 + 16);
    v24 = 1;
    v19 = 1;
    v26 = v6;
    v27 = v9;
    v21 = PoolWithTag;
    v22 = v10;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, int *, int *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            &v24,
            &v19,
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
