/*
 * XREFs of BiCreateEfiEntry @ 0x1408F4060
 * Callers:
 *     BiBindEfiEntries @ 0x1408F3454 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1408F4820 (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 *     BiAddBootEntry @ 0x1408F2F88 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x1408F3CD8 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x1408F5230 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x1408F5E88 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F6024 (BiUpdateObjectReferenceInEfiEntry.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  wchar_t *Buffer; // rdi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int BootEntry; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  UNICODE_STRING EntryValue; // [rsp+68h] [rbp+38h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+48h] BYREF

  Buffer = 0LL;
  EntryValue.Buffer = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  BootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_17;
  if ( (a2[3].Data1 & 2) == 0 )
  {
    BootEntry = BiCreateBootEntry(BcdObjectHandle, &EntryValue.Buffer);
    if ( BootEntry >= 0 )
    {
      Buffer = EntryValue.Buffer;
      BootEntry = BiAddBootEntry((PUNICODE_STRING)EntryValue.Buffer, &EntryValue);
      if ( BootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", *(unsigned int *)&EntryValue.Length);
        *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
        v9 = *(_DWORD *)&EntryValue.Length;
        a2[3].Data1 |= 0x21u;
        a2[2].Data1 = v9;
        *(_QWORD *)a2[2].Data4 = Buffer;
        BootEntry = BiSetRegistryValue(
                      (__int64)v6,
                      L"FirmwareVariable",
                      L"Description",
                      3u,
                      Buffer,
                      *((_DWORD *)Buffer + 1));
        if ( BootEntry >= 0 )
        {
          a2[3].Data1 |= 2u;
LABEL_14:
          if ( BootEntry >= 0 )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
      goto LABEL_17;
    }
LABEL_16:
    Buffer = EntryValue.Buffer;
    goto LABEL_17;
  }
  BootEntry = BiGetSavedBootEntry(BcdObjectHandle, &EntryValue.Buffer);
  if ( BootEntry < 0 )
    goto LABEL_16;
  Buffer = EntryValue.Buffer;
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BootEntry = BiUpdateObjectReferenceInEfiEntry(EntryValue.Buffer, v6);
    if ( BootEntry < 0 )
      goto LABEL_17;
    a2[3].Data1 |= 0x20u;
  }
  BootEntry = BiAddBootEntry((PUNICODE_STRING)Buffer, &EntryValue);
  if ( BootEntry >= 0 )
  {
    BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", *(unsigned int *)&EntryValue.Length);
    *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
    v8 = *(_DWORD *)&EntryValue.Length;
    a2[3].Data1 |= 1u;
    a2[2].Data1 = v8;
    *(_QWORD *)a2[2].Data4 = Buffer;
    BootEntry = BiSetRegistryValue(
                  (__int64)v6,
                  L"FirmwareVariable",
                  L"Description",
                  3u,
                  Buffer,
                  *((_DWORD *)Buffer + 1));
    if ( BootEntry >= 0 )
    {
      BootEntry = BiUpdateEfiEntry(a1, a2);
      goto LABEL_14;
    }
  }
LABEL_17:
  BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)BootEntry);
LABEL_18:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (a2[3].Data1 & 1) == 0 && Buffer )
    ExFreePoolWithTag(Buffer, 0x4B444342u);
  return (unsigned int)BootEntry;
}
