/*
 * XREFs of CreateRegistryLinksForMachine @ 0x140007080
 * Callers:
 *     InitializeWow64OnBoot @ 0x140006534 (InitializeWow64OnBoot.c)
 * Callees:
 *     CreateMergeLink @ 0x140007120 (CreateMergeLink.c)
 *     PathReplaceGreedy @ 0x140013EE8 (PathReplaceGreedy.c)
 *     Wow64SelectWowNodePathInternal @ 0x140014184 (Wow64SelectWowNodePathInternal.c)
 */

__int64 __fastcall CreateRegistryLinksForMachine(__int16 a1)
{
  unsigned int v1; // ebp
  unsigned __int16 *v2; // r12
  char v3; // r15
  const UNICODE_STRING *v4; // rbx
  struct _UNICODE_STRING *v5; // r14
  struct _UNICODE_STRING *p_DestinationString; // rsi
  int MergeLink; // edi
  __int16 v9; // ax
  USHORT v10; // di
  USHORT v11; // si
  WCHAR *Heap; // rax
  WCHAR *v13; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING v15; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  if ( a1 == 332 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    v2 = (unsigned __int16 *)Wow64SelectWowNodePathInternal();
  }
  v4 = &RegistrySymbolicLinks;
  while ( 1 )
  {
    v5 = (struct _UNICODE_STRING *)&v4[1];
    p_DestinationString = (struct _UNICODE_STRING *)v4;
    if ( v3 )
      break;
LABEL_5:
    MergeLink = CreateMergeLink(p_DestinationString, v5);
    if ( v3 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, p_DestinationString->Buffer);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5->Buffer);
    }
    if ( MergeLink >= 0 )
    {
      ++v1;
      v4 += 2;
      if ( v1 < 0x4D )
        continue;
    }
    return (unsigned int)MergeLink;
  }
  v9 = 2 * abs32(24 - *v2);
  v10 = v9 + v4->MaximumLength;
  v11 = v9 + v4[1].MaximumLength;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.MaximumLength = v10;
  DestinationString.Buffer = Heap;
  v13 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v11);
  v15.Buffer = v13;
  *(_QWORD *)&v15.Length = 0LL;
  v15.MaximumLength = v11;
  if ( !DestinationString.Buffer )
    return 3221225495LL;
  if ( v13 )
  {
    RtlCopyUnicodeString(&DestinationString, v4);
    RtlCopyUnicodeString(&v15, v4 + 1);
    PathReplaceGreedy(&Wowx86NodeString, v2, &DestinationString);
    PathReplaceGreedy(&Wowx86NodeString, v2, &v15);
    p_DestinationString = &DestinationString;
    v5 = &v15;
    goto LABEL_5;
  }
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return 3221225495LL;
}
