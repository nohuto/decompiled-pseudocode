/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCApplicationManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180114038
 * Callers:
 *     _lambda_745aa0a15c871b15a946ed0c85a37995_::_lambda_745aa0a15c871b15a946ed0c85a37995_ @ 0x18008C6C4 (_lambda_745aa0a15c871b15a946ed0c85a37995_--_lambda_745aa0a15c871b15a946ed0c85a37995_.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ComPtr<CApplicationManager>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 384);
    while ( v2 >= 0 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 384), v2 + 1, v2);
      if ( v3 == v2 )
        return;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 16));
  }
}
