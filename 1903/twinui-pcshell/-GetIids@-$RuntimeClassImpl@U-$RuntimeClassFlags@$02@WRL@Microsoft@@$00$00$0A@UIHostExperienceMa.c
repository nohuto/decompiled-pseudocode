/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801C0950
 * Callers:
 *     ?GetIids@PriorityBoostHelper@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B5A40 (-GetIids@PriorityBoostHelper@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@PriorityBoostHelper@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B5A50 (-GetIids@PriorityBoostHelper@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_2410129c_64a0_4b85_9e61_12caec38d6ef;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_fdae1e57_9570_4461_bab5_532c0f899149;
    v6[3] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
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
