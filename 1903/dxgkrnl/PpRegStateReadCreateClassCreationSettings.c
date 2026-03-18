/*
 * XREFs of PpRegStateReadCreateClassCreationSettings @ 0x1C0178538
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C01783B0 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0021D3C (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1C0178830 (PiRegStateOpenClassKey.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C01789C0 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0178C30 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C029B994 (CmRegUtilUcValueSetUcString.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C029BAAC (CmRegUtilWstrValueSetWstrString.c)
 */

__int64 __fastcall PpRegStateReadCreateClassCreationSettings(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  NTSTATUS inited; // ebx
  NTSTATUS StackCreationSettingsFromKey; // eax
  void *v7; // rcx
  HANDLE v8; // rdi
  struct _UNICODE_STRING KeyHandle; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+60h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+28h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_DWORD *)(a3 + 20) = 0;
  Handle = 0LL;
  *(_QWORD *)&KeyHandle.Length = 0LL;
  result = PiRegStateOpenClassKey(a1, a2, 1, (unsigned int)&v10, (__int64)&Handle);
  if ( (int)result >= 0 )
  {
    if ( v10 == 2 )
    {
      inited = CmRegUtilOpenExistingWstrKey(Handle, L"Properties", 131097LL, &KeyHandle);
      ZwClose(Handle);
      if ( inited < 0 )
      {
        if ( inited == -1073741772 )
          return 0;
        return (unsigned int)inited;
      }
      StackCreationSettingsFromKey = PiRegStateReadStackCreationSettingsFromKey(*(HANDLE *)&KeyHandle.Length);
      v7 = *(void **)&KeyHandle.Length;
      inited = StackCreationSettingsFromKey;
    }
    else
    {
      v8 = Handle;
      if ( *(_QWORD *)(a2 + 48) == -24LL )
      {
        inited = -1073741670;
      }
      else
      {
        *(_QWORD *)&KeyHandle.Length = 0LL;
        KeyHandle.Buffer = 0LL;
        inited = WdmlibRtlInitUnicodeStringEx(&KeyHandle, L"Class");
        if ( inited >= 0 )
          inited = CmRegUtilUcValueSetUcString(v8, &KeyHandle);
        if ( inited >= 0 )
        {
          v10 = 49;
          inited = CmRegUtilWstrValueSetWstrString(v8, L"NoDisplayClass", &v10);
          if ( inited >= 0 )
            inited = CmRegUtilWstrValueSetWstrString(v8, L"NoUseClass", &v10);
        }
      }
      v7 = v8;
    }
    ZwClose(v7);
    return (unsigned int)inited;
  }
  return result;
}
