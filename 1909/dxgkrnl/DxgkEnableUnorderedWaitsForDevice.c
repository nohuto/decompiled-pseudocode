/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C0232EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct DXGDEVICE *v20; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v23[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  char v25; // [rsp+40h] [rbp-10h]
  struct DXGDEVICE *v26; // [rsp+80h] [rbp+30h] BYREF
  struct DXGDEVICE *v27; // [rsp+88h] [rbp+38h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v3, Current, &v26);
    v13 = v26;
    if ( v26 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22, v26);
      v15 = *((_QWORD *)v13 + 2);
      v25 = 0;
      v24 = *(_QWORD *)(v15 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      if ( *((_DWORD *)v13 + 116) == 1 )
      {
        v20 = v26;
        *((_BYTE *)v26 + 1747) = v2;
        if ( !v2 && *((_QWORD *)v20 + 82) )
          (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 520LL) + 8LL) + 856LL))();
        v9 = 0;
      }
      else
      {
        v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        v9 = -1073741130;
        *(_QWORD *)(v19 + 24) = v3;
        *(_QWORD *)(v19 + 32) = -1073741130LL;
        WdLogEvent5_WdWarning(v19);
      }
      if ( v25 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      if ( v22[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v11, v10, v12);
      v9 = -1073741811;
      *(_QWORD *)(v14 + 24) = v3;
      *(_QWORD *)(v14 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v14);
    }
    if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5, v7);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  return v9;
}
