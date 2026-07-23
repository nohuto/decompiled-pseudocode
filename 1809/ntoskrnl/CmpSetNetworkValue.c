/*
 * XREFs of CmpSetNetworkValue @ 0x1409F4B90
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpSetNetworkValue(__int64 a1)
{
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF
  ULONG v5; // [rsp+88h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+18h] BYREF

  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 576;
  v4.ObjectName = (PUNICODE_STRING)L"ln";
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &v4, 0, 0LL, 0, &v5);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDhcpServerAckString, 0, 3u, *(PVOID *)a1, *(_DWORD *)(a1 + 8));
    if ( v2 >= 0 )
    {
      v2 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&CmpBootServerReplyString,
             0,
             3u,
             *(PVOID *)(a1 + 16),
             *(_DWORD *)(a1 + 24));
      if ( v2 >= 0 )
        v2 = 0;
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v2;
}
