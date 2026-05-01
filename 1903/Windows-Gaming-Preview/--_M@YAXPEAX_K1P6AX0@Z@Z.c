/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800428C0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_363ecfaa426a2d345ca41bd67db72fc0__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001F2E0 (Windows--Internal--COperationLambdaVar_0__lambda_363ecfaa426a2d345ca41bd67db72fc0___ea_18001F2E0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_ @ 0x18001F370 (Windows--Internal--COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___ea_18001F370.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_a9c571ff0e3bbbe6412332e11260abf2__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001F430 (Windows--Internal--COperationLambdaVar_0__lambda_a9c571ff0e3bbbe6412332e11260abf2___ea_18001F430.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180025618 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800257A0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_672229d4a162f24ea0e3de44dcc55a21__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_ @ 0x180031EA0 (Windows--Internal--COperationLambdaVar_0__lambda_672229d4a162f24ea0e3de44dcc55a21___ea_180031EA0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_d6e28d15cb03386e0d7e5ac918f3cf05__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180031F20 (Windows--Internal--COperationLambdaVar_0__lambda_d6e28d15cb03386e0d7e5ac918f3cf05___ea_180031F20.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180031FA0 (Windows--Internal--COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3___ea_180031FA0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18003A0D0 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3___ea_18003A0D0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_dee6256d89e21afd53df920967b40113__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18003ACD0 (Windows--Internal--COperationLambdaVar_0__lambda_dee6256d89e21afd53df920967b40113___ea_18003ACD0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180042934 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
