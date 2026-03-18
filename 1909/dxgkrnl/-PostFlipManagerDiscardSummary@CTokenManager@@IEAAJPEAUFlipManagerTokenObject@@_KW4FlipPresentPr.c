/*
 * XREFs of ?PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C005A2D4
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000EFE0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C005A19C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C005A1F4 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C006046C (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 */

__int64 __fastcall CTokenManager::PostFlipManagerDiscardSummary(
        __int64 a1,
        FlipManagerTokenObject *a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax
  unsigned int v8; // edx
  struct FlipManagerObject *v9; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-31h] BYREF
  __int64 v11; // [rsp+30h] [rbp-29h]
  __int64 v12; // [rsp+38h] [rbp-21h]
  GUID v13; // [rsp+40h] [rbp-19h] BYREF
  GUID v14; // [rsp+50h] [rbp-9h] BYREF
  int v15; // [rsp+60h] [rbp+7h]
  GUID *v16; // [rsp+68h] [rbp+Fh]
  GUID v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+27h]
  unsigned __int64 *v19; // [rsp+88h] [rbp+2Fh]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = FlipManagerTokenObject::GetFlipManagerObjectNoRef(a2, &v9);
  if ( (int)result >= 0 )
  {
    result = FlipManagerTokenObject::GetPresentId(a2, &v10);
    if ( (int)result >= 0 )
    {
      v16 = &v13;
      v11 = a3;
      v19 = &v10;
      v13 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
      LODWORD(v12) = a4;
      v14 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
      v15 = 16;
      v17 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
      v18 = 24;
      return FlipManagerDwmPostConsumerMessage(v9, v8, (struct FlipPropertyItem *)&v14);
    }
  }
  return result;
}
