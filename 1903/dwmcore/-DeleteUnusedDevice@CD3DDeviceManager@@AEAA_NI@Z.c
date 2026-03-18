/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180058A18
 * Callers:
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x180024EF8 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180024240 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180043B90 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  int v2; // r9d
  __int64 *v3; // r8
  char v4; // bp
  __int64 v6; // r10
  __int64 v7; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 38);
  v3 = (__int64 *)((char *)this + 128);
  v4 = 0;
  v6 = 3LL * a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL * a2);
  if ( !*(_DWORD *)(v7 + 504)
    && (*(int *)(v7 + 880) < 0
     || !*(_DWORD *)(*(_QWORD *)(v7 + 200) + 16LL)
     && !*(_DWORD *)(v7 + 968)
     && GetCurrentFrameId() >= *(_QWORD *)(v7 + 1136)) )
  {
    v9 = *((_DWORD *)this + 52);
    v10 = (unsigned int)(v2 - 1);
    v4 = 1;
    if ( a2 >= v9 )
    {
      v18 = *v3;
      *(_OWORD *)(v18 + 8 * v6) = *(_OWORD *)(*v3 + 24 * v10);
      *(_QWORD *)(v18 + 8 * v6 + 16) = *(_QWORD *)(v18 + 24 * v10 + 16);
    }
    else
    {
      v11 = v9 - 1;
      *((_DWORD *)this + 52) = v11;
      v12 = *v3;
      *(_OWORD *)(v12 + 8 * v6) = *(_OWORD *)(*v3 + 24 * v11);
      *(_QWORD *)(v12 + 8 * v6 + 16) = *(_QWORD *)(v12 + 24 * v11 + 16);
      v13 = *v3;
      v14 = 3LL * *((unsigned int *)this + 52);
      *(_OWORD *)(v13 + 8 * v14) = *(_OWORD *)(*v3 + 24 * v10);
      *(_QWORD *)(v13 + 8 * v14 + 16) = *(_QWORD *)(v13 + 24 * v10 + 16);
    }
    *((_DWORD *)this + 38) = v10;
    if ( !(_DWORD)v10 )
      DynArrayImpl<0>::ShrinkToSize(v3, 24LL);
    v15 = *(_QWORD *)(v7 + 632);
    if ( v15 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(v7 + 632));
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v7, 1);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15) )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, v16);
    v17 = *((_QWORD *)this + 8);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
  }
  return v4;
}
