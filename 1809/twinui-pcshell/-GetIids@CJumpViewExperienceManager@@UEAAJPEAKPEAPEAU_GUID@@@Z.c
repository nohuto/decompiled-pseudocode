/*
 * XREFs of ?GetIids@CJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18016DA60
 * Callers:
 *     ?GetIids@CJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009EEF0 (-GetIids@CJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::GetIids(
        CJumpViewExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
    v6[3] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    v6[4] = GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f;
    v6[5] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
