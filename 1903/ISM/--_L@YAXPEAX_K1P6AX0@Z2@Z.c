/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18002D240
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800B36B4 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180113D8C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult___lambda_16bcd66e868557b6123b295398ded03e___ @ 0x180116510 (Windows--Internal--COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_2c3f3b4f1bafb50fab998dee840e32d8__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_2c3f3b4f1bafb50fab998dee840e32d8__Windows::Internal::CNoResult___lambda_2c3f3b4f1bafb50fab998dee840e32d8___ @ 0x18011658C (Windows--Internal--COperationLambdaVar_0__lambda_2c3f3b4f1bafb50fab998dee840e32d8__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue_____lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x180116610 (Windows--Internal--COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult___lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x180116694 (Windows--Internal--COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING___________lambda_b07e28b8d9a43b43078b009fd4c08247___ @ 0x180116720 (Windows--Internal--COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING___________lambda_de6bcc426287dbdda407399e3f0c7994___ @ 0x18011680C (Windows--Internal--COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows--Inte.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18002C854 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
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
