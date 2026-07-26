/*
 * XREFs of ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8
 * Callers:
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0100FC8 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0116734 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0126134 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0126A40 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     netsetupIsImpliedProperty @ 0x1C0100F0C (netsetupIsImpliedProperty.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0100F54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C0101840 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01019FC (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadString(void ***a1, const struct _NETSETUPPROPKEY *a2, void **a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _WORD *v8; // rdx
  __int64 v9; // rcx
  __int16 v10; // ax
  struct Rtl::KString *v11; // rax
  void *v12; // rcx
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+38h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( netsetupIsImpliedProperty((__int64)a2) )
    {
      *(_QWORD *)&v13.Length = 0LL;
      v8 = &unk_1C00CDC00;
      v13.Buffer = 0LL;
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      if ( v9 )
        v10 = 0x7FFF - v9;
      else
        v10 = 0;
      if ( v9 )
      {
        v13.Buffer = (wchar_t *)&unk_1C00CDC00;
        v13.Length = 2 * v10;
        v13.MaximumLength = 2 * v10 + 2;
        v11 = Rtl::KString::Initialize(&v13);
      }
      else
      {
        v11 = 0LL;
      }
      v12 = *a3;
      *a3 = v11;
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0x7274534Bu);
        v11 = (struct Rtl::KString *)*a3;
      }
      v6 = v11 == 0LL ? 0xC000009A : 0;
    }
  }
  else if ( !v5 )
  {
    *(_QWORD *)&v13.Length = 0LL;
    v13.Buffer = 0LL;
    v6 = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&Handle, &v13, a3);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
