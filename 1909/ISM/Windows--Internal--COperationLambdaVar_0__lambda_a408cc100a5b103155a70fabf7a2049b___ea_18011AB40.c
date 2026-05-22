/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18011AB40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18002C460 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        char *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 64,
    8LL,
    1LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>);
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
