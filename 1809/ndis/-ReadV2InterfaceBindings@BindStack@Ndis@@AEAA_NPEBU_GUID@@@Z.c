/*
 * XREFs of ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00CEEB8
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___ @ 0x1C00CEFA4 (KRegKey--QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7.c)
 *     KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___ @ 0x1C00CF200 (KRegKey--QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___.c)
 */

char __fastcall Ndis::BindStack::ReadV2InterfaceBindings(Ndis::BindStack *this, const struct _GUID *a2)
{
  char v3; // bl
  __int64 v4; // rdx
  int ValueBlob__lambda_36d6f42f749579043faa114aff526cbd; // eax
  __int64 v6; // rdx
  int ValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-228h] BYREF
  wchar_t v10[256]; // [rsp+40h] [rbp-218h] BYREF

  Handle[0] = 0LL;
  netsetupBuildObjectPath(2, &a2->Data1, 0, 2, v10);
  v3 = 1;
  if ( (int)KRegKey::Open((KRegKey *)Handle, 1u, v10, 0LL) < 0
    || (ValueBlob__lambda_36d6f42f749579043faa114aff526cbd = KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___(
                                                               Handle,
                                                               v4,
                                                               this),
        (int)(ValueBlob__lambda_36d6f42f749579043faa114aff526cbd + 0x80000000) >= 0)
    && ValueBlob__lambda_36d6f42f749579043faa114aff526cbd != -1073741772
    || (ValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952 = KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___(Handle, v6, this, this),
        ((ValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952 + 0x80000000) & 0x80000000) == 0)
    && ValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952 != -1073741772 )
  {
    v3 = 0;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v3;
}
