/*
 * XREFs of ?GetIids@CPeopleBarJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180165E10
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009ED30 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetIids(
        CPeopleBarJumpViewExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_ab65b025_ff88_470a_9513_b62bcd7ce879;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
    v6[3] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
