/*
 * XREFs of PnprLoadPluginDriver @ 0x14086F368
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x1407490E0 (MmUnloadSystemImage.c)
 *     PnprGetPluginDriverImagePath @ 0x14086EC54 (PnprGetPluginDriverImagePath.c)
 */

__int64 __fastcall PnprLoadPluginDriver(ULONG_PTR *a1, __int64 a2)
{
  int PluginDriverImagePath; // ebx
  int v5; // eax
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath < 0 )
    goto LABEL_26;
  v5 = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 2u, &BugCheckParameter2, &v17);
  v6 = BugCheckParameter2;
  PluginDriverImagePath = v5;
  if ( v5 >= 0 )
  {
    memset((void *)(a2 + 8), 0, 0x58uLL);
    *(_DWORD *)(a2 + 4) = 1;
    *(_DWORD *)a2 = 96;
    PluginDriverImagePath = (*(__int64 (__fastcall **)(__int64, _QWORD))(v6 + 56))(a2, 0LL);
    if ( PluginDriverImagePath >= 0 )
    {
      if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
      {
        *a1 = v6;
        PluginDriverImagePath = 0;
        goto LABEL_26;
      }
      v11 = PnprContext;
      PluginDriverImagePath = -1073741637;
      v12 = *(_DWORD *)(PnprContext + 20984);
      if ( !v12 )
        v12 = 4887;
      *(_DWORD *)(PnprContext + 20984) = v12;
      v13 = *(_DWORD *)(v11 + 20988);
      if ( !v13 )
        v13 = 9;
      *(_DWORD *)(v11 + 20988) = v13;
      goto LABEL_23;
    }
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 20984);
    if ( !v8 )
      v8 = 4871;
    v9 = 8;
  }
  else
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 20984);
    if ( !v8 )
      v8 = 4857;
    v9 = 10;
  }
  *(_DWORD *)(v7 + 20984) = v8;
  v10 = *(_DWORD *)(v7 + 20988);
  if ( !v10 )
    v10 = v9;
  *(_DWORD *)(v7 + 20988) = v10;
LABEL_23:
  if ( PluginDriverImagePath < 0 && v6 )
    MmUnloadSystemImage(v6);
LABEL_26:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
