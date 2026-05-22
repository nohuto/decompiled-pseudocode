/*
 * XREFs of ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x180024F70
 * Callers:
 *     _lambda_c0c3d577aad3ca08d159cb5956f28f0e_::operator() @ 0x180024FA4 (_lambda_c0c3d577aad3ca08d159cb5956f28f0e_--operator().c)
 *     _lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator() @ 0x18012F038 (_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator().c)
 *     _lambda_cea5e010cd57342e421c8488c8b753a5_::operator() @ 0x180133FF8 (_lambda_cea5e010cd57342e421c8488c8b753a5_--operator().c)
 *     _lambda_c78139b4692b055c43ac45a1104373ed_::operator() @ 0x180136EDC (_lambda_c78139b4692b055c43ac45a1104373ed_--operator().c)
 *     _lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator() @ 0x18013F7D8 (_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180025270 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
        __int64 a1,
        void *a2,
        _DWORD *a3)
{
  __int64 result; // rax

  std::wstring::wstring((void *)a1, a2);
  *(_DWORD *)(a1 + 32) = *a3;
  result = a1;
  *(_BYTE *)(a1 + 36) = 2;
  return result;
}
