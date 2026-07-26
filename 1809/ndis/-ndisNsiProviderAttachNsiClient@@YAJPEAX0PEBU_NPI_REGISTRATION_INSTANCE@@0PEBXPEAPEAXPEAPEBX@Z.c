/*
 * XREFs of ?ndisNsiProviderAttachNsiClient@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@0PEBXPEAPEAXPEAPEBX@Z @ 0x1C00D1FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisNsiProviderAttachNsiClient(
        void *a1,
        void *a2,
        const struct _NPI_REGISTRATION_INSTANCE *a3,
        void *a4,
        const void *a5,
        void **a6,
        const void **a7)
{
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qq(0x3Cu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a2);
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1C00851D8;
  qword_1C009FEC8 = (__int64)a5;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qq(0x3Du, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a2, a4);
  return 0LL;
}
