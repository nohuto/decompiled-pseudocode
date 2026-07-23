/*
 * XREFs of PfSnIsHostingApplication @ 0x140668EAC
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     wcsstr @ 0x140197A90 (wcsstr.c)
 */

char __fastcall PfSnIsHostingApplication(wchar_t *SubStr)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bp
  const wchar_t *v6; // rcx
  wchar_t *v7; // rbx
  wchar_t *v8; // rax
  wchar_t *v10; // rdx

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( SubStr[v3] );
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_14043D138, 0LL);
  do
    ++v1;
  while ( Str[v1] );
  v6 = Str;
  v7 = (wchar_t *)&PfGlobals + v1 + 120;
  while ( 1 )
  {
    v8 = wcsstr(v6, SubStr);
    if ( !v8 || v8 < Str || v8 >= v7 )
      break;
    if ( v8 == Str || *(v8 - 1) == 44 )
    {
      v10 = &v8[(unsigned int)v3];
      if ( v10 == v7 || *v10 == 44 )
      {
        v5 = 1;
        break;
      }
    }
    v6 = v8 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_14043D138, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_14043D138);
  KeAbPostRelease((ULONG_PTR)qword_14043D138);
  KeLeaveCriticalRegion();
  return v5;
}
