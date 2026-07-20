/*
 * XREFs of SmpInitializeKnownDllsInternal @ 0x140007D30
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400082D0 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpRandomizeDllList @ 0x1400081A0 (SmpRandomizeDllList.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140016584 (SmpTerminate.c)
 */

__int64 __fastcall SmpInitializeKnownDllsInternal(__int64 a1, void *a2, int a3, int a4)
{
  int v6; // r14d
  unsigned __int8 v7; // r13
  unsigned int v8; // ecx
  unsigned int v9; // r15d
  unsigned int v10; // edi
  _QWORD *v11; // r12
  const UNICODE_STRING *v12; // rbx
  const UNICODE_STRING *v13; // rsi
  const UNICODE_STRING *v14; // rbx
  __int16 v15; // ax
  int v16; // ebx
  PVOID *v17; // r14
  int v18; // r15d
  PVOID *v19; // rbx
  struct _UNICODE_STRING *v20; // rsi
  _QWORD *v21; // rcx
  void **Buffer; // rax
  void *v23; // r8
  int v24; // eax
  _QWORD *v25; // rdx
  PVOID *v26; // r8
  __int64 v27; // r9
  char v29[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh]
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v32; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v33; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h]
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  const UNICODE_STRING *v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+90h] [rbp-70h]
  _WORD *v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  _QWORD v44[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v46[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v47; // [rsp+D8h] [rbp-28h]
  _QWORD *v48; // [rsp+E0h] [rbp-20h]
  HANDLE Handle; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+F0h] [rbp-10h]
  int *v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+104h] [rbp+4h]
  __int16 v54; // [rsp+108h] [rbp+8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+150h] [rbp+50h] BYREF

  v35 = a3;
  v30 = a4;
  BaseAddress = 0LL;
  v31 = 0;
  v6 = a4;
  v7 = 0;
  v8 = SmpRandomizeDllList(&SmpKnownDllsList, &BaseAddress, &v31);
  if ( (v8 & 0x80000000) == 0 )
  {
    ObjectAttributes.Length = 48;
    v44[1] = &v32;
    ObjectAttributes.RootDirectory = a2;
    v48 = v44;
    v47 = &SmpProcessModuleImports;
    v42 = SmpKnownDllSecurityDescriptor;
    v51 = &v38;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v46[0] = 64;
    v46[1] = 7;
    v38 = 48;
    v39 = a1;
    v41 = 80;
    v40 = 0LL;
    v43 = 0LL;
    v50 = 983071;
    v52 = 16;
    while ( 1 )
    {
      v9 = v31;
      v33 = &v32;
      v32 = &v32;
      v10 = 0;
      if ( v31 )
        break;
LABEL_20:
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      v17 = (PVOID *)v32;
      v8 = 0;
      BaseAddress = 0LL;
      v18 = 0;
      v31 = 0;
      if ( v32 == &v32 )
        return v8;
      do
      {
        v19 = (PVOID *)SmpKnownDllsList;
        v20 = (struct _UNICODE_STRING *)v17;
        v17 = (PVOID *)*v17;
        if ( SmpKnownDllsList == &SmpKnownDllsList )
        {
LABEL_27:
          v31 = ++v18;
        }
        else
        {
          while ( 1 )
          {
            String1 = (UNICODE_STRING)*((_OWORD *)v19 + 1);
            if ( *((_WORD *)v19 + 8) && *(_WORD *)v19[3] == 95 )
            {
              ++String1.Buffer;
              String1.Length -= 2;
              String1.MaximumLength -= 2;
            }
            if ( !RtlCompareUnicodeString(&String1, v20 + 1, 1u) )
              break;
            v19 = (PVOID *)*v19;
            if ( v19 == &SmpKnownDllsList )
              goto LABEL_27;
          }
          v21 = *(_QWORD **)&v20->Length;
          if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v20->Length + 8LL) != v20 )
            goto LABEL_66;
          Buffer = (void **)v20->Buffer;
          if ( *Buffer != v20 )
            goto LABEL_66;
          *Buffer = v21;
          v21[1] = Buffer;
          RtlFreeUnicodeString(v20 + 2);
          v23 = *(void **)&v20[3].Length;
          if ( v23 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v23);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v20);
          v18 = v31;
        }
        v8 = 0;
      }
      while ( v17 != &v32 );
      if ( !v18 )
        return v8;
      v24 = SmpRandomizeDllList(&v32, &BaseAddress, &v31);
      v25 = v32;
      v8 = v24;
      v26 = v33;
      if ( *((PVOID **)v32 + 1) != &v32
        || *v33 != &v32
        || (*v33 = v32, v25[1] = v26, v27 = qword_140025B28, *((PVOID **)SmpKnownDllsList + 1) != &SmpKnownDllsList)
        || *(PVOID **)qword_140025B28 != &SmpKnownDllsList
        || *(_QWORD **)(*v25 + 8LL) != v25
        || *v26 != v25 )
      {
LABEL_66:
        __fastfail(3u);
      }
      *(_QWORD *)qword_140025B28 = v25;
      qword_140025B28 = v25[1];
      *(_QWORD *)v25[1] = &SmpKnownDllsList;
      v25[1] = v27;
      if ( v24 < 0 )
        return v8;
      v6 = v30;
    }
    v11 = BaseAddress;
    while ( 1 )
    {
      v12 = (const UNICODE_STRING *)SmpExcludeKnownDllsList;
      v13 = (const UNICODE_STRING *)v11[2 * v10 + 1];
      if ( SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString(v12 + 1, v13 + 1, 1u) )
        {
          v12 = *(const UNICODE_STRING **)&v12->Length;
          if ( v12 == (const UNICODE_STRING *)&SmpExcludeKnownDllsList )
            goto LABEL_51;
        }
        if ( v12 )
        {
LABEL_63:
          v6 = v30;
          goto LABEL_19;
        }
LABEL_51:
        v6 = v30;
      }
      v14 = (const UNICODE_STRING *)SmpExcludeKnownDllsList;
      if ( SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString(v14 + 1, v13 + 2, 1u) )
        {
          v14 = *(const UNICODE_STRING **)&v14->Length;
          if ( v14 == (const UNICODE_STRING *)&SmpExcludeKnownDllsList )
            goto LABEL_56;
        }
        if ( v14 )
          goto LABEL_63;
