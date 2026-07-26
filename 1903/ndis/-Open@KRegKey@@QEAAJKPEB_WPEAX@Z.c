/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___ @ 0x1C00F9008 (netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___.c)
 *     _lambda_74aaa7089007ee3601df5827111bc2b5_::operator() @ 0x1C00F912C (_lambda_74aaa7089007ee3601df5827111bc2b5_--operator().c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0100F54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0101228 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0107334 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C0109D0C (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A818 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0117C58 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C01186B0 (ndisLWMOpenConfigurationKey.c)
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0124D20 (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 *     ndisIsBindPathEnabled @ 0x1C01262B4 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C01265CC (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C0126700 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C01268D0 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0126A40 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0127318 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01275A4 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01464B0 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, const wchar_t *a3, void *a4)
{
  __int64 v5; // r11
  const wchar_t *v6; // rax
  __int64 result; // rax
  __int16 v8; // r10
  unsigned int v9; // ebx
  HANDLE v10; // rdi
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v12; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( !a3 )
  {
LABEL_9:
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = a4;
    v9 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    v10 = KeyHandle;
    if ( this->m_ptr )
      ZwClose(this->m_ptr);
    this->m_ptr = v10;
    return v9;
  }
  v5 = 0x7FFFLL;
  v6 = a3;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = 0x7FFF - v5;
  else
    v8 = 0;
  if ( v5 )
  {
    v12 = a3;
    LOWORD(v11) = 2 * v8;
    WORD1(v11) = 2 * v8 + 2;
    goto LABEL_9;
  }
  return result;
}
