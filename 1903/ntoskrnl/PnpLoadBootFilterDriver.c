/*
 * XREFs of PnpLoadBootFilterDriver @ 0x140A0FC60
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140733AA4 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x14029D74C (PipIs32bitKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  void **v4; // r10
  unsigned int i; // edx
  char *j; // rcx
  __int64 v10; // rbx
  char *v11; // rcx
  char *v12; // rdi
  int started; // ebx
  UNICODE_STRING String2; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h]

  v4 = (void **)IopGroupTable;
  *a4 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( !v4 || a3 >= IopGroupIndex )
    return 3221225473LL;
  for ( i = 0; i < a3; v4 += 2 )
  {
    for ( j = (char *)*v4; j != (char *)IopGroupTable + 16 * i; j = *(char **)j )
    {
      if ( !j[47] )
        return 3221225473LL;
    }
    ++i;
  }
  _mm_lfence();
  v10 = 16LL * a3;
  v11 = (char *)IopGroupTable + v10;
  v12 = *(char **)((char *)IopGroupTable + v10);
  while ( v12 != v11 )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)v12 + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( v12[47] )
        {
          started = *((_DWORD *)v12 + 10);
          if ( started >= 0 )
            started = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      (unsigned int)&String2,
                      (unsigned int)*((_QWORD *)v12 + 3) + 32,
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL),
                      KeLoaderBlock_0 + 16,
                      1,
                      1);
          *((_DWORD *)v12 + 10) = started;
          *((_QWORD *)v12 + 2) = Object;
          v12[47] = 1;
          if ( Object )
          {
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
            *a4 = Object;
          }
          else
          {
            v12[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)started;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
    v12 = *(char **)v12;
    v11 = (char *)IopGroupTable + v10;
  }
  started = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)started;
}
