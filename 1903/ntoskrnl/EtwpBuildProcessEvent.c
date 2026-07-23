/*
 * XREFs of EtwpBuildProcessEvent @ 0x140690CA4
 * Callers:
 *     EtwpWriteProcessEvent @ 0x140690504 (EtwpWriteProcessEvent.c)
 *     EtwpTraceProcessRundown @ 0x1407080D4 (EtwpTraceProcessRundown.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     EtwpQueryTokenPackageInfo @ 0x140690FC0 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14069114C (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14069118C (EtwpQueryProcessCommandLine.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        PSIZE_T PackageSize,
        PANSI_STRING DestinationString,
        unsigned __int16 *a10,
        _QWORD *TokenInformation)
{
  _QWORD *v13; // r13
  int Next; // eax
  int *v15; // r12
  unsigned int v16; // ebp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  PACCESS_TOKEN v21; // rdi
  NTSTATUS InformationToken; // ebx
  PVOID v23; // rdx
  int v24; // ecx
  char *v25; // rbx
  __int64 Length; // rdi
  unsigned __int16 v27; // cx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // ebp
  int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned int v34; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v36; // rdx
  char *Buffer; // rcx
  __int16 v38; // ax
  __int64 v39; // rcx

  RtlInitAnsiString(DestinationString, 0LL);
  v13 = TokenInformation;
  *(_QWORD *)a4 = Process;
  *(_DWORD *)(a4 + 8) = Process[1].Header.WaitListHead.Flink;
  Next = (int)Process[1].SwapListEntry.Next;
  *v13 = 0LL;
  *(_DWORD *)(a4 + 12) = Next;
  *(_DWORD *)(a4 + 16) = MmGetSessionIdEx((__int64)Process);
  v15 = (int *)(a4 + 32);
  v16 = 4;
  *(_DWORD *)(a4 + 20) = HIDWORD(Process[2].Affinity.Bitmap[7]);
  v17 = Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v17;
  v18 = Process[1].ActiveProcessors.Bitmap[6];
  if ( v18 && ((v38 = *(_WORD *)(v18 + 8), v38 == 332) || v38 == 452) )
  {
    *v15 = 2;
    v19 = 6;
  }
  else
  {
    v19 = 4;
  }
  v20 = *v15;
  if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x70000) != 0 )
    v20 = v19;
  *v15 = v20;
  *(_QWORD *)a6 = a4;
  *(_QWORD *)(a6 + 8) = 36LL;
  v21 = PsReferencePrimaryToken(Process);
  EtwpQueryTokenPackageInfo(v21, PackageSize);
  InformationToken = SeQueryInformationToken(v21, TokenUser, (PVOID *)&TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v21);
  if ( InformationToken < 0 )
  {
    v24 = 4;
    v23 = &EtwpNull;
  }
  else
  {
    v23 = TokenInformation;
    *v13 = TokenInformation;
    v24 = 4 * *(unsigned __int8 *)(*(_QWORD *)v23 + 1LL) + 24;
  }
  *(_QWORD *)(a6 + 16) = v23;
  *(_DWORD *)(a6 + 28) = 0;
  v25 = (char *)&Process[1].ActiveProcessors.Bitmap[11];
  Length = -1LL;
  *(_DWORD *)(a6 + 24) = v24;
  do
    ++Length;
  while ( v25[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v36 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[14];
    if ( v36 )
    {
      if ( v36->Length && RtlUnicodeStringToAnsiString(DestinationString, v36, 1u) >= 0 )
      {
        Length = DestinationString->Length;
        Buffer = DestinationString->Buffer;
        v25 = &Buffer[Length];
        while ( v25 != Buffer )
        {
          if ( *--v25 == 92 )
          {
            ++v25;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v25 + Length;
      }
    }
  }
  *(_DWORD *)(a6 + 40) = Length;
  *(_QWORD *)(a6 + 32) = v25;
  *(_DWORD *)(a6 + 44) = 0;
  *(_QWORD *)(a6 + 48) = &EtwpNull;
  *(_QWORD *)(a6 + 56) = 1LL;
  if ( a3 )
    EtwpQueryProcessOtherInfo(Process, a5);
  else
    *a5 = 0LL;
  *a10 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[0] )
  {
    if ( a3 )
    {
      EtwpQueryProcessCommandLine(Process, a10);
      v27 = *a10;
      if ( *a10 )
      {
        v16 = 5;
        *(_QWORD *)(a6 + 64) = *((_QWORD *)a10 + 1);
        *(_DWORD *)(a6 + 72) = v27;
        *(_DWORD *)(a6 + 76) = 0;
      }
    }
  }
  v28 = 2LL * v16;
  v29 = v16 + 1;
  v30 = v16 + 2;
  v29 *= 2LL;
  *(_QWORD *)(a6 + 8 * v28) = &EtwpNull;
  *(_QWORD *)(a6 + 8 * v28 + 8) = 2LL;
  v31 = *(_DWORD *)PackageSize;
  *(_QWORD *)(a6 + 8 * v29) = PackageSize + 2;
  *(_DWORD *)(a6 + 8 * v29 + 8) = v31;
  *(_DWORD *)(a6 + 8 * v29 + 12) = 0;
  v32 = *((_DWORD *)PackageSize + 2);
  v33 = v30;
  v34 = v30 + 1;
  v33 *= 2LL;
  *(_QWORD *)(a6 + 8 * v33) = PackageSize + 34;
  *(_QWORD *)(a6 + 8 * v33 + 8) = v32;
  if ( a2 == 807 )
  {
    v39 = 2LL * v34++;
    *(_QWORD *)(a6 + 8 * v39) = (char *)Process + 1728;
    *(_QWORD *)(a6 + 8 * v39 + 8) = 8LL;
  }
  result = a7;
  *a7 = v34;
  return result;
}
