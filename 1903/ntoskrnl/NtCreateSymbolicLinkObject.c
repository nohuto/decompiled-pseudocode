/*
 * XREFs of NtCreateSymbolicLinkObject @ 0x1406D8FC0
 * Callers:
 *     CreateSystemRootLink @ 0x140A1D990 (CreateSystemRootLink.c)
 *     IopReassignSystemRoot @ 0x140A1E38C (IopReassignSystemRoot.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ObCreateSymbolicLink @ 0x1406D92D8 (ObCreateSymbolicLink.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  char PreviousMode; // r8
  UNICODE_STRING v9; // xmm0
  wchar_t *v10; // rdx
  wchar_t *v11; // rdx
  __int64 v12; // rcx
  UNICODE_STRING v13; // xmm1
  unsigned __int16 v14; // di
  NTSTATUS SymbolicLink; // ebx
  REGHANDLE v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  UNICODE_STRING *v26; // rax
  __int16 v27; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING v28; // [rsp+38h] [rbp-F0h] BYREF
  ACCESS_MASK v29; // [rsp+48h] [rbp-E0h] BYREF
  NTSTATUS v30; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-D0h] BYREF
  PUNICODE_STRING ObjectName; // [rsp+68h] [rbp-C0h]
  __int64 v33; // [rsp+70h] [rbp-B8h] BYREF
  UNICODE_STRING v34; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-98h] BYREF

  *(_QWORD *)&v28.Length = 0LL;
  v28.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v28, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    ObjectName = ObjectAttributes->ObjectName;
    if ( ObjectName )
    {
      v9 = *ObjectName;
      DestinationString = v9;
      if ( v9.Length )
      {
        v10 = (wchar_t *)((char *)DestinationString.Buffer + v9.Length);
        if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < DestinationString.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v28 = *Name;
    if ( v28.MaximumLength )
    {
      v11 = (wchar_t *)((char *)v28.Buffer + v28.MaximumLength);
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < v28.Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v12 = (__int64)SymbolicLinkHandle;
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    v13 = v28;
  }
  else
  {
    v13 = *Name;
    v28 = *Name;
    v26 = ObjectAttributes->ObjectName;
    if ( v26 )
      DestinationString = *v26;
  }
  if ( (v13.MaximumLength & 1) != 0 )
  {
    v28.MaximumLength = 2 * (v13.MaximumLength >> 1);
    v13 = v28;
  }
  if ( !v28.MaximumLength )
    return -1073741811;
  v14 = _mm_cvtsi128_si32((__m128i)v13);
  if ( v14 > v28.MaximumLength || (_mm_cvtsi128_si32((__m128i)v13) & 1) != 0 )
    return -1073741811;
  v33 = 0LL;
  v34 = v13;
  SymbolicLink = ObCreateSymbolicLink(
                   (_DWORD)SymbolicLinkHandle,
                   DesiredAccess,
                   (_DWORD)ObjectAttributes,
                   (unsigned int)&v33,
                   PreviousMode);
  v30 = SymbolicLink;
  v29 = DesiredAccess;
  v16 = EtwApiCallsProvRegHandle;
  if ( EtwApiCallsProvRegHandle )
  {
    v27 = 0;
    v17 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v17 = 1;
    }
    v18 = v17;
    UserData[v18].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v18].Size = 2LL;
    v19 = v17 + 1;
    if ( v28.Buffer )
    {
      v20 = v19;
      UserData[v20].Ptr = (ULONGLONG)v28.Buffer;
      UserData[v20].Size = v14;
      *(&UserData[0].Reserved + 1 * v20) = 0;
      ++v19;
    }
    v21 = v19;
    UserData[v21].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v21].Size = 2LL;
    v22 = v19 + 1;
    v23 = v22;
    UserData[v23].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData[v23].Size = 4LL;
    v24 = ++v22;
    UserData[v24].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v24].Size = 4LL;
    EtwWrite(v16, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v22 + 1, UserData);
  }
  return SymbolicLink;
}
