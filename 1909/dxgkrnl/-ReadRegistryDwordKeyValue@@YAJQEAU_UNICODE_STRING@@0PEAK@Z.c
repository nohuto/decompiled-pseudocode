/*
 * XREFs of ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C015EBD0
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C015E980 (DxgDetermineBootImageMode.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C016DDBC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0181D1C (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

__int64 __fastcall ReadRegistryDwordKeyValue(
        struct _UNICODE_STRING *const a1,
        struct _UNICODE_STRING *const a2,
        unsigned int *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v15; // [rsp+74h] [rbp+2Bh]
  unsigned int v16; // [rsp+7Ch] [rbp+33h]

  if ( a1 && a2 && a3 )
  {
    *a3 = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v5 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    v8 = v5;
    if ( v5 >= 0 )
    {
      ResultLength = 0;
      v9 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v7 = KeyHandle;
      v8 = v9;
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( (int)v8 >= 0 && v15 == 4 )
      {
        *a3 = v16;
        return (unsigned int)v8;
      }
      *a3 = 0;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = v8;
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
