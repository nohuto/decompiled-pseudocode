/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x1406D417C
 * Callers:
 *     SepIsImageInMinTcbList @ 0x140619B44 (SepIsImageInMinTcbList.c)
 *     RtlOpenImageFileOptionsKey @ 0x14068D2E0 (RtlOpenImageFileOptionsKey.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406D42AC (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D430C (RtlpProcessIFEOKeyFilter.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v6; // ecx
  __int64 v7; // rax
  int v8; // edx
  bool v9; // r15
  __int64 result; // rax
  HANDLE v11; // rdi
  ULONG v12; // eax
  bool v13; // zf
  __int64 v14; // rdx
  NTSTATUS v15; // ebx
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v20; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a4 = 0LL;
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1) + *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v7 - 2) == 92 )
        break;
      v7 -= 2LL;
      v6 -= 2;
    }
    while ( v6 );
  }
  v8 = *a1 - v6;
  v18 = v7;
  LOWORD(v17) = v8;
  if ( (unsigned __int16)v8 != v8 )
    return 3221225507LL;
  v9 = RtlpDisableIFEOCaching != 0;
  result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( (int)result >= 0 )
  {
    v11 = Handle;
    v12 = 1600;
    v13 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    if ( !v13 )
      v12 = 576;
    ObjectAttributes.Attributes = v12;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v9 )
      ZwClose(v11);
    if ( v15 >= 0 )
    {
      v20 = KeyHandle;
      v15 = RtlpProcessIFEOKeyFilter(&v20, v14, a1);
      if ( v15 < 0 )
      {
        if ( v20 )
          ZwClose(v20);
      }
      else
      {
        *a4 = v20;
      }
    }
    return (unsigned int)v15;
  }
  return result;
}
