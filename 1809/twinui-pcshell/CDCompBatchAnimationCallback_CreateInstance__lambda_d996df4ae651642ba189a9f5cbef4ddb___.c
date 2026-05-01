/*
 * XREFs of CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x18035A294
 * Callers:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18035E6D8 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&___ptr64_ @ 0x18035A3DC (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18035C890 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v5; // edi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb______ptr64_(
    &v7,
    a1);
  v4 = v7;
  v5 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    v5 = (**v7)(v7, &GUID_53204493_9170_4f30_be0e_211392a4618e, a2);
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
  return v5;
}