LABEL_56:
        v6 = v30;
      }
      v53 = 0x1000000;
      if ( v13[1].Length >= 2u && *v13[1].Buffer == 95 )
      {
        if ( v35 || !v6 )
          goto LABEL_19;
        v53 = 17825792;
      }
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13[2];
      if ( NtOpenFile(&FileHandle, 0x120020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
        break;
LABEL_19:
      if ( ++v10 >= v9 )
        goto LABEL_20;
    }
    v40 = v13 + 2;
    v44[0] = v13 + 2;
    if ( v42 )
    {
      v15 = v42[1];
      v7 = v15 & 8;
      v42[1] = v15 | 8;
    }
    v16 = LdrVerifyImageMatchesChecksumEx((unsigned __int64)FileHandle | 1, v46);
    if ( v42 )
      v42[1] ^= (v7 ^ (unsigned __int8)v42[1]) & 8;
    if ( v16 >= 0 )
    {
      if ( (v54 & 0x2000) == 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Non-DLL file included in KnownDLL list.");
        v16 = -1073740945;
LABEL_65:
        Parameters[0] = (unsigned __int64)&DestinationString;
        Parameters[1] = v16;
        Parameters[2] = (unsigned __int64)&v13[2];
        SmpTerminate(Parameters, 5u, 3u);
        __debugbreak();
      }
      NtClose(Handle);
      goto LABEL_17;
    }
    v29[0] = 1;
    if ( v16 == -1073740760 )
    {
      if ( (int)RtlAppxIsFileOwnedByTrustedInstaller(FileHandle, v29) >= 0 && !v29[0] )
        goto LABEL_18;
    }
    else if ( v16 == -1073741771 )
    {
LABEL_18:
      NtClose(FileHandle);
      goto LABEL_19;
    }
    RtlInitUnicodeString(&DestinationString, L"Verification of a KnownDLL failed.");
LABEL_17:
    if ( v16 < 0 )
      goto LABEL_65;
    goto LABEL_18;
  }
  return v8;
}
