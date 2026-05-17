/*
 * XREFs of sub_1800D5848 @ 0x1800D5848
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     sub_180055FD0 @ 0x180055FD0 (sub_180055FD0.c)
 *     sub_180079ED0 @ 0x180079ED0 (sub_180079ED0.c)
 *     LdrLockLoaderLock @ 0x18007BF50 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007CC60 (LdrUnlockLoaderLock.c)
 *     sub_180081240 @ 0x180081240 (sub_180081240.c)
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1800891A4 @ 0x1800891A4 (sub_1800891A4.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     DbgPrompt @ 0x1800DFB10 (DbgPrompt.c)
 */

__int64 __fastcall sub_1800D5848(const void **a1, const char *a2)
{
  char v3; // al
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = dword_18015FAB0;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      563,
      (unsigned int)"LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v3 = dword_18015FAB0;
  }
  if ( (v3 & 0x10) != 0 )
    __debugbreak();
  if ( (v3 & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &v9, 2LL);
      if ( v9 > 98 )
      {
        v5 = v9 - 105;
        v4 = v9 == 105;
      }
      else
      {
        if ( v9 == 98 || v9 == 66 )
          goto LABEL_17;
        v5 = v9 - 73;
        v4 = v9 == 73;
      }
      if ( v4 )
        return 1LL;
      v6 = v5 - 6;
      if ( !v6 )
      {
LABEL_17:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          sub_1800891A4(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &xmmword_18012C120);
          ZwTerminateThread();
        }
      }
      else
      {
        sub_1800891A4(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &xmmword_18012C200);
        ZwTerminateProcess();
      }
    }
  }
  return 1LL;
}
