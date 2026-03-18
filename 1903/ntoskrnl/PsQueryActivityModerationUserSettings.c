/*
 * XREFs of PsQueryActivityModerationUserSettings @ 0x140307110
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsQueryActivityModerationUserSettings(_QWORD *a1)
{
  unsigned __int64 ExtensionTable; // rax
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(__int64 *))(ExtensionTable + 32))(&v5);
    if ( v3 >= 0 )
      *a1 = v5;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(PspBamExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
