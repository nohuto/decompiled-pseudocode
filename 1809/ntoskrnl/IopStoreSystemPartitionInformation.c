/*
 * XREFs of IopStoreSystemPartitionInformation @ 0x1409D72F4
 * Callers:
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     NtQuerySymbolicLinkObject @ 0x140626E40 (NtQuerySymbolicLinkObject.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 */

int __fastcall IopStoreSystemPartitionInformation(__int64 a1, unsigned __int16 *a2)
{
  int result; // eax
  NTSTATUS v4; // ebx
  int v5; // ebx
  HANDLE v6; // rbx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int64 v9; // r8
  unsigned __int16 v10; // cx
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE LinkHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+98h] [rbp-68h] BYREF
  int v18; // [rsp+9Ch] [rbp-64h]
  int v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A4h] [rbp-5Ch]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  int v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B4h] [rbp-4Ch]
  wchar_t pszDest[256]; // [rsp+C0h] [rbp-40h] BYREF

  RtlStringCchCopyW(pszDest, 0x100uLL, IoArcHalDeviceName.Buffer);
  LinkTarget.Buffer = pszDest;
  LinkTarget.Length = IoArcHalDeviceName.Length;
  if ( IoArcHalDeviceName.Length > 0x200u )
    LinkTarget.Length = 512;
  LinkTarget.MaximumLength = 510;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &LinkTarget;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( result < 0 )
      break;
    v4 = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    result = ObCloseHandle(LinkHandle, 0);
    if ( v4 < 0 )
      return result;
    LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
  }
  if ( result == -1073741788 )
  {
    result = IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineSystemName, 0xF003Fu);
    if ( result >= 0 )
    {
      ValueName.Buffer = (wchar_t *)&v17;
      v17 = 6619219;
      v18 = 7667828;
      v19 = 112;
      *(_DWORD *)&ValueName.Length = 786442;
      v5 = IopCreateRegistryKeyEx(&KeyHandle, Handle, &ValueName, 0xF003Fu, 0, 0LL);
      result = ObCloseHandle(Handle, 0);
      if ( v5 >= 0 )
      {
        v6 = KeyHandle;
        if ( !InitIsWinPEMode )
        {
          v17 = 7929939;
          v18 = 7602291;
          v19 = 7143525;
          v20 = 6357072;
          v21 = 7602290;
          v22 = 7602281;
          v23 = 7274601;
          v24 = 110;
          *(_DWORD *)&ValueName.Length = 2097182;
          NtSetValueKey(KeyHandle, &ValueName, 0, 1u, LinkTarget.Buffer, LinkTarget.Length + 2);
        }
        v7 = *a2;
        v17 = 7536719;
        v8 = v7;
        v18 = 7274572;
        v19 = 6553697;
        v20 = 7471205;
        v21 = 6357072;
        v22 = 6815860;
        LOWORD(v23) = 0;
        *(_DWORD *)&ValueName.Length = 1703960;
        if ( v7 > 2u )
        {
          v9 = *((_QWORD *)a2 + 1);
          v8 = v7;
          if ( *(_WORD *)(v7 + v9 - 2) == 92 )
          {
            v10 = v7 - 2;
            *a2 = v10;
            *(_WORD *)(v10 + v9) = 0;
            v8 = *a2;
          }
        }
        NtSetValueKey(v6, &ValueName, 0, 1u, *((PVOID *)a2 + 1), v8 + 2);
        return ObCloseHandle(v6, 0);
      }
    }
  }
  return result;
}
