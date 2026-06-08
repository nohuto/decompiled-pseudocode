/*
 * XREFs of InitAcpiCStates @ 0x1C0022CC4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_CST @ 0x1C00075B8 (Display_CST.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     InitAcpi1CStates @ 0x1C0022D90 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x1C0023034 (InitAcpi2CStates.c)
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
    inited = InitAcpi2CStates(a1, a1 + 496);
    if ( inited >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFF80F8FuLL;
    v2 = *(_QWORD *)(a1 + 264);
  }
  if ( (v2 & 7) != 0 )
  {
    inited = InitAcpi1CStates(a1);
    if ( inited < 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_8;
    }
LABEL_7:
    inited = 0;
    Display_CST(*(int **)(a1 + 496));
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
