/*
 * XREFs of ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C02127FC
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1C0213260 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E0380 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall FindMirrorDriver(PCWSTR SourceString, struct _DISPLAY_DEVICEW *a2)
{
  char v3; // bl
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned __int64 i; // rax
  char *v7; // rdx
  signed int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r8
  signed __int64 v11; // r9
  __int16 v12; // ax
  char *v13; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  _BYTE v25[2]; // [rsp+BEh] [rbp-42h] BYREF
  WCHAR Path[133]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v27[6]; // [rsp+1CAh] [rbp+CAh] BYREF
  _BYTE v28[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  *(_QWORD *)&String1.Length = 0LL;
  v3 = 0;
  String1.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  a2->cb = 840;
  if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96LL) + 232LL), 0LL, a2, 0, 0) >= 0 )
  {
    while ( 1 )
    {
      ++v4;
      if ( (a2->StateFlags & 8) != 0
        && (int)RtlStringCchCopyNW((char *)Path, 133LL, (char *)a2->DeviceKey, 0x80uLL) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Path[v5] );
        for ( i = (unsigned __int64)&v25[2 * v5]; i > (unsigned __int64)Path; i -= 2LL )
        {
          if ( *(_WORD *)i == 92 )
            goto LABEL_11;
        }
        if ( *(_WORD *)i != 92 )
          goto LABEL_27;
LABEL_11:
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Name = L"Service";
        v7 = (char *)(i + 2);
        QueryTable.Flags = 288;
        QueryTable.EntryContext = &String1;
        v8 = 0;
        QueryTable.DefaultType = 16777217;
        QueryTable.DefaultData = 0LL;
        v9 = (__int64)&v27[-i - 2] >> 1;
        QueryTable.DefaultLength = 0;
        v18 = 0LL;
        v19 = 0;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0;
        if ( (unsigned __int64)(v9 - 1) > 0x7FFFFFFE )
          v8 = -1073741811;
        v23 = 0LL;
        v24 = 0;
        if ( v8 < 0 )
        {
          if ( v9 )
            *(_WORD *)v7 = 0;
        }
        else
        {
          if ( v9 )
          {
            v10 = 2147483646 - v9;
            v11 = (char *)L"Video" - v7;
            do
            {
              if ( !(v10 + v9) )
                break;
              v12 = *(_WORD *)&v7[v11];
              if ( !v12 )
                break;
              *(_WORD *)v7 = v12;
              v7 += 2;
              --v9;
            }
            while ( v9 );
          }
          v13 = v7 - 2;
          if ( v9 )
            v13 = v7;
          v8 = v9 == 0 ? 0x80000005 : 0;
          *(_WORD *)v13 = 0;
        }
        if ( v8 >= 0 )
        {
          memset(v28, 0, sizeof(v28));
          *(_DWORD *)&String1.Length = 0x1000000;
          String1.Buffer = (PWSTR)v28;
          if ( RtlQueryRegistryValues(0, Path, &QueryTable, 0LL, 0LL) >= 0
            && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
          {
            break;
          }
        }
      }
LABEL_27:
      if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96LL) + 232LL), v4, a2, 0, 0) < 0 )
        return v3 == 0 ? 0xC0000001 : 0;
    }
    v3 = 1;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
