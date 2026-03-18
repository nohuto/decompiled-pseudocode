/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C026A054
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F02B0 (DxgkOpenResourceFromNtHandle.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0268F14 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C026A384 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C026A504 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0273E44 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0024A64 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043328 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FFDD0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4, bool a5)
{
  SIZE_T v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // edx
  _BYTE v39[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v40[32]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v39, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v20 = *((_DWORD *)this + 36);
  if ( v20 )
  {
    if ( v20 == (_DWORD)v5 )
      goto LABEL_22;
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v27[3] = this;
    v27[4] = v5;
    v27[5] = *((unsigned int *)this + 36);
    v27[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v27);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v27[3] = this;
    v27[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v21 + 24) = 3583LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v25 = operator new[](v5, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 17) = v25;
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23, v22, v24, 0LL);
    v26[3] = this;
    v26[4] = v5;
    v26[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
    return 3221225495LL;
  }
  *((_DWORD *)this + 36) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v25, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
  DXGKEYEDMUTEX::AcquireReference(this, v28);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v40,
    (struct _KTHREAD **)Current);
  v29 = (_QWORD *)((char *)Current + 208);
  v30 = HMGRTABLE::AllocHandle((unsigned int *)Current + 52, (__int64)this, 9, 0, 0);
  v34 = v30;
  *a2 = v30;
  if ( !v30 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v32, v31, 0LL, v33);
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    DXGKEYEDMUTEX::ReleaseReference(this, v36);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
    return 3221225495LL;
  }
  if ( a5 )
  {
    v37 = (v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v37 < *((_DWORD *)Current + 56) )
    {
      v38 = *(_DWORD *)(*v29 + 16 * v37 + 8);
      if ( ((v34 >> 25) & 0x60) == (*(_BYTE *)(*v29 + 16 * v37 + 8) & 0x60) && (v38 & 0x2000) == 0 && (v38 & 0x1F) != 0 )
        *(_DWORD *)(*v29 + 16 * (((unsigned __int64)v34 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
  return 0LL;
}
