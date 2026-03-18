/*
 * XREFs of MiIsExtentDangling @ 0x14088CA4C
 * Callers:
 *     FsRtlIsExtentDangling @ 0x14084F1D0 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall MiIsExtentDangling(unsigned __int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 i; // rcx
  struct _KTHREAD *v16; // rdi

  v3 = a3;
  v4 = a1 + a2;
  v5 = a2;
  v7 = a1;
  if ( a1 < v4 )
  {
    while ( !(unsigned int)MiIsPfn(v7) || (*v9 & 0x10000000000000LL) == 0 )
    {
      v7 = v8 + 1;
      if ( v7 >= v4 )
        goto LABEL_7;
    }
    v4 = v8;
    v5 = v8 - a1;
  }
LABEL_7:
  if ( (v3 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1404648A8, 0LL);
    v11 = (_QWORD *)qword_1404648A0;
    if ( qword_1404648A0 )
    {
      do
      {
        v12 = v11[4];
        if ( v5 + a1 <= v12 )
        {
          v11 = (_QWORD *)*v11;
        }
        else
        {
          if ( a1 < v11[5] + v12 )
            break;
          v11 = (_QWORD *)v11[1];
        }
      }
      while ( v11 );
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = (_QWORD *)*v11;
          v14 = v11;
          if ( *v11 )
          {
            for ( ; v13[1]; v13 = (_QWORD *)v13[1] )
              ;
          }
          else
          {
            for ( i = v11[2]; ; i = v13[2] )
            {
              v13 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v13 || (_QWORD *)v13[1] == v14 )
                break;
              v14 = v13;
            }
          }
          if ( !v13 || v13[4] + v13[5] <= a1 )
            break;
          v11 = v13;
        }
        v4 = v11[4];
        if ( a1 >= v4 )
          v4 = a1;
      }
    }
    v16 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1404648A8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1404648A8);
    KeAbPostRelease((ULONG_PTR)&qword_1404648A8);
    KiLeaveGuardedRegionUnsafe((__int64)v16);
  }
  return v4;
}
