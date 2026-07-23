/*
 * XREFs of SepExamineGlobalSaclEx @ 0x1402FFEB8
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 *     SepRmGlobalSaclFind @ 0x1408A4D18 (SepRmGlobalSaclFind.c)
 */

void __fastcall SepExamineGlobalSaclEx(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        char *a12,
        char *a13)
{
  char *v13; // rsi
  char v14; // bl
  char *v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rcx
  char v22; // al
  char v23[8]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v24; // [rsp+78h] [rbp-20h] BYREF

  v13 = a12;
  v14 = 0;
  v15 = a13;
  if ( a12 && !*a12 || a13 && !*a13 )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(&v24, 0LL, a1, 0LL) >= 0 )
    {
      v21 = *(_QWORD *)(v24 + 24);
      if ( v21 )
      {
        SepExamineSaclEx(v21, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, (__int64)&a12, (__int64)v23);
        if ( v13 )
        {
          if ( *v13 || (v22 = 0, (_BYTE)a12) )
            v22 = 1;
          *v13 = v22;
        }
        if ( v15 )
        {
          if ( *v15 || v23[0] )
            v14 = 1;
          *v15 = v14;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
