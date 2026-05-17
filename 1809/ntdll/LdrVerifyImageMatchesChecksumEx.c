/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800D0550 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x180081570 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationFile @ 0x1800A0500 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A23F0 (NtMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F4DE8 (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  char v6; // r13
  __int64 result; // rax
  int v8; // edi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v15; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-98h] BYREF
  __int64 v17[2]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-80h] BYREF
  __int64 v19; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-70h] BYREF
  __int64 v21; // [rsp+90h] [rbp-68h]
  _BYTE v22[16]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v23[8]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp-48h]

  v19 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (_DWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = &unk_18011D918;
  v17[1] = (__int64)v4;
  v5 = v4[7];
  LODWORD(v17[0]) = v5 & 0x1000000;
  LODWORD(v18) = v5 & 0x1000000;
  v14 = (v5 & 0x1000000) != 0;
  v6 = a1 & 1;
  result = NtCreateSection(&Handle, (unsigned int)v4[2], *((_QWORD *)v4 + 2), 0LL, v4[6], v5, a1);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    v20 = 0LL;
    v8 = ZwMapViewOfSection(Handle, -1LL, &v15);
    if ( v8 < 0 )
      goto LABEL_29;
    if ( v6 )
    {
      v9 = v17[0];
    }
    else
    {
      v8 = NtQueryInformationFile(a1, v22, v23, 24LL, 5LL, 0LL, &v20, 1, 0, 16);
      if ( v8 < 0 )
        goto LABEL_28;
      if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v15, v20, v24) )
        v8 = -1073741279;
      v9 = v17[0];
      if ( v8 < 0 )
        goto LABEL_28;
    }
    if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
    {
      v8 = RtlImageNtHeaderEx(0, v15, v20, &v19);
      if ( v8 >= 0 )
      {
        if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
          *(_WORD *)(a2 + 56) = *(_WORD *)(v19 + 22);
        if ( (*(_BYTE *)(a2 + 4) & 1) != 0 && *(_QWORD *)(a2 + 8) )
        {
          v10 = RtlpImageDirectoryEntryToDataEx(v15, v14, 1u, &v18, v17);
          v11 = v17[0];
          if ( v10 < 0 )
            v11 = 0LL;
          v17[0] = v11;
          v21 = v11;
          if ( v11 )
          {
            v18 = 0LL;
            while ( 1 )
            {
              v12 = *(_DWORD *)(v11 + 12);
              if ( !v12 )
                break;
              if ( !v9 )
                RtlImageRvaToVa(v19, v15, v12, &v18);
              _guard_dispatch_icall_fptr();
              v11 += 20LL;
              v21 = v11;
            }
          }
        }
      }
    }
LABEL_28:
    NtUnmapViewOfSection(-1LL);
LABEL_29:
    if ( v8 < 0 || v4 == (_DWORD *)&unk_18011D918 )
    {
      v13 = *((_QWORD *)v4 + 2);
      if ( v13 && (*(_BYTE *)(v13 + 24) & 0x10) != 0 )
        NtMakeTemporaryObject(Handle);
      NtClose(Handle);
    }
    else
    {
      *(_QWORD *)v4 = Handle;
    }
    return (unsigned int)v8;
  }
  return result;
}
