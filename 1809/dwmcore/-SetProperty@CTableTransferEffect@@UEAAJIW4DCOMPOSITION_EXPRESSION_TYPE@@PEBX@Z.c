/*
 * XREFs of ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B4DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z @ 0x1801B4B48 (-PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z.c)
 */

__int64 __fastcall CTableTransferEffect::SetProperty(__int64 a1, unsigned int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  __int64 v5; // r11
  unsigned int v6; // ebx
  float *v7; // rdx
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 18
    && (v4 = *a4,
        v6 = 0,
        CTableTransferEffect::PropertyIdToColorChannelAndIndex((CTableTransferEffect *)a1, a2, &v10, v9))
    && (a1 = v9[0], (v7 = (float *)(*(_QWORD *)(v5 + 40 * (v10 + 5LL)) + 4LL * v9[0])) != 0LL) )
  {
    if ( *v7 != v4 )
    {
      *v7 = v4;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, 0LL, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x8Fu);
  }
  return v6;
}
