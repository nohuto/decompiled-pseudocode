/*
 * XREFs of CiConfigInitializeFromRegistry @ 0x1C000D610
 * Callers:
 *     CiConfigInitialize @ 0x1C000D280 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003240 (__security_check_cookie.c)
 *     memmove @ 0x1C0003700 (memmove.c)
 *     memset @ 0x1C0003A40 (memset.c)
 *     WPP_SF_Sd @ 0x1C0004598 (WPP_SF_Sd.c)
 *     WPP_SF_d @ 0x1C00047B0 (WPP_SF_d.c)
 *     CiConfigTaskPolicy @ 0x1C000D810 (CiConfigTaskPolicy.c)
 *     CiTaskDump @ 0x1C000D8A0 (CiTaskDump.c)
 *     CiTaskAllocate @ 0x1C000D950 (CiTaskAllocate.c)
 *     CiConfigQueryTaskFromRegistry @ 0x1C000DA10 (CiConfigQueryTaskFromRegistry.c)
 */

__int64 __fastcall CiConfigInitializeFromRegistry(HANDLE KeyHandle)
{
  ULONG i; // esi
  NTSTATUS v3; // ebx
  WCHAR *PoolWithTag; // rax
  WCHAR *v5; // rbx
  NTSTATUS v6; // r9d
  int TaskFromRegistry; // edi
  int v8; // ecx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  void *KeyHandlea; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v16[120]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE KeyInformation[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int Size; // [rsp+114h] [rbp+Ch]
  size_t Size_4; // [rsp+118h] [rbp+10h] BYREF

  memset(&v16[56], 0, 0x40uLL);
  for ( i = 0; ; ++i )
  {
    v3 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x98u, ResultLength);
    if ( v3 < 0 )
      break;
    if ( Size < 0x80 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag((POOL_TYPE)512, 2LL * (Size + 1), 0x74727641u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, &Size_4, Size);
        v5[(unsigned __int64)Size >> 1] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString, v5) < 0 )
          goto LABEL_20;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandlea, 0x101u, &ObjectAttributes);
        if ( v6 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xEu,
              (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
              v6);
LABEL_20:
          ExFreePoolWithTag(v5, 0);
          continue;
        }
        TaskFromRegistry = CiConfigQueryTaskFromRegistry(KeyHandlea);
        ZwClose(KeyHandlea);
        if ( TaskFromRegistry < 0 )
          goto LABEL_20;
        CiConfigTaskPolicy(v16);
        v8 = CiTaskAllocate(v5);
        if ( v8 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            Length[0] = v8;
            WPP_SF_Sd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
              0LL,
              *(_QWORD *)Length);
          }
        }
        else
        {
          CiConfigTaskPolicy(v13);
          CiTaskDump();
        }
      }
    }
LABEL_10:
    ;
  }
  if ( v3 == -1073741789 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
        -1073741789);
    goto LABEL_10;
  }
  if ( v3 == -2147483622 )
    return 0LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
      v3);
  return (unsigned int)v3;
}
