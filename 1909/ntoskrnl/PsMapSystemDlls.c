/*
 * XREFs of PsMapSystemDlls @ 0x14067E8A4
 * Callers:
 *     MiMapProcessExecutable @ 0x14067F7A8 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspMapSystemDll @ 0x14067E6D8 (PspMapSystemDll.c)
 *     PsWow64GetProcessNtdllType @ 0x14067FF90 (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *BugCheckParameter1, int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // rdx
  _BYTE v10[48]; // [rsp+20h] [rbp-68h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = 0;
  if ( BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v10);
  }
  v6 = 0;
  v7 = (__int64 *)&PspSystemDlls;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7
      && (v6 <= 0
       || *(_WORD *)(v8 + 18)
       && BugCheckParameter1[1].ActiveProcessors.Bitmap[6]
       && v6 == (unsigned int)PsWow64GetProcessNtdllType(BugCheckParameter1)) )
    {
      v4 = PspMapSystemDll(BugCheckParameter1, v8, a2, 0);
      if ( v4 < 0 )
        break;
    }
    ++v6;
    ++v7;
    if ( v6 >= 6 )
      goto LABEL_9;
  }
  if ( v6 > 0 )
    v4 = -1073741405;
LABEL_9:
  if ( v5 )
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
  return (unsigned int)v4;
}
