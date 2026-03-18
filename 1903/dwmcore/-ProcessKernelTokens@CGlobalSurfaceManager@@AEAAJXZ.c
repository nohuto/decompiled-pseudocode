/*
 * XREFs of ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800E2518
 * Callers:
 *     ?s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z @ 0x1800E2500 (-s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CED90 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800D0AF4 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ @ 0x1800D3CC4 (-ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessKernelTokens(struct _RTL_CRITICAL_SECTION *this)
{
  int v1; // ebx
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned __int64 SpinCount_low; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rsi
  HANDLE LockSemaphore; // [rsp+38h] [rbp-59h] BYREF
  void *lpMem; // [rsp+40h] [rbp-51h]
  __int64 v18; // [rsp+48h] [rbp-49h]
  _BYTE v19[128]; // [rsp+58h] [rbp-39h] BYREF

  v1 = 0;
  LockSemaphore = 0LL;
  v18 = 0LL;
  lpMem = v19;
  if ( !LOBYTE(this[8].SpinCount) )
  {
    do
    {
      ResetEvent(this[8].LockSemaphore);
      if ( LOBYTE(this[8].SpinCount) )
        break;
      CMmcssTask::Clone((CMmcssTask *)((char *)this[2].OwningThread + 160), (LPCWCH *)&this[9]);
      v3 = CGlobalSurfaceManager::EnsureAdapterInfo(this);
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x262u, 0LL);
      if ( v1 < 0 )
      {
        WaitForSingleObject(this[8].LockSemaphore, 0xFFFFFFFF);
      }
      else
      {
        SpinCount_low = LODWORD(this[12].SpinCount);
        LockSemaphore = this[8].LockSemaphore;
        LODWORD(v18) = SpinCount_low;
        if ( (unsigned int)SpinCount_low > 5 )
        {
          v14 = operator new(saturated_mul(SpinCount_low, 0x18uLL));
          if ( !v14 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x270u, 0LL);
            break;
          }
          if ( lpMem != v19 )
            operator delete(lpMem);
          LODWORD(SpinCount_low) = v18;
          lpMem = v14;
        }
        v6 = 0LL;
        if ( (_DWORD)SpinCount_low )
        {
          do
          {
            v7 = 3 * v6;
            v8 = lpMem;
            v9 = (unsigned int)v6;
            v6 = (unsigned int)(v6 + 1);
            v9 *= 2LL;
            *((_QWORD *)lpMem + v7) = *(_QWORD *)(*(_QWORD *)&this[12].LockCount + 8 * v9);
            v10 = *(_QWORD *)(*(_QWORD *)&this[12].LockCount + 8 * v9 + 8);
            v8[v7 + 2] = 0LL;
            v8[v7 + 1] = v10;
          }
          while ( (unsigned int)v6 < (unsigned int)v18 );
        }
        v11 = NtTokenManagerThread(&LockSemaphore);
        if ( v11 < 0 )
        {
          v1 = v11 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11 | 0x10000000, 0x28Bu, 0LL);
        }
        CGlobalSurfaceManager::ReleaseAdapterInfo((CGlobalSurfaceManager *)this);
      }
    }
    while ( !LOBYTE(this[8].SpinCount) );
    if ( lpMem != v19 )
      operator delete(lpMem);
  }
  return (unsigned int)v1;
}
