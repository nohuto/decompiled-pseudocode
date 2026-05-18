/*
 * XREFs of ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001CF4
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x180003390 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800038E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800059F6 (memset_0.c)
 */

__int64 UnmapDwmVirtualAccount(void)
{
  unsigned int v0; // ebx
  int v1; // eax
  void *v3; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v5; // [rsp+40h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  memset_0(&DestinationString, 0, 0x30uLL);
  Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v5, &gwszDwmAccountName);
  v1 = LsaLookupManageSidNameMapping(1LL, &DestinationString, &Buffer);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180008014, 1u, v1 | 0x10000000, 0x27Cu, v3);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  return v0;
}
