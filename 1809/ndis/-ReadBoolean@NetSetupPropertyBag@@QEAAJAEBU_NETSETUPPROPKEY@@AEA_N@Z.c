/*
 * XREFs of ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00C57C0 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C00C6ABC (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisIfReadHiddenFlag @ 0x1C00C93F0 (ndisIfReadHiddenFlag.c)
 *     ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00E33D0 (ndisIfReadInterfaceAddDeviceParametersForLWMiniport.c)
 *     ndisIsBindPathEnabled @ 0x1C0105F70 (ndisIsBindPathEnabled.c)
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C01063C0 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0106700 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReplaceBindTokens @ 0x1C0106888 (ndisReplaceBindTokens.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00C744C (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     GetPkeyName @ 0x1C00C75B4 (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C00C7680 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C00C78D8 (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadBoolean(void ***this, const struct _NETSETUPPROPKEY *a2, bool *a3)
{
  void *m_ptr; // rbx
  __int64 v7; // rdx
  void *v8; // r9
  _WORD *v9; // rax
  unsigned int v10; // edi
  __int16 v11; // cx
  unsigned int v12; // eax
  unsigned int v14; // eax
  KRegKey v15; // [rsp+20h] [rbp-59h] BYREF
  struct _UNICODE_STRING v16; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v17[96]; // [rsp+40h] [rbp-39h] BYREF

  m_ptr = 0LL;
  v15.m_ptr = 0LL;
  GetPkeyName(a2, v17);
  v7 = 0x7FFFLL;
  v8 = **this;
  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  v9 = v17;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v7;
  }
  while ( v7 );
  v10 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v11 = 0x7FFF - v7;
  else
    v11 = 0;
  if ( v7 )
  {
    v16.Length = 2 * v11;
    v16.MaximumLength = 2 * v11 + 2;
    v16.Buffer = (wchar_t *)v17;
    v12 = KRegKey::Open(&v15, 1u, &v16, v8);
    m_ptr = v15.m_ptr;
    v10 = v12;
  }
  if ( v10 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
      v10 = 0;
    }
  }
  else if ( !v10 )
  {
    *(_QWORD *)&v16.Length = 0LL;
    v16.Buffer = 0LL;
    v14 = KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(&v15, &v16, a3, v8);
    m_ptr = v15.m_ptr;
    v10 = v14;
  }
  if ( m_ptr )
    ZwClose(m_ptr);
  return v10;
}
