/*
 * XREFs of InitAcpiCStates @ 0x1C00203AC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_CST @ 0x1C00024B4 (Display_CST.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     InitAcpi2CStates @ 0x1C0020454 (InitAcpi2CStates.c)
 *     InitAcpi1CStates @ 0x1C00321B0 (InitAcpi1CStates.c)
 */

__int64 __fastcall InitAcpiCStates(__int64 a1)
{
  __int64 v2; // rax
  int inited; // edi

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 264);
  inited = -1073741823;
  if ( (v2 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates(a1, a1 + 512);
    if ( inited >= 0 )
      goto LABEL_3;
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFF80F8FuLL;
    v2 = *(_QWORD *)(a1 + 264);
  }
  if ( (v2 & 7) == 0 )
    goto LABEL_4;
  inited = InitAcpi1CStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_4;
  }
LABEL_3:
  inited = 0;
  Display_CST(*(unsigned int **)(a1 + 512));
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
