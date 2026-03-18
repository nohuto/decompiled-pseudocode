/*
 * XREFs of ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01FB534
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1C01FBE90 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C00ECB28 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall FindMirrorDriver(PCWSTR SourceString, struct _DISPLAY_DEVICEW *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r14d
  char v5; // si
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // r8
  signed __int64 v13; // r9
  __int16 v14; // ax
  char *v15; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[133]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v28[6]; // [rsp+1CAh] [rbp+CAh] BYREF
  _BYTE v29[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  a2->cb = 840;
  if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96LL) + 232LL), 0LL, a2, 0, 0) >= 0 )
  {
    do
    {
      ++v4;
      if ( (a2->StateFlags & 8) == 0 || RtlStringCchCopyNW(pszDest, 0x85uLL, a2->DeviceKey, 0x80uLL) < 0 )
        continue;
      v6 = -1LL;
      while ( pszDest[++v6] != 0 )
        ;
      v8 = (unsigned __int64)&DestinationString.Buffer + 2 * v6 + 6;
      if ( v8 <= (unsigned __int64)pszDest )
      {
LABEL_9:
        if ( *(_WORD *)v8 != 92 )
          continue;
      }
      else
      {
        while ( *(_WORD *)v8 != 92 )
        {
          v8 -= 2LL;
          if ( v8 <= (unsigned __int64)pszDest )
            goto LABEL_9;
        }
      }
      QueryTable.QueryRoutine = 0LL;
      QueryTable.EntryContext = &String1;
      v9 = (char *)(v8 + 2);
      QueryTable.Flags = 288;
      QueryTable.Name = L"Service";
      v10 = (__int64)&v28[-v8 - 2] >> 1;
      v11 = 0;
      QueryTable.DefaultType = 16777217;
      QueryTable.DefaultData = 0LL;
      QueryTable.DefaultLength = 0;
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
      if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
        v11 = -1073741811;
      v22 = 0LL;
      v23 = 0;
      v24 = 0LL;
      v25 = 0;
      if ( v11 < 0 )
      {
        if ( v10 )
          *(_WORD *)v9 = 0;
      }
      else
      {
        if ( v10 )
        {
          v12 = 2147483646 - v10;
          v13 = (char *)L"Video" - v9;
          do
          {
            if ( !(v12 + v10) )
              break;
            v14 = *(_WORD *)&v9[v13];
            if ( !v14 )
              break;
            *(_WORD *)v9 = v14;
            v9 += 2;
            --v10;
          }
          while ( v10 );
        }
        v15 = v9 - 2;
        v11 = -2147483643;
        if ( v10 )
        {
          v15 = v9;
          v11 = 0;
        }
        *(_WORD *)v15 = 0;
      }
      if ( v11 >= 0 )
      {
        memset(v29, 0, sizeof(v29));
        *(_DWORD *)&String1.Length = 0x1000000;
        String1.Buffer = (PWSTR)v29;
        if ( RtlQueryRegistryValues(0, pszDest, &QueryTable, 0LL, 0LL) >= 0
          && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
        {
          v5 = 1;
          break;
        }
      }
    }
    while ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96LL) + 232LL), v4, a2, 0, 0) >= 0 );
  }
  if ( !v5 )
    return (unsigned int)-1073741823;
  return v3;
}
