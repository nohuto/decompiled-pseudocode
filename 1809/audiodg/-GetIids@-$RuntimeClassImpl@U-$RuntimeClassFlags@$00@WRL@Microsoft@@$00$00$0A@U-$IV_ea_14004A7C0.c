/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@567@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x14004A7C0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@567@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x14001E830 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_fd944562_11d6_5eab_bd72_701993b68fac;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_902972bf_a984_5443_b1c5_2f04a99e1fca;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
