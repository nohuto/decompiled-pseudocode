/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C0134DC0
 * Callers:
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiGetAdapterInfo @ 0x1C014D78C (DpiGetAdapterInfo.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0134E60 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, unsigned int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // rdi
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = (int)a2;
  if ( (int)DpiGetPnpRegistryKeyName(a1, a2, &v15) < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = v4;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  else
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v15;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v8 = ZwOpenKey(a4, a3, &ObjectAttributes);
    v10 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = v4;
      *(_QWORD *)(v13 + 32) = v10;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v10;
  }
}
