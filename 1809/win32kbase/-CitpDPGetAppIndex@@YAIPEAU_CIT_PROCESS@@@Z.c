/*
 * XREFs of ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C007E3AC
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003370C (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CitpDPGetAppIndex(struct _CIT_PROCESS *a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  PUNICODE_STRING v3; // r8
  WCHAR *Buffer; // rdx
  WCHAR *v5; // rcx
  WCHAR *i; // rax
  unsigned int v7; // esi
  PCUNICODE_STRING *v8; // rdi
  char **v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING v12; // [rsp+30h] [rbp-10h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp+10h] BYREF

  pImageFileName = 0LL;
  v1 = 0;
  *(_QWORD *)&v12.Length = 0LL;
  v2 = *((_DWORD *)a1 + 16) == 1;
  v12.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( v2 )
  {
    if ( SeLocateProcessImageName(**((PEPROCESS **)a1 + 1), &pImageFileName) < 0 )
      goto LABEL_15;
    v3 = pImageFileName;
    v12 = *pImageFileName;
  }
  else
  {
    RtlInitUnicodeString(&v12, *((PCWSTR *)a1 + 4));
    v3 = pImageFileName;
  }
  Buffer = v12.Buffer;
  v5 = &v12.Buffer[(unsigned __int64)v12.Length >> 1];
  for ( i = v5 - 1; i > v12.Buffer; --i )
  {
    if ( *i == 92 )
    {
      Buffer = i + 1;
      break;
    }
  }
  DestinationString.Buffer = Buffer;
  DestinationString.Length = 2 * (v5 - Buffer);
  DestinationString.MaximumLength = DestinationString.Length;
  if ( v3 )
    RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  v7 = 0;
  v8 = (PCUNICODE_STRING *)&unk_1C0189420;
  while ( !RtlEqualUnicodeString(v8[1], &DestinationString, 0) )
  {
    ++v7;
    v8 += 2;
    if ( v7 >= 0xD )
      goto LABEL_15;
  }
  v1 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 > 6u )
  {
    switch ( v1 )
    {
      case 7u:
        if ( (unsigned int)dword_1C01C80D4 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C80C8;
          goto LABEL_25;
        }
        break;
      case 8u:
        if ( (unsigned int)dword_1C01C808C < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C8080;
          goto LABEL_25;
        }
        break;
      case 9u:
        if ( (unsigned int)dword_1C01C80A4 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C8098;
          goto LABEL_25;
        }
        break;
      default:
        if ( v1 == 10 && (unsigned int)dword_1C01C8074 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C8068;
          goto LABEL_25;
        }
        break;
    }
  }
  else
  {
    switch ( v1 )
    {
      case 6u:
        if ( (unsigned int)dword_1C01C80BC < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C80B0;
          goto LABEL_25;
        }
        break;
      case 1u:
        if ( (unsigned int)dword_1C01C7774 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C7768;
LABEL_25:
          EtwTelemetryCoverageReport(v10);
        }
        break;
      case 2u:
        if ( (unsigned int)dword_1C01C775C >= MEMORY[0xFFFFF7800000037C] )
          break;
        v10 = &off_1C01C7750;
        goto LABEL_25;
      case 3u:
        if ( (unsigned int)dword_1C01C8104 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C80F8;
          goto LABEL_25;
        }
        break;
      case 4u:
        if ( (unsigned int)dword_1C01C80EC < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C80E0;
          goto LABEL_25;
        }
        break;
      default:
        if ( v1 == 5 && (unsigned int)dword_1C01C7744 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C01C7738;
          goto LABEL_25;
        }
        break;
    }
  }
LABEL_15:
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  return v1;
}
