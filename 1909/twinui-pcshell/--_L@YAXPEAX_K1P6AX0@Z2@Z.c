/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18008AD20
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800509FC (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x18016076C (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults_____lambda_48084b1ec6f75312154089ee08312ce7___ @ 0x18020C660 (Windows--Internal--COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e___ @ 0x18020C6E4 (Windows--Internal--COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows--Inte.c)
 *     ??0PerMonitorShellPositionerManager@@QEAA@XZ @ 0x1803B7510 (--0PerMonitorShellPositionerManager@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18008ACAC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
