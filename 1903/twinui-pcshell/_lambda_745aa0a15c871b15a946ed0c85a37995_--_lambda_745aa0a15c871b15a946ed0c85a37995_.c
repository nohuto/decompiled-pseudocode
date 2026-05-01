/*
 * XREFs of _lambda_745aa0a15c871b15a946ed0c85a37995_::_lambda_745aa0a15c871b15a946ed0c85a37995_ @ 0x18008C6C4
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801190B0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCApplicationManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180114038 (-InternalAddRef@-$ComPtr@VCApplicationManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_745aa0a15c871b15a946ed0c85a37995_::_lambda_745aa0a15c871b15a946ed0c85a37995_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  Microsoft::WRL::ComPtr<CApplicationManager>::InternalAddRef(a1, a2, a1);
  return v2;
}
