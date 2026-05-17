/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180026CC0 (RtlGetNtSystemRoot.c)
 *     RtlDoesFileExists_UEx @ 0x180035770 (RtlDoesFileExists_UEx.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A0920 (NtEnumerateKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E1550 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  const WCHAR *NtSystemRoot; // rax
  int Length; // r14d
  unsigned int v15; // ecx
  HANDLE v16; // r15
  unsigned int v17; // r12d
  int v18; // r14d
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v25; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  void *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  _BYTE v32[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+9Ch] [rbp-64h]
  char v34; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v27 = 48;
    v23 = 0LL;
    v28 = 0LL;
    v30 = 64;
    v29 = &unk_180118B68;
    v31 = 0LL;
    v19 = NtOpenKey(&v23, 8LL, &v27);
    v18 = v19;
    if ( v19 >= 0 || v19 == -1073741772 || v19 == -1073741431 )
    {
      v7 = v23;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(51LL, 0LL, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180118B68, v19);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LODWORD(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v7) = NtClose(*(HANDLE *)a2);
    return v7;
  }
  v7 = *(_QWORD *)(a2 + 8);
  if ( !v7 )
  {
    v7 = (unsigned __int64)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) & 0x8000) != 0 )
    {
      v7 = (unsigned __int64)NtCurrentPeb();
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v8 + 16 <= 0xFFFE )
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v8 + 16 <= v7 )
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v10 = *(char **)(a2 + 32);
          memmove(v10, Buffer, v8);
          LOBYTE(v11) = 1;
          *(_OWORD *)&v10[v8] = xmmword_180129000;
          v12 = *(_QWORD *)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LODWORD(v7) = RtlDoesFileExists_UEx(v12, v11);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
    }
    else
    {
      *(_WORD *)(a2 + 24) = 0;
    }
    return v7;
  }
  if ( v7 == 1 )
  {
    NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    Length = DestinationString.Length;
    v15 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LODWORD(v7) = Length + 16;
    if ( Length + 16 <= v15 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)Length);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)((unsigned __int16)Length + v7) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = Length + 16;
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    return v7;
  }
  if ( v7 > 0xFFFFFFFF )
    goto LABEL_35;
  v16 = *(HANDLE *)a2;
  v17 = v7 - 2;
  v22 = 0;
  if ( !v16 )
    goto LABEL_35;
  LODWORD(v7) = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, int *))NtEnumerateKey)(
                  v16,
                  v17,
                  0LL,
                  v32,
                  544,
                  &v22);
  v18 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 != -2147483622 )
    {
      LODWORD(v7) = DbgPrintEx(
                      51LL,
                      0LL,
                      "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                      v17,
                      v7);
LABEL_29:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
      if ( a3 )
        *a3 = v18;
      return v7;
    }
LABEL_35:
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LODWORD(v7) = v33;
  if ( v33 <= 0xFFFE )
  {
    v24[0] = v33;
    v24[1] = v33;
    v25 = &v34;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v16, v24, a2 + 24);
    v18 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(v21) = v7;
    LODWORD(v7) = DbgPrintEx(
                    51LL,
                    0LL,
                    "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                    v24,
                    v21);
    goto LABEL_29;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
