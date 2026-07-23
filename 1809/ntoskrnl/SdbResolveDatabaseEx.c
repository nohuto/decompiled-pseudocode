/*
 * XREFs of SdbResolveDatabaseEx @ 0x1408E9770
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1408E94D8 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1408E9388 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x1408E96A0 (SdbGetPathCustomSdb.c)
 *     SdbpGetSystemSdbFilePath @ 0x1408EA08C (SdbpGetSystemSdbFilePath.c)
 *     AslGuidToString_UStr @ 0x1408EA3D4 (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x1408EA788 (AslUnicodeStringFree.c)
 *     AslRegistryGetUInt32_UStr @ 0x1408EAAC4 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 result; // rax
  __int64 v12; // rbx
  wchar_t *v13; // r12
  GUID **v14; // r8
  unsigned int v15; // edx
  GUID *v16; // r9
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int16 v23; // r15
  wchar_t *v24; // rax
  __int64 v25; // rdx
  int v26; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v32; // [rsp+E8h] [rbp+77h]

  result = 0LL;
  a6 = 0;
  v26 = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  LODWORD(v12) = 0;
  Source.Buffer = 0LL;
  v13 = 0LL;
  if ( !a5 )
    return result;
  *a5 = 0;
  v14 = &off_140402D80;
  v15 = 0;
  while ( 1 )
  {
    v16 = *v14;
    v17 = *(_QWORD *)&(*v14)->Data1 - *a2;
    if ( !v17 )
      v17 = *(_QWORD *)v16->Data4 - a2[1];
    if ( !v17 )
      break;
    ++v15;
    v14 += 3;
    if ( v15 >= 3 )
      goto LABEL_19;
  }
  v14 = (GUID **)*((unsigned int *)&off_140402D80 + 6 * (int)v15 + 4);
  v18 = *((_DWORD *)&off_140402D80 + 6 * (int)v15 + 2);
  v19 = *((_DWORD *)&off_140402D80 + 6 * (int)v15 + 3);
  a6 = v18;
  v32 = v19;
  if ( !(_DWORD)v14 )
  {
LABEL_19:
    if ( (int)AslGuidToString_UStr(&Source, a2, v14) >= 0
      && (v23 = Source.Length + 184,
          v24 = (wchar_t *)AslAlloc(v22, (unsigned int)Source.Length + 184),
          (v13 = v24) != 0LL) )
    {
      Destination.MaximumLength = v23;
      Destination.Buffer = v24;
      Destination.Length = 0;
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) >= 0 )
      {
        if ( a3 )
        {
          if ( (int)AslRegistryGetUInt32_UStr(&a6, KeyHandle, &g_ustrDatabaseType) < 0 )
          {
            AslLogCallPrintf(1LL);
            *a3 = 0;
            goto LABEL_36;
          }
          *a3 = a6 & 0x7FFFFFFF;
        }
        if ( a4 )
        {
          if ( (int)AslRegistryGetUInt32_UStr(&v26, KeyHandle, L".0") < 0 )
          {
            AslLogCallPrintf(1LL);
            *a4 = 0;
            goto LABEL_36;
          }
          *a4 = v26;
        }
        if ( SdbGetPathCustomSdb((int)a5, v25, (__int64)a2, a1 + 576) )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( a5[v12] );
        }
        else
        {
          AslLogCallPrintf(1LL);
        }
        goto LABEL_36;
      }
      AslLogCallPrintf(1LL);
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
LABEL_36:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v13 )
      ExFreePoolWithTag(v13, 0x74705041u);
    if ( Source.Buffer )
      AslUnicodeStringFree(&Source);
    return (unsigned int)v12;
  }
  if ( (int)SdbpGetSystemSdbFilePath((_DWORD)a5, v15, (_DWORD)v14, (_DWORD)v16, 0LL, a1 + 576) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
  }
  if ( a3 )
    *a3 = v18;
  if ( a4 )
  {
    v21 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v20);
    *a4 = v21;
    if ( v32 )
      *a4 = v21 & 0x1B;
  }
  return (unsigned int)v12;
}
