/*
 * XREFs of ?PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0053904
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00148E0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C00537CC (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0053824 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C005937C (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 */

__int64 __fastcall CTokenManager::PostFlipManagerDiscardSummary(
        __int64 a1,
        FlipManagerTokenObject *a2,
        unsigned __int64 a3,
        int a4)
{
  __int64 result; // rax
  unsigned int v8; // edx
  struct FlipManagerObject *v9; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int64 v10[2]; // [rsp+28h] [rbp-31h] BYREF
  int v11; // [rsp+38h] [rbp-21h]
  GUID v12; // [rsp+40h] [rbp-19h] BYREF
  GUID v13; // [rsp+50h] [rbp-9h] BYREF
  int v14; // [rsp+60h] [rbp+7h]
  GUID *v15; // [rsp+68h] [rbp+Fh]
  GUID v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+27h]
  unsigned __int64 *v18; // [rsp+88h] [rbp+2Fh]

  result = FlipManagerTokenObject::GetFlipManagerObjectNoRef(a2, &v9);
  if ( (int)result >= 0 )
  {
    result = FlipManagerTokenObject::GetPresentId(a2, v10);
    if ( (int)result >= 0 )
    {
      v15 = &v12;
      v10[1] = a3;
      v18 = v10;
      v12 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
      v11 = a4;
      v13 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
      v14 = 16;
      v16 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
      v17 = 24;
      return FlipManagerDwmPostConsumerMessage(v9, v8, (struct FlipPropertyItem *)&v13);
    }
  }
  return result;
}
