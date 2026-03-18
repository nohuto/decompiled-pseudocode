/*
 * XREFs of ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E07EC
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0678 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::AddDevice(DXGPROCESS *this, struct DXGDEVICE *a2)
{
  int v3; // eax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax

  v3 = *((_DWORD *)a2 + 82);
  if ( *((_BYTE *)this + 296) )
  {
    if ( v3 == 2 )
      goto LABEL_3;
  }
  else if ( v3 != 2 )
  {
    goto LABEL_3;
  }
  v8 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v8 + 24) = 5526LL;
  WdLogEvent5_WdAssertion(v8);
LABEL_3:
  v5 = (_QWORD *)((char *)this + 248);
  v6 = *((_QWORD *)this + 31);
  v7 = (_QWORD *)((char *)a2 + 24);
  if ( *(DXGPROCESS **)(v6 + 8) != (DXGPROCESS *)((char *)this + 248) )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)a2 + 4) = v5;
  *(_QWORD *)(v6 + 8) = v7;
  *v5 = v7;
  *((_BYTE *)this + 264) = 1;
}
