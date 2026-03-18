/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C00DF13C
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00040EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014A0E0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        char a5)
{
  __int64 v9; // rdi
  struct DXGADAPTER *v10; // rdi
  struct DXGADAPTER **v11; // rax
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rax
  __int64 v16; // r14
  int CddDevice; // edi
  struct DXGDEVICE *v18; // rax
  volatile signed __int64 **v20; // rax
  volatile signed __int64 *v21; // rax
  struct DXGHWQUEUE **v22; // rax
  struct DXGHWQUEUE *v23; // rcx
  struct DXGADAPTER *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  struct DXGADAPTER **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  struct DXGADAPTER *v37; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-18h] BYREF
  DXGADAPTER *v39; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-8h] BYREF
  __int64 v41; // [rsp+90h] [rbp+30h]

  v9 = *((_QWORD *)*this + 2329) + 160LL;
  v41 = v9;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
  v10 = 0LL;
  while ( 1 )
  {
    v37 = 0LL;
    v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v37);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0, v11, &v38, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v15 = v37;
    if ( !v37 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v28 + 24) = 2142LL;
      WdLogEvent5_WdAssertion(v28);
      v15 = v37;
    }
    if ( v10 == v15 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      CddDevice = -1073741275;
      v36[3] = v37;
      v36[4] = this[2];
      v36[5] = -1073741275LL;
      WdLogEvent5_WdAssertion(v36);
      goto LABEL_12;
    }
    v16 = *((_QWORD *)v15 + 320);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16 + 40, 0LL);
    CddDevice = 0;
    *(_QWORD *)(v16 + 48) = KeGetCurrentThread();
    v18 = this[7];
    if ( v18 )
    {
      if ( a2 )
      {
        *a2 = v18;
        _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
      }
      if ( a3 )
      {
        v20 = (volatile signed __int64 **)(this + 8);
        if ( *((_DWORD *)this + 13) != 1 )
          v20 = (volatile signed __int64 **)*v20;
        v21 = *v20;
        *a3 = (struct DXGCONTEXT *)v21;
        _InterlockedIncrement64(v21 + 4);
      }
      if ( a4 )
      {
        v22 = (struct DXGHWQUEUE **)this[9];
        v23 = *v22;
        *a4 = *v22;
        if ( v23 )
          _InterlockedIncrement64((volatile signed __int64 *)v23 + 9);
      }
      goto LABEL_11;
    }
    v24 = v37;
    if ( v37 != this[2] )
    {
      v39 = 0LL;
      v29 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v39);
      CddDevice = DxgkpGetPairingAdapters(this[2], 0, v29, &v40, 0LL, 0LL, a5);
      if ( CddDevice < 0 )
      {
        DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
        goto LABEL_11;
      }
      v10 = v37;
      if ( v37 != v39 )
      {
        v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = v37;
        WdLogEvent5_WdWarning(v33);
        DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
        goto LABEL_25;
      }
      DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
      v24 = v37;
    }
    CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v24, a2, a3, a4);
    if ( CddDevice != -1073741267 )
      goto LABEL_11;
    if ( !a5 )
    {
      v35 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      CddDevice = -1073741130;
      *(_QWORD *)(v35 + 24) = v37;
      *(_QWORD *)(v35 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v35);
LABEL_11:
      *(_QWORD *)(v16 + 48) = 0LL;
      ExReleasePushLockExclusiveEx(v16 + 40, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
    v10 = v37;
    v34 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v34 + 24) = v37;
    WdLogEvent5_WdWarning(v34);
LABEL_25:
    *(_QWORD *)(v16 + 48) = 0LL;
    ExReleasePushLockExclusiveEx(v16 + 40, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v37, 0LL);
  }
  CddDevice = PairingAdapters;
LABEL_12:
  DXGADAPTER_REFERENCE::Assign(&v37, 0LL);
  *(_QWORD *)(v41 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v41, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)CddDevice;
}
