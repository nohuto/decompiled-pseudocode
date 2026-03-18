/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C01427C0
 * Callers:
 *     DpiReadPnpRegistryValue @ 0x1C0142644 (DpiReadPnpRegistryValue.c)
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiGetAdapterInfo @ 0x1C0167E78 (DpiGetAdapterInfo.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016AC38 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     DpiGetPnpRegistryKeyName @ 0x1C0142860 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, unsigned int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING *v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = (int)a2;
  if ( (int)DpiGetPnpRegistryKeyName(a1, a2, &v19) < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v16 + 24) = v4;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  else
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v19;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v10 = ZwOpenKey(a4, a3, &ObjectAttributes);
    v14 = v10;
    if ( v10 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v17 + 24) = v4;
      *(_QWORD *)(v17 + 32) = v14;
      WdLogEvent5_WdError(v17);
    }
    return (unsigned int)v14;
  }
}
