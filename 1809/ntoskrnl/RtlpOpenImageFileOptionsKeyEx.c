/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x1406B2BC4
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     SepIsImageInMinTcbList @ 0x1406B56A8 (SepIsImageInMinTcbList.c)
 *     RtlOpenImageFileOptionsKey @ 0x140891710 (RtlOpenImageFileOptionsKey.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406B2CE4 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B2D64 (RtlpProcessIFEOKeyFilter.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  unsigned int v5; // r8d
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  bool v10; // r15
  __int64 result; // rax
  HANDLE v12; // r14
  ULONG v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  __int16 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v21; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v5 = *a1;
  Handle = 0LL;
  v7 = *((_QWORD *)a1 + 1) + v5;
  v8 = v5;
  for ( KeyHandle = 0LL; v8; v8 -= 2 )
  {
    if ( *(_WORD *)(v7 - 2) == 92 )
      break;
    v7 -= 2LL;
  }
  v9 = v5 - v8;
  v19 = v7;
  v18 = v9;
  if ( (unsigned __int16)v9 != v9 )
    return 3221225507LL;
  v10 = RtlpDisableIFEOCaching != 0;
  result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    v13 = 1600;
    v14 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    if ( !v14 )
      v13 = 576;
    ObjectAttributes.Attributes = v13;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v10 )
      ZwClose(v12);
    if ( v16 >= 0 )
    {
      v21 = KeyHandle;
      v16 = RtlpProcessIFEOKeyFilter(&v21, v15, a1);
      if ( v16 < 0 )
      {
        if ( v21 )
          ZwClose(v21);
      }
      else
      {
        *a4 = v21;
      }
    }
    return (unsigned int)v16;
  }
  return result;
}
