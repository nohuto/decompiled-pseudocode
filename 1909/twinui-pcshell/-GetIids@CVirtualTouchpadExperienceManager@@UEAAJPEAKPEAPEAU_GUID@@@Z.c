/*
 * XREFs of ?GetIids@CVirtualTouchpadExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801C76A0
 * Callers:
 *     ?GetIids@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D7FA0 (-GetIids@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetIids(
        CVirtualTouchpadExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_17c4ec91_62df_486d_aa0d_6a11c725e414;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
    v6[3] = GUID_abadfe7f_04c1_4a9f_9b3c_a323f1c80178;
    v6[4] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
