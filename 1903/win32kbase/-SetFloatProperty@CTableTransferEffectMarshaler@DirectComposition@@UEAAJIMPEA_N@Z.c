/*
 * XREFs of ?SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01B20C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z @ 0x1C01B1F74 (-PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetFloatProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  bool v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10[5]; // [rsp+24h] [rbp-14h] BYREF

  result = DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(this, a2, &v9, v10);
  v7 = 0;
  if ( (int)result < 0 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 2 * v9 + 11);
  if ( *(float *)(v8 + 4LL * v10[0]) != a3 )
  {
    *(float *)(v8 + 4LL * v10[0]) = a3;
    v7 = 1;
  }
  *a4 = v7;
  return result;
}
