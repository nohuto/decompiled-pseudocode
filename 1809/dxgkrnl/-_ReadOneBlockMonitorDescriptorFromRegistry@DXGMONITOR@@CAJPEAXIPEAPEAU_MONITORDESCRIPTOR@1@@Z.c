/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C0295218
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296054 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0002B74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        unsigned int a2,
        struct DXGMONITOR::_MONITORDESCRIPTOR **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  char *v12; // rbx
  ULONG Length; // esi
  __int64 v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  WCHAR SourceString; // [rsp+48h] [rbp-40h] BYREF

  v3 = a2;
  if ( !KeyHandle )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(KeyHandle);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0LL;
  v8 = RtlStringCbPrintfW(&SourceString, 8uLL, L"%d", (unsigned int)v3);
  v10 = v8;
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, &SourceString);
    v12 = 0LL;
    Length = 1024;
    do
    {
      if ( v12 )
        operator delete[](v12);
      v12 = (char *)operator new(Length, 0x4D677844u, PagedPool);
      if ( v12 )
      {
        ResultLength = 0;
        v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
        Length = ResultLength;
        LODWORD(v10) = v15;
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v14);
        WdLogEvent5_WdError(v20);
        LODWORD(v10) = -1073741801;
      }
    }
    while ( (_DWORD)v10 == -2147483643 || (_DWORD)v10 == -1073741789 );
    if ( (int)v10 >= 0 )
    {
      if ( *((_DWORD *)v12 + 1) == 3 && *((_DWORD *)v12 + 2) == 128 )
      {
        v22 = (char *)operator new(0x9FuLL, 0x4D677844u, PagedPool);
        if ( v22 )
        {
          *(_OWORD *)(v22 + 24) = *(_OWORD *)(v12 + 12);
          *(_OWORD *)(v22 + 40) = *(_OWORD *)(v12 + 28);
          *(_OWORD *)(v22 + 56) = *(_OWORD *)(v12 + 44);
          *(_OWORD *)(v22 + 72) = *(_OWORD *)(v12 + 60);
          *(_OWORD *)(v22 + 88) = *(_OWORD *)(v12 + 76);
          *(_OWORD *)(v22 + 104) = *(_OWORD *)(v12 + 92);
          *(_OWORD *)(v22 + 120) = *(_OWORD *)(v12 + 108);
          *(_OWORD *)(v22 + 136) = *(_OWORD *)(v12 + 124);
          *((_QWORD *)v22 + 2) = *((unsigned int *)v12 + 2);
          *((_DWORD *)v22 + 2) = 3;
          *((_DWORD *)v22 + 3) = (_DWORD)v3 != 0 ? 255 : 1;
          LODWORD(v10) = 0;
          *a3 = (struct DXGMONITOR::_MONITORDESCRIPTOR *)v22;
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(0LL);
          WdLogEvent5_WdError(v23);
          LODWORD(v10) = -1073741801;
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v24 + 24) = v3;
        WdLogEvent5_WdWarning(v24);
        LODWORD(v10) = -1071841279;
      }
    }
    else
    {
      if ( v12 )
        operator delete[](v12);
      v12 = 0LL;
      v21 = WdLogNewEntry5_WdDmmEvent(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = (int)v10;
      WdLogEvent5_WdDmmEvent(v21);
    }
    if ( v12 )
      operator delete[](v12);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
