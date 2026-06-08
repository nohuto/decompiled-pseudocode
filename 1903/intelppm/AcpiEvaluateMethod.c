/*
 * XREFs of AcpiEvaluateMethod @ 0x1C001F438
 * Callers:
 *     AcpiEval_OSC @ 0x1C00037A4 (AcpiEval_OSC.c)
 *     AcpiEval_PPC @ 0x1C001F35C (AcpiEval_PPC.c)
 *     InitAcpiLpiStates @ 0x1C0020AA4 (InitAcpiLpiStates.c)
 *     AcpiEval_PSD_TSD @ 0x1C00218D8 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C0021B3C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0021CA4 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C00220E0 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00223D0 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0022790 (AcpiEval_TSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C00228E0 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PCCP @ 0x1C003042C (AcpiEval_PCCP.c)
 *     AcpiEval_PDC @ 0x1C0030630 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C003073C (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C0030898 (AcpiEval_XPSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, unsigned int **a4, _DWORD *a5)
{
  __int64 *v6; // rsi
  int v8; // ebx
  SIZE_T v9; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
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
  if ( !a3 )
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v29) = 1114203457;
    v6 = &v29;
    HIDWORD(v29) = a2;
LABEL_4:
    v8 = 8;
    goto LABEL_5;
  }
  v17 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 1130980673 )
  {
    if ( v17 != 1114203457 )
    {
      if ( v17 == 1231643969 )
      {
        v8 = 12;
      }
      else
      {
        if ( v17 != 1399416129 )
          return (unsigned int)-1073741584;
        v8 = *((_DWORD *)a3 + 2) + 15;
      }
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v8 = *((_DWORD *)a3 + 2);
LABEL_5:
  v9 = 1024LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x72637250u);
    v11 = PoolWithTag;
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
    v27 = v8;
    v21 = PoolWithTag;
    v22 = v9;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, int *, int *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            &v24,
            &v19,
            0LL,
            &v18);
    v14 = v13;
    if ( v13 != -2147483643 )
      break;
    v9 = v11[1];
    ExFreePoolWithTag(v11, 0);
  }
  if ( v13 >= 0 && (v15 = v18, v18) )
  {
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v11, 0);
    v15 = v18;
  }
  if ( a5 )
    *a5 = v15;
  return v14;
}
