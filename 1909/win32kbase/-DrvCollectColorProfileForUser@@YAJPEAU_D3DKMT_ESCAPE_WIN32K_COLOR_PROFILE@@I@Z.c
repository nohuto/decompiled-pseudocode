/*
 * XREFs of ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00BBFB0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C012817C (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

NTSTATUS __fastcall DrvCollectColorProfileForUser(char *Sid, int a2)
{
  NTSTATUS result; // eax
  __int16 v5; // ax
  _WORD *v6; // rcx
  NTSTATUS v7; // edi
  int v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // esi
  int v11; // ecx
  char *v12; // rdi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+D0h] [rbp-30h]
  _BYTE v25[40]; // [rsp+D8h] [rbp-28h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v26; // [rsp+100h] [rbp+0h] BYREF
  __int64 v27; // [rsp+138h] [rbp+38h]
  int v28; // [rsp+140h] [rbp+40h]
  _BYTE v29[40]; // [rsp+148h] [rbp+48h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v30; // [rsp+170h] [rbp+70h] BYREF
  __int64 v31; // [rsp+1A8h] [rbp+A8h]
  int v32; // [rsp+1B0h] [rbp+B0h]
  _BYTE v33[40]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v34; // [rsp+220h] [rbp+120h] BYREF
  int v35; // [rsp+228h] [rbp+128h] BYREF

  if ( !(unsigned int)DxgkEngIsDwmProcess() && !gbOSTestSigningEnabled )
    return -1073741790;
  if ( *((_DWORD *)Sid + 23) + *((_DWORD *)Sid + 22) > (unsigned int)(a2 - 96) || *((_WORD *)Sid + 41) )
    return -1073741811;
  v5 = *((_WORD *)Sid + 34);
  v6 = Sid + 68;
  while ( v5 )
  {
    if ( (unsigned __int16)(v5 - 48) > 9u )
      return -1073741811;
    v5 = *++v6;
  }
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\USER\\");
    *(_QWORD *)&Source.Length = 0LL;
    Source.Buffer = 0LL;
    RtlInitUnicodeString(
      &Source,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\ICM\\ProfileAssociations\\Display\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\");
    *(_QWORD *)&Destination.Length = 0LL;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length
                                                             + Source.Length
                                                             + UnicodeString.Length
                                                             + 16);
    Destination.Buffer = (PWSTR)ExAllocatePool(
                                  PagedPool,
                                  (unsigned __int16)(DestinationString.Length + Source.Length
                                                                              + UnicodeString.Length
                                                                              + 16));
    if ( !Destination.Buffer )
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, (PCWSTR)Sid + 34);
    RtlFreeUnicodeString(&UnicodeString);
    v34 = 0;
    *(_QWORD *)&v17.Length = 0LL;
    v17.Buffer = 0LL;
    *(_QWORD *)&v18.Length = 0LL;
    v18.Buffer = 0LL;
    v35 = 0;
    QueryTable.Name = L"UsePerUserProfiles";
    QueryTable.EntryContext = &v34;
    QueryTable.DefaultData = &v35;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v23 = 0LL;
    v24 = 0;
    memset(v25, 0, sizeof(v25));
    v7 = RtlQueryRegistryValues(0, Destination.Buffer, &QueryTable, 0LL, 0LL);
    if ( v7 < 0 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      return v7;
    }
    v8 = v34;
    *((_DWORD *)Sid + 21) = v34;
    if ( v8 )
    {
      v26.QueryRoutine = 0LL;
      v26.Name = L"ICMProfile";
      v26.Flags = 304;
      v26.EntryContext = &v17;
      v26.DefaultType = 117440519;
      v26.DefaultData = 0LL;
      v26.DefaultLength = 0;
      v27 = 0LL;
      v28 = 0;
      memset(v29, 0, sizeof(v29));
      v9 = RtlQueryRegistryValues(0, Destination.Buffer, &v26, 0LL, 0LL);
      v30.QueryRoutine = 0LL;
      v7 = v9;
      v30.Flags = 304;
      v30.DefaultType = 117440519;
      v30.Name = L"ICMProfileAC";
      v30.DefaultData = 0LL;
      v30.EntryContext = &v18;
      v30.DefaultLength = 0;
      v31 = 0LL;
      v32 = 0;
      memset(v33, 0, sizeof(v33));
      v10 = RtlQueryRegistryValues(0, Destination.Buffer, &v30, 0LL, 0LL);
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( v7 < 0 && v10 < 0 )
      {
        *((_DWORD *)Sid + 21) = 0;
        return v7;
      }
      v11 = *((_DWORD *)Sid + 22);
      v12 = Sid + 96;
      if ( v11 )
      {
        if ( v11 != (v17.Length >> 1) + 1 )
        {
LABEL_29:
          if ( v17.Buffer )
            RtlFreeUnicodeString(&v17);
          if ( v18.Buffer )
            RtlFreeUnicodeString(&v18);
          return -1073741811;
        }
        memmove(Sid + 96, v17.Buffer, v17.Length);
        v12 += 2 * *((unsigned int *)Sid + 22);
        *((_WORD *)v12 - 1) = 0;
      }
      else
      {
        if ( v17.Length )
          v13 = (v17.Length >> 1) + 1;
        else
          v13 = 0;
        *((_DWORD *)Sid + 22) = v13;
      }
      v14 = *((_DWORD *)Sid + 23);
      if ( v14 )
      {
        if ( v14 != (v18.Length >> 1) + 1 )
          goto LABEL_29;
        memmove(v12, v18.Buffer, v18.Length);
        *(_WORD *)&v12[2 * *((unsigned int *)Sid + 23) - 2] = 0;
      }
      else
      {
        if ( v18.Length )
          v15 = (v18.Length >> 1) + 1;
        else
          v15 = 0;
        *((_DWORD *)Sid + 23) = v15;
      }
      if ( v17.Buffer )
        RtlFreeUnicodeString(&v17);
      if ( v18.Buffer )
        RtlFreeUnicodeString(&v18);
    }
    else
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( *((_DWORD *)Sid + 22) || *((_DWORD *)Sid + 23) )
        return -1073741811;
    }
    return 0;
  }
  return result;
}
