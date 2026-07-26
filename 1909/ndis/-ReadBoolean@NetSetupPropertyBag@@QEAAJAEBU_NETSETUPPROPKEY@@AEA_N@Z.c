/*
 * XREFs of ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980
 * Callers:
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0100FC8 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0101228 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisIfReadHiddenFlag @ 0x1C01073E0 (ndisIfReadHiddenFlag.c)
 *     ndisIsBindPathEnabled @ 0x1C01262B4 (ndisIsBindPathEnabled.c)
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C0126700 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0126A40 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReplaceBindTokens @ 0x1C0126BC8 (ndisReplaceBindTokens.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     netsetupIsImpliedProperty @ 0x1C0100F0C (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C010A08C (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadBoolean(void ***this, const struct _NETSETUPPROPKEY *a2, bool *a3)
{
  int v4; // edx
  HANDLE v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  void *v9; // r8
  wchar_t *v10; // rax
  unsigned int v11; // edi
  __int16 v12; // cx
  NTSTATUS v13; // eax
  unsigned int v15; // eax
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *v18; // [rsp+90h] [rbp-70h]
  bool *v19; // [rsp+98h] [rbp-68h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t Dst[48]; // [rsp+D0h] [rbp-30h] BYREF

  v19 = a3;
  v4 = *((unsigned __int8 *)a2 + 15);
  v6 = 0LL;
  KeyHandle = 0LL;
  swprintf_s(
    Dst,
    0x2DuLL,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04x",
    *(unsigned int *)a2,
    *((unsigned __int16 *)a2 + 2),
    *((unsigned __int16 *)a2 + 3),
    *((unsigned __int8 *)a2 + 8),
    *((unsigned __int8 *)a2 + 9),
    *((unsigned __int8 *)a2 + 10),
    *((unsigned __int8 *)a2 + 11),
    *((unsigned __int8 *)a2 + 12),
    *((unsigned __int8 *)a2 + 13),
    *((unsigned __int8 *)a2 + 14),
    v4,
    *((_DWORD *)a2 + 4));
  v7 = 2LL;
  v8 = 0x7FFFLL;
  v9 = **this;
  v17 = 0LL;
  v18 = 0LL;
  v10 = Dst;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v8;
  }
  while ( v8 );
  v11 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
    v12 = 0x7FFF - v8;
  else
    v12 = 0;
  if ( v8 )
  {
    LOWORD(v17) = 2 * v12;
    WORD1(v17) = 2 * v12 + 2;
    v18 = Dst;
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v6 = KeyHandle;
    v11 = v13;
  }
  if ( v11 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2, v8, v9, v7) )
    {
      v11 = 0;
      *v19 = 0;
    }
  }
  else if ( !v11 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v15 = KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(&KeyHandle, &v17, v19, v7);
    v6 = KeyHandle;
    v11 = v15;
  }
  if ( v6 )
    ZwClose(v6);
  return v11;
}
