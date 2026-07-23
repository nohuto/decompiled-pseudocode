/*
 * XREFs of PsMapSystemDlls @ 0x140678D30
 * Callers:
 *     MiMapProcessExecutable @ 0x140678E08 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x140678B6C (PspMapSystemDll.c)
 *     PsWow64GetProcessNtdllType @ 0x1406795B4 (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // rdx
  _BYTE v10[48]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0LL, (__int64)v10);
  }
  v6 = 0;
  v7 = (__int64 *)&PspSystemDlls;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7
      && (v6 <= 0
       || *(_WORD *)(v8 + 18) && a1[1].ActiveProcessors.Bitmap[7] && v6 == (unsigned int)PsWow64GetProcessNtdllType(a1)) )
    {
      v4 = PspMapSystemDll(a1, v8, a2, 0);
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
    KiUnstackDetachProcess((__int64)v10, 0LL);
  return (unsigned int)v4;
}
