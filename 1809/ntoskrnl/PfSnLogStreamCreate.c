/*
 * XREFs of PfSnLogStreamCreate @ 0x14064C084
 * Callers:
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     PfSnLogHelper @ 0x14064C1E4 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogStreamCreate(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  struct _EX_RUNDOWN_REF *v6; // r15
  __int64 *v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  if ( HIWORD(v1) <= (unsigned __int16)v1 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v3 = HIWORD(v1) - (unsigned __int16)v1;
    v4 = ((unsigned __int64)(unsigned int)(2 * v3 + 70) + 15) >> 4;
    v5 = 0;
    v6 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(*(_QWORD *)a1, (unsigned int)v4, &v14);
    if ( v6 )
    {
      v7 = v14;
      DestinationString.Length = 0;
      *v14 = (8LL * (unsigned int)(v4 - 1)) | 5;
      v8 = ((unsigned __int64)v7 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
      v7[1] = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v8 = 0LL;
      DestinationString.Buffer = (wchar_t *)(v8 + 44);
      v9 = (unsigned __int16)*(_DWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 24);
      DestinationString.MaximumLength = 2 * v3;
      SourceString.Length = 2 * v3;
      SourceString.MaximumLength = 2 * v3;
      SourceString.Buffer = (wchar_t *)(v10 + 2 * v9);
      LODWORD(v9) = *(_DWORD *)(v8 + 40);
      *(_DWORD *)v8 = 8 * ((2 * v3 + 54) & 0xFFFFFFF);
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v8 + 40) ^= (*(_DWORD *)(a1 + 36) ^ v9) & 1;
      *(_DWORD *)(v8 + 40) ^= ((unsigned __int8)*(_DWORD *)(v8 + 40) ^ (unsigned __int8)(2 * *(_DWORD *)(a1 + 36))) & 4;
      *(_WORD *)(v8 + 42) = v3;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      *(_WORD *)(v8 + 2 * v3 + 44) = 0;
      ExReleaseRundownProtection_0(v6 + 45);
    }
    else
    {
      return (unsigned int)-1073741446;
    }
  }
  return v5;
}
