/*
 * XREFs of PfSnLogVolumeCreate @ 0x1406BE9B0
 * Callers:
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     PfSnLogHelper @ 0x14064C1E4 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v4; // rbp
  __int64 *v5; // rdx
  unsigned __int64 v6; // rbx
  int v7; // ecx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 2 * *(unsigned __int16 *)(a1 + 30);
  v3 = 0;
  v4 = PfSnLogHelper(*(_QWORD *)a1, (unsigned int)(v2 + 97) >> 4, &v11);
  if ( v4 )
  {
    v5 = v11;
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v2;
    *v11 = (8LL * (((unsigned int)(v2 + 97) >> 4) - 1)) | 5;
    v6 = ((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
    v5[1] = *(_QWORD *)(a1 + 8);
    SourceString.Length = v2;
    SourceString.MaximumLength = v2;
    *(_QWORD *)v6 = 0LL;
    v7 = *(_DWORD *)(v6 + 36);
    DestinationString.Buffer = (wchar_t *)(v6 + 56);
    SourceString.Buffer = *(wchar_t **)(a1 + 40);
    *(_DWORD *)v6 = (8 * v2 + 528) | 2;
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 56);
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(v6 + 36) ^= (*(_DWORD *)(a1 + 48) ^ v7) & 0xF;
    *(_DWORD *)(v6 + 36) ^= (*(_DWORD *)(a1 + 48) ^ *(_DWORD *)(v6 + 36)) & 0xF0;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(a1 + 24);
    *(_WORD *)(v6 + 40) = v2;
    *(_WORD *)(v6 + 42) = v2;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *(_WORD *)(v6 + 2LL * *(unsigned __int16 *)(a1 + 30) + 56) = 0;
    ExReleaseRundownProtection_0(v4 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v3;
}
