/*
 * XREFs of PoEnergyContextStart @ 0x140687234
 * Callers:
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     PopEtInit @ 0x140A1BBB4 (PopEtInit.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopEtGetProcessAppId @ 0x14068696C (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbp
  char v3; // si
  struct _EX_RUNDOWN_REF *v4; // rbx
  int ProcessAppId; // edi
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(BugCheckParameter1 + 1896);
  v3 = 0;
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 768);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v7);
      v3 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId((struct _KPROCESS *)BugCheckParameter1, (__int64 *)(v2 + 448));
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v3 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
