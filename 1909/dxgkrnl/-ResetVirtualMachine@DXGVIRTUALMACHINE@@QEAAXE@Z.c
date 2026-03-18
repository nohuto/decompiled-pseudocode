/*
 * XREFs of ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C025F2E0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025DD68 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000AAAC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036FAC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00FA5F0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C021864C (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     UnmapGpadl @ 0x1C022B8C0 (UnmapGpadl.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025F0F8 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C025F8F8 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::ResetVirtualMachine(DXGVIRTUALMACHINE *this, char a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  struct DXGPROCESS *v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  if ( !*((_BYTE *)this + 249) )
  {
    DXGVIRTUALMACHINE::PauseVmBusChannels((struct _KTHREAD **)this);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 7) + 56LL), &ApcState);
    if ( a2 )
      DXGVIRTUALMACHINE::SetVailObject(this, 0LL);
    v4 = (_QWORD *)((char *)this + 24);
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( (_QWORD *)*v4 == v4 )
        break;
      v8 = 0LL;
      v6 = (struct DXGPROCESS *)(v5 - 56);
      if ( v6 )
        CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v8, v6);
      DXGPROCESS::DestroyDxgProcess(v6);
      CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v8);
    }
    KeUnstackDetachProcess(&ApcState);
    v7 = *((_DWORD *)this + 54);
    if ( v7 )
    {
      UnmapGpadl(*((_QWORD *)this + 7), v7, 4096LL);
      *((_DWORD *)this + 54) = 0;
      *((_QWORD *)this + 29) = 0LL;
      *((_QWORD *)this + 28) = 0LL;
    }
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((struct VMBCHANNEL__ **)this + 11);
    *(_WORD *)((char *)this + 249) = 257;
  }
}
