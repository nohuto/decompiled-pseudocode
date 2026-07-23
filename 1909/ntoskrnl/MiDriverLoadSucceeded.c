/*
 * XREFs of MiDriverLoadSucceeded @ 0x1407102DC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1401553EC (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x14017AC50 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsCallImageNotifyRoutines @ 0x1405EC0D0 (PsCallImageNotifyRoutines.c)
 *     RtlGetNtSystemRoot @ 0x1406E97D0 (RtlGetNtSystemRoot.c)
 *     MiCacheImageSymbols @ 0x140711948 (MiCacheImageSymbols.c)
 *     MiProtectSystemImage @ 0x14074F1C0 (MiProtectSystemImage.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  ULONG_PTR v14; // rbx
  wchar_t *PoolWithTag; // rbx
  __m128i v16; // xmm0
  PWSTR NtSystemRoot; // rax
  NTSTATUS v18; // eax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v21[8]; // [rsp+40h] [rbp-40h] BYREF

  memset(v21, 0, 0x38uLL);
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    v10 = (__int64 *)MiSectionControlArea(a2);
    v11 = *v10;
    v12 = *(unsigned int *)(a1 + 64);
    LOBYTE(v21[1]) = 3;
    LODWORD(v21[1]) = v21[1] & 0xFFFF0FFF | ((*(_BYTE *)(v11 + 15) & 0xF0) << 8);
    v13 = *(unsigned __int8 *)(v11 + 15);
    LODWORD(v21[3]) = 0;
    LODWORD(v21[5]) = 0;
    v21[4] = v12;
    v21[2] = *(_QWORD *)(a1 + 48);
    LODWORD(v21[1]) = LODWORD(v21[1]) ^ (LODWORD(v21[1]) ^ (v13 << 15)) & 0x70000 | 0x100;
    v14 = MiReferenceControlAreaFile((__int64)v10);
    PsCallImageNotifyRoutines(a3, 0LL, (__int64)v21, v14);
    MiDereferenceControlAreaFile((__int64)v10, v14);
    if ( MiCacheImageSymbols(*(_QWORD *)(a1 + 48)) )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E4C6D4Du);
      if ( PoolWithTag )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v18 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v16 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v16, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          NtSystemRoot = RtlGetNtSystemRoot();
          v18 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
        }
        if ( v18 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, PoolWithTag);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(PVOID *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  result = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  if ( (_DWORD)result == 1 )
    return MiSessionUpdateImageCharges(a1);
  return result;
}
