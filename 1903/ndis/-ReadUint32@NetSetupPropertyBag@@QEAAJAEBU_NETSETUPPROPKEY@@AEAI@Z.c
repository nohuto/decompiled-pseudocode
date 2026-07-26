/*
 * XREFs of ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0100DC0
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0100C74 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     GetPkeyName @ 0x1C0100CF4 (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C0100F0C (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C0101148 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint32(void ***this, const struct _NETSETUPPROPKEY *a2, unsigned int *a3)
{
  void *m_ptr; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  void *v9; // r9
  wchar_t *v10; // rax
  unsigned int v11; // edi
  __int16 v12; // cx
  unsigned int v13; // eax
  unsigned int v15; // eax
  KRegKey v16; // [rsp+20h] [rbp-59h] BYREF
  struct _UNICODE_STRING v17; // [rsp+28h] [rbp-51h] BYREF
  wchar_t v18[48]; // [rsp+40h] [rbp-39h] BYREF

  m_ptr = 0LL;
  v16.m_ptr = 0LL;
  GetPkeyName((unsigned int *)a2, v18);
  v7 = 2LL;
  v8 = 0x7FFFLL;
  v9 = **this;
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  v10 = v18;
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
    v17.Length = 2 * v12;
    v17.MaximumLength = 2 * v12 + 2;
    v17.Buffer = v18;
    v13 = KRegKey::Open(&v16, 1u, &v17, v9);
    m_ptr = v16.m_ptr;
    v11 = v13;
  }
  if ( v11 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2, v8, v7, v9) )
    {
      *a3 = 0;
      v11 = 0;
    }
  }
  else if ( !v11 )
  {
    *(_QWORD *)&v17.Length = 0LL;
    v17.Buffer = 0LL;
    v15 = KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(&v16, &v17, a3, v9);
    m_ptr = v16.m_ptr;
    v11 = v15;
  }
  if ( m_ptr )
    ZwClose(m_ptr);
  return v11;
}
