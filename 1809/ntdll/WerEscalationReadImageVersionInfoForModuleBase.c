/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x180056124
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800560AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     ValidatePointer @ 0x180056368 (ValidatePointer.c)
 *     GetResourceDirectoryEntry @ 0x1800563A4 (GetResourceDirectoryEntry.c)
 *     FindDirectoryEntry @ 0x1800563E8 (FindDirectoryEntry.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     StringCbLengthW @ 0x1800575D8 (StringCbLengthW.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(unsigned __int64 a1, __int64 a2)
{
  __int64 ResourceDirectoryEntry; // rax
  _DWORD *v5; // rcx
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  size_t v19; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  LODWORD(ResourceDirectoryEntry) = RtlImageNtHeaderEx(3, a1, 0LL, &pcbLength);
  if ( (int)ResourceDirectoryEntry >= 0 )
  {
    v5 = (_DWORD *)pcbLength;
    *(_DWORD *)a2 = *(_DWORD *)(pcbLength + 8);
    *(_DWORD *)(a2 + 4) = v5[22];
    v6 = v5[33] <= 2u;
    LODWORD(ResourceDirectoryEntry) = v5[20];
    DestinationString.Buffer = (wchar_t *)(unsigned int)ResourceDirectoryEntry;
    if ( !v6 )
    {
      ResourceDirectoryEntry = (unsigned int)v5[38];
      if ( (_DWORD)ResourceDirectoryEntry )
      {
        if ( v5[39] >= 0x10u )
        {
          LODWORD(ResourceDirectoryEntry) = -(int)ValidatePointer(&DestinationString, a1 + ResourceDirectoryEntry, 16LL);
          v8 = v7 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0);
          if ( v8 )
          {
            ResourceDirectoryEntry = GetResourceDirectoryEntry(
                                       &DestinationString,
                                       v7 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0),
                                       *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0)) + 0xC));
            if ( ResourceDirectoryEntry )
            {
              ResourceDirectoryEntry = FindDirectoryEntry(
                                         &DestinationString,
                                         ResourceDirectoryEntry,
                                         *(unsigned __int16 *)(v8 + 14),
                                         16LL);
              if ( ResourceDirectoryEntry )
              {
                v9 = *(unsigned int *)(ResourceDirectoryEntry + 4);
                LODWORD(v9) = v9 & 0x7FFFFFFF;
                LODWORD(ResourceDirectoryEntry) = ValidatePointer(&DestinationString, v8 + v9, 16LL);
                if ( (_DWORD)ResourceDirectoryEntry )
                {
                  ResourceDirectoryEntry = GetResourceDirectoryEntry(
                                             &DestinationString,
                                             v10,
                                             *(unsigned __int16 *)(v11 + 12));
                  if ( ResourceDirectoryEntry )
                  {
                    ResourceDirectoryEntry = FindDirectoryEntry(
                                               &DestinationString,
                                               ResourceDirectoryEntry,
                                               *(unsigned __int16 *)(v12 + 14),
                                               1LL);
                    if ( ResourceDirectoryEntry )
                    {
                      v13 = *(unsigned int *)(ResourceDirectoryEntry + 4);
                      LODWORD(v13) = v13 & 0x7FFFFFFF;
                      LODWORD(ResourceDirectoryEntry) = ValidatePointer(&DestinationString, v8 + v13, 16LL);
                      if ( (_DWORD)ResourceDirectoryEntry )
                      {
                        ResourceDirectoryEntry = GetResourceDirectoryEntry(&DestinationString, v14, 0LL);
                        if ( ResourceDirectoryEntry )
                        {
                          if ( *(int *)(ResourceDirectoryEntry + 4) >= 0 )
                          {
                            LODWORD(ResourceDirectoryEntry) = ValidatePointer(
                                                                &DestinationString,
                                                                v8 + *(unsigned int *)(ResourceDirectoryEntry + 4),
                                                                16LL);
                            if ( (_DWORD)ResourceDirectoryEntry )
                            {
                              if ( v15[1] >= 0x5C )
                              {
                                LODWORD(ResourceDirectoryEntry) = -(int)ValidatePointer(
                                                                          &DestinationString,
                                                                          a1 + *v15,
                                                                          92LL);
                                v18 = v16 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0);
                                if ( v18 )
                                {
                                  LODWORD(ResourceDirectoryEntry) = ValidatePointer(
                                                                      &DestinationString,
                                                                      v16 & -(__int64)((_DWORD)ResourceDirectoryEntry != 0),
                                                                      v17);
                                  if ( (_DWORD)ResourceDirectoryEntry )
                                  {
                                    LODWORD(ResourceDirectoryEntry) = ValidatePointer(&DestinationString, v18 + 6, 32LL);
                                    if ( (_DWORD)ResourceDirectoryEntry )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      LODWORD(ResourceDirectoryEntry) = StringCbLengthW(
                                                                          (STRSAFE_PCNZWCH)(v18 + 6),
                                                                          v19,
                                                                          &pcbLength);
                                      if ( (int)ResourceDirectoryEntry >= 0 )
                                      {
                                        LODWORD(ResourceDirectoryEntry) = RtlCompareUnicodeStrings(
                                                                            DestinationString.Buffer,
                                                                            (unsigned __int64)DestinationString.Length >> 1,
                                                                            (int)v18 + 6,
                                                                            (unsigned __int64)(unsigned __int16)pcbLength >> 1,
                                                                            0);
                                        if ( !(_DWORD)ResourceDirectoryEntry )
                                        {
                                          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
                                          LODWORD(ResourceDirectoryEntry) = *(_DWORD *)(v18 + 52);
                                          *(_DWORD *)(a2 + 12) = ResourceDirectoryEntry;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ResourceDirectoryEntry;
}
