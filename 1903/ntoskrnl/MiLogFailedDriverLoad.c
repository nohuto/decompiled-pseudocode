/*
 * XREFs of MiLogFailedDriverLoad @ 0x14088AA58
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x14070F9B0 (MiCreateSectionForDriver.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x1400DFB50 (MiIsRetryIoStatus.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     IoWriteErrorLogEntry @ 0x140177180 (IoWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140298348 (IoAllocateGenericErrorLogEntry.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // esi
  __int128 v5; // xmm0
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // r15
  NTSTATUS v9; // ebx
  int v10; // r12d
  NTSTATUS v11; // r14d
  __int64 v12; // rcx
  int v13; // ecx
  __int128 v14; // xmm0
  int v15; // eax
  int v16; // edi
  unsigned int v17; // esi
  _WORD *GenericErrorLogEntry; // rax
  _WORD *v19; // rdi
  char *v20; // rsi
  const void **v21; // r14
  size_t v22; // rbx
  char *v23; // rsi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v26; // [rsp+40h] [rbp-29h] BYREF
  __int16 v27; // [rsp+50h] [rbp-19h]
  const wchar_t *v28; // [rsp+58h] [rbp-11h]
  __int128 v29; // [rsp+60h] [rbp-9h]
  UNICODE_STRING v30; // [rsp+70h] [rbp+7h]

  v4 = *a1;
  v5 = *(_OWORD *)a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = v4 + 2;
  DestinationString.Buffer = 0LL;
  v7 = -1LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  LODWORD(v8) = 1;
  v9 = a4;
  v10 = 0;
  v11 = 0;
  v26 = v5;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
    goto LABEL_14;
  v12 = -1LL;
  v28 = L"cannot find";
  do
    ++v12;
  while ( aCannotFind[v12] );
  v13 = 2 * v12;
  v14 = *(_OWORD *)a2;
  v15 = v13 + *a2;
  v27 = v13;
  v8 = 3LL;
  v6 += v15 + 4;
  v29 = v14;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitAnsiString(&DestinationString, a3);
      v8 = 4LL;
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) < 0 )
        v10 = 1;
      v6 += UnicodeString.Length + 2;
      v30 = UnicodeString;
    }
    else
    {
      v11 = (int)a3;
    }
    if ( v10 == 1 )
    {
LABEL_14:
      v11 = v9;
      v28 = L"failed to load";
      do
        ++v7;
      while ( aFailedToLoad[v7] );
      v16 = 2 * v7;
      v8 = (unsigned int)(v8 + 1);
      v27 = v16;
      v6 += v16 + 2;
      v9 = MiIsRetryIoStatus(v9, 0x1000uLL) ? -1073741670 : -1073741204;
    }
  }
  v17 = v6 + 48;
  if ( v17 < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v17);
    v19 = GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *((_DWORD *)GenericErrorLogEntry + 3) = 1073741850;
      v20 = (char *)(GenericErrorLogEntry + 24);
      *((_DWORD *)GenericErrorLogEntry + 5) = v9;
      *((_DWORD *)GenericErrorLogEntry + 4) = v11;
      GenericErrorLogEntry[3] = 48;
      if ( (_DWORD)v8 )
      {
        v21 = (const void **)&v26 + 1;
        do
        {
          v22 = *((unsigned __int16 *)v21 - 4);
          memmove(v20, *v21, v22);
          v21 += 2;
          v23 = &v20[2 * (v22 >> 1)];
          *(_WORD *)v23 = 32;
          v20 = v23 + 2;
          --v8;
        }
        while ( v8 );
      }
      *((_WORD *)v20 - 1) = 0;
      v19[2] = 1;
      IoWriteErrorLogEntry(v19);
    }
  }
  RtlFreeAnsiString(&UnicodeString);
}
