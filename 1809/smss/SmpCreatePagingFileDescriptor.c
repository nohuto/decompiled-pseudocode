/*
 * XREFs of SmpCreatePagingFileDescriptor @ 0x14000B460
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000B0A8 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpParseCommandLine @ 0x140001900 (SmpParseCommandLine.c)
 *     SmpParseSwapOrPageFileArguments @ 0x14000B5CC (SmpParseSwapOrPageFileArguments.c)
 */

__int64 __fastcall SmpCreatePagingFileDescriptor(__int128 *a1)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // r14d
  _OWORD *Heap; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  WCHAR v8; // ax
  __int64 *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+78h] [rbp+28h] BYREF
  ULONG v17; // [rsp+80h] [rbp+30h] BYREF

  if ( (unsigned int)SmpNumberOfPagefileDescriptors >= 0x10 )
    return 3221225623LL;
  v2 = SmpParseCommandLine(a1, 0LL, &v15, 0LL, &UnicodeString);
  if ( v2 < 0 )
  {
    v11 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v11) = 994;
    *((_DWORD *)&SmpPagefileLog + 2 * v11 + 1) = v2;
    *((_QWORD *)&SmpPagefileLog + v11 + 1) = a1;
    return (unsigned int)v2;
  }
  Value = 0;
  v17 = 0;
  SmpRegistrySpecifierPresent = 1;
  if ( !UnicodeString.Buffer )
    goto LABEL_16;
  v3 = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, &v17);
  if ( v3 < 0 )
  {
    v12 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_QWORD *)&SmpPagefileLog + v12 + 1) = 0LL;
    *((_DWORD *)&SmpPagefileLog + 2 * v12) = 1032;
    *((_DWORD *)&SmpPagefileLog + 2 * v12 + 1) = v3;
    RtlFreeUnicodeString(&v15);
    RtlFreeUnicodeString(&UnicodeString);
    return (unsigned int)v3;
  }
  if ( !Value || (v4 = 0, !v17) )
LABEL_16:
    v4 = 1;
  RtlFreeUnicodeString(&UnicodeString);
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v6 = (__int64)Heap;
  if ( Heap )
  {
    Heap[2] = *a1;
    Heap[1] = v15;
    *((_QWORD *)Heap + 7) = (unsigned __int64)Value << 20;
    *((_QWORD *)Heap + 6) = (unsigned __int64)Value << 20;
    v7 = v17;
    *(_DWORD *)(v6 + 92) &= ~2u;
    *(_QWORD *)(v6 + 64) = v7 << 20;
    *(_DWORD *)(v6 + 92) |= 2 * v4;
    v8 = RtlUpcaseUnicodeChar(*(_WORD *)(*(_QWORD *)(v6 + 24) + 8LL));
    *(_WORD *)(*(_QWORD *)(v6 + 24) + 8LL) = v8;
    if ( v8 != 63 )
    {
LABEL_9:
      if ( (*(_BYTE *)(v6 + 92) & 2) != 0 && (v8 == 63 || v8 == SmpOsVolumeLetter) )
      {
        v13 = SmpPagingFileDescriptorList;
        if ( *((PVOID **)SmpPagingFileDescriptorList + 1) == &SmpPagingFileDescriptorList )
        {
          *(_QWORD *)v6 = SmpPagingFileDescriptorList;
          *(_QWORD *)(v6 + 8) = &SmpPagingFileDescriptorList;
          v13[1] = v6;
          SmpPagingFileDescriptorList = (PVOID)v6;
          goto LABEL_12;
        }
      }
      else
      {
        v9 = (__int64 *)qword_140025E78;
        if ( *(PVOID **)qword_140025E78 == &SmpPagingFileDescriptorList )
        {
          *(_QWORD *)v6 = &SmpPagingFileDescriptorList;
          *(_QWORD *)(v6 + 8) = v9;
          *v9 = v6;
          qword_140025E78 = v6;
LABEL_12:
          ++SmpNumberOfPagefileDescriptors;
          return 0LL;
        }
      }
      __fastfail(3u);
    }
    if ( SmpAnyDriveDescriptorCreated != 1 )
    {
      *(_DWORD *)(v6 + 92) |= 4u;
      SmpAnyDriveDescriptorCreated = 1;
      goto LABEL_9;
    }
    RtlFreeUnicodeString(&v15);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)v6);
    return 3221225485LL;
  }
  else
  {
    RtlFreeUnicodeString(&v15);
    return 3221225495LL;
  }
}
