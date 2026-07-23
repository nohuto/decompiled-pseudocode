/*
 * XREFs of PnpLoadBootFilterDriver @ 0x1409C9994
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x140287848 (PipIs32bitKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  void **v5; // r11
  __int64 v7; // r10
  unsigned int i; // r8d
  char *j; // rcx
  __int64 v11; // rbx
  char *v12; // rcx
  char *v13; // rdi
  int started; // ebx
  UNICODE_STRING String2; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h]

  *a4 = 0LL;
  v5 = (void **)IopGroupTable;
  v7 = a3;
  if ( !IopGroupTable || a3 >= IopGroupIndex )
    return 3221225473LL;
  for ( i = 0; i < (unsigned int)v7; v5 += 2 )
  {
    for ( j = (char *)*v5; j != (char *)IopGroupTable + 16 * i; j = *(char **)j )
    {
      if ( !j[47] )
        return 3221225473LL;
    }
    ++i;
  }
  _mm_lfence();
  v11 = 16 * v7;
  v12 = (char *)IopGroupTable + 16 * v7;
  v13 = *(char **)v12;
  while ( v13 != v12 )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)v13 + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( v13[47] )
        {
          started = *((_DWORD *)v13 + 10);
          if ( started >= 0 )
            started = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      (unsigned int)&String2,
                      (unsigned int)*((_QWORD *)v13 + 3) + 32,
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)v13 + 3) + 48LL),
                      KeLoaderBlock_0 + 16,
                      1,
                      1);
          *((_DWORD *)v13 + 10) = started;
          *((_QWORD *)v13 + 2) = Object;
          v13[47] = 1;
          if ( Object )
          {
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
            *a4 = Object;
          }
          else
          {
            v13[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)started;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
    v13 = *(char **)v13;
    v12 = (char *)IopGroupTable + v11;
  }
  started = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)started;
}
