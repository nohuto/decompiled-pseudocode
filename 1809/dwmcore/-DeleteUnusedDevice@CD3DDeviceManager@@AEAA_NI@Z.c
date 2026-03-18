/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008A1D4 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18009750C (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800E8F90 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  int v2; // r8d
  __int64 *v3; // r10
  char v4; // bp
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  CSurfaceManager *v17; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 38);
  v3 = (__int64 *)((char *)this + 128);
  v4 = 0;
  v7 = 3LL * a2;
  v8 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL * a2);
  if ( !*(_DWORD *)(v8 + 504)
    && (*(int *)(v8 + 848) < 0
     || !*(_DWORD *)(*(_QWORD *)(v8 + 200) + 16LL)
     && !*(_DWORD *)(v8 + 936)
     && GetCurrentFrameId() >= *(_QWORD *)(v8 + 1000)) )
  {
    v10 = *((_DWORD *)this + 52);
    v11 = (unsigned int)(v2 - 1);
    v12 = *v3;
    v4 = 1;
    if ( a2 >= v10 )
    {
      *(_OWORD *)(v12 + 8 * v7) = *(_OWORD *)(v12 + 24 * v11);
      *(_QWORD *)(v12 + 8 * v7 + 16) = *(_QWORD *)(v12 + 24 * v11 + 16);
    }
    else
    {
      v13 = v10 - 1;
      *((_DWORD *)this + 52) = v13;
      *(_OWORD *)(v12 + 8 * v7) = *(_OWORD *)(v12 + 24 * v13);
      *(_QWORD *)(v12 + 8 * v7 + 16) = *(_QWORD *)(v12 + 24 * v13 + 16);
      v14 = *v3;
      v15 = 3LL * *((unsigned int *)this + 52);
      *(_OWORD *)(v14 + 8 * v15) = *(_OWORD *)(*v3 + 24 * v11);
      *(_QWORD *)(v14 + 8 * v15 + 16) = *(_QWORD *)(v14 + 24 * v11 + 16);
    }
    *((_DWORD *)this + 38) = v11;
    if ( !(_DWORD)v11 )
      DynArrayImpl<0>::ShrinkToSize(v3, 24LL);
    v16 = *(_QWORD *)(v8 + 632);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(v8 + 632));
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v8, 1u);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16) )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v17 = (CSurfaceManager *)*((_QWORD *)this + 8);
    if ( v17 )
      CSurfaceManager::ResetTokenThread(v17);
  }
  return v4;
}
