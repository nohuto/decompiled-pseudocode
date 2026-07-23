/*
 * XREFs of PnprLoadPluginDriver @ 0x140836518
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     PnprGetPluginDriverImagePath @ 0x140835E24 (PnprGetPluginDriverImagePath.c)
 */

__int64 __fastcall PnprLoadPluginDriver(ULONG_PTR *a1, _DWORD *a2)
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
  char *v17; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath < 0 )
    goto LABEL_26;
  v5 = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 2u, &BugCheckParameter2, &v17);
  v6 = BugCheckParameter2;
  PluginDriverImagePath = v5;
  if ( v5 >= 0 )
  {
    memset(a2, 0, 0x60uLL);
    a2[1] = 1;
    *a2 = 96;
    PluginDriverImagePath = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(v6 + 56))(a2, 0LL);
    if ( PluginDriverImagePath >= 0 )
    {
      if ( *a2 >= 0x40u && *((_QWORD *)a2 + 7) && *((_QWORD *)a2 + 3) && *((_QWORD *)a2 + 4) )
      {
        *a1 = v6;
        PluginDriverImagePath = 0;
        goto LABEL_26;
      }
      v11 = PnprContext;
      PluginDriverImagePath = -1073741637;
      v12 = *(_DWORD *)(PnprContext + 20984);
      if ( !v12 )
        v12 = 4891;
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
      v8 = 4875;
    v9 = 8;
  }
  else
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 20984);
    if ( !v8 )
      v8 = 4861;
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
