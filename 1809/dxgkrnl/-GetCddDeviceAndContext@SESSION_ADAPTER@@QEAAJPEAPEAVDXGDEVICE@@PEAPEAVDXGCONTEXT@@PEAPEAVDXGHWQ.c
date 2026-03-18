/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00CEE64
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01399A0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4)
{
  unsigned int CddDevice; // r12d
  __int64 v9; // r15
  __int64 v10; // rbp
  struct DXGDEVICE *v11; // rax
  volatile signed __int64 **v13; // rax
  volatile signed __int64 *v14; // rax
  struct DXGHWQUEUE **v15; // rax
  struct DXGHWQUEUE *v16; // rdx
  unsigned __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  DXGADAPTER *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0LL;
  CddDevice = 0;
  DxgkpGetPairingAdapters(this[2], 0, &v18, &v17, 0LL, 0LL);
  if ( !v18 )
    return 3221225473LL;
  v9 = *((_QWORD *)*this + 2329);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 184, 0LL);
  *(_QWORD *)(v9 + 192) = KeGetCurrentThread();
  v10 = *((_QWORD *)v18 + 316);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
  *(_QWORD *)(v10 + 48) = KeGetCurrentThread();
  v11 = this[7];
  if ( v11 )
  {
    if ( a2 )
    {
      *a2 = v11;
      _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
    }
    if ( a3 )
    {
      v13 = (volatile signed __int64 **)(this + 8);
      if ( *((_DWORD *)this + 13) != 1 )
        v13 = (volatile signed __int64 **)*v13;
      v14 = *v13;
      *a3 = (struct DXGCONTEXT *)v14;
      _InterlockedIncrement64(v14 + 4);
    }
    if ( a4 )
    {
      v15 = (struct DXGHWQUEUE **)this[9];
      v16 = *v15;
      *a4 = *v15;
      if ( v16 )
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 9);
    }
  }
  else
  {
    CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v18, a2, a3, a4);
  }
  DXGADAPTER::ReleaseReference(v18);
  *(_QWORD *)(v10 + 48) = 0LL;
  ExReleasePushLockExclusiveEx(v10 + 40, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v9 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 184, 0LL);
  KeLeaveCriticalRegion();
  return CddDevice;
}
