/*
 * XREFs of VfCheckImageCompliance @ 0x1409281A4
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _stricmp @ 0x140195520 (_stricmp.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409286E0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckImageCompliance(__int64 a1)
{
  int v2; // r13d
  PIMAGE_NT_HEADERS v3; // rax
  PIMAGE_NT_HEADERS v4; // rdi
  ULONG_PTR v5; // rsi
  _IMAGE_DATA_DIRECTORY *v6; // r15
  unsigned int v7; // r12d
  unsigned int v8; // ecx
  unsigned __int16 Magic; // ax
  int SectionAlignment; // eax
  char Str1[8]; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+38h] [rbp-18h]

  v2 = 1;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v3 = RtlImageNtHeader(*(PVOID *)(a1 + 48));
    v4 = v3;
    if ( v3 )
    {
      v5 = (ULONG_PTR)&v3->OptionalHeader + v3->FileHeader.SizeOfOptionalHeader;
      v6 = &v3->OptionalHeader.DataDirectory[12];
      if ( !v3->OptionalHeader.DataDirectory[12].VirtualAddress || !v3->OptionalHeader.DataDirectory[12].Size )
        v2 = 0;
      v7 = 0;
      if ( v3->FileHeader.NumberOfSections )
      {
        do
        {
          if ( (*(_DWORD *)(v5 + 36) & 0xA0000000) == 0xA0000000 )
          {
            *(_QWORD *)Str1 = *(_QWORD *)v5;
            v12 = 0;
            if ( stricmp(Str1, "INIT") || (VfOptionFlags & 0x100) != 0 )
            {
              ViCiPreprocessOptions(
                Response,
                "The image %wZ contains an executable and writable section 0x%p (name %s).",
                8195LL,
                a1 + 88,
                v5,
                Str1);
              VfReportIssueWithOptions(0xC4u, 0x2003uLL, a1 + 88, v5, (ULONG_PTR)Str1, Response);
              if ( (MmVerifierData & 0x1000) != 0 )
                ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 276LL);
              _InterlockedIncrement(&dword_14041BAFC);
            }
          }
          if ( v2 )
          {
            v8 = *(_DWORD *)(v5 + 12);
            if ( v8 <= v6->VirtualAddress
              && *(_DWORD *)(v5 + 8) + v8 > v6->VirtualAddress
              && (*(_DWORD *)(v5 + 36) & 0x20000000) != 0 )
            {
              *(_QWORD *)Str1 = *(_QWORD *)v5;
              v12 = 0;
              ViCiPreprocessOptions(
                byte_14040644C,
                "The image %wZ contains an IAT, 0x%p in executable section (name %s).",
                8197LL,
                a1 + 88,
                v6,
                Str1);
              VfReportIssueWithOptions(0xC4u, 0x2005uLL, a1 + 88, (ULONG_PTR)v6, (ULONG_PTR)Str1, byte_14040644C);
              if ( (MmVerifierData & 0x1000) != 0 )
                ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 284LL);
              _InterlockedIncrement(&dword_14041BB04);
            }
          }
          Magic = v4->OptionalHeader.Magic;
          if ( Magic == 267 || Magic == 523 )
            SectionAlignment = v4->OptionalHeader.SectionAlignment;
          else
            SectionAlignment = 4096;
          if ( !SectionAlignment || (SectionAlignment & 0xFFF) != 0 )
          {
            *(_QWORD *)Str1 = *(_QWORD *)v5;
            v12 = 0;
            ViCiPreprocessOptions(
              byte_140406444,
              "The image %wZ contains section 0x%p that is not page aligned (name %s).",
              8196LL,
              a1 + 88,
              v5,
              Str1);
            VfReportIssueWithOptions(0xC4u, 0x2004uLL, a1 + 88, v5, (ULONG_PTR)Str1, byte_140406444);
            if ( (MmVerifierData & 0x1000) != 0 )
              ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 280LL);
            _InterlockedIncrement(&dword_14041BB00);
          }
          v5 += 40LL;
          ++v7;
        }
        while ( v7 < v4->FileHeader.NumberOfSections );
      }
    }
  }
}
