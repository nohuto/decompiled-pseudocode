/*
 * XREFs of ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C020E614
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01220C4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F49C4 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(DXGVIRTUALGPUMANAGER *this, struct DXGDEVICE *a2)
{
  DXGPUSHLOCK *v3; // rcx
  DXGVIRTUALGPUMANAGER *v5; // rdi
  struct DXGDEVICE **v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v9 = 0;
  v3 = (DXGVIRTUALGPUMANAGER *)((char *)this + 40);
  v8 = v3;
  if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v3);
    v9 = 2;
  }
  v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 8);
  while ( v5 != (DXGVIRTUALGPUMANAGER *)((char *)this + 64) )
  {
    v6 = (struct DXGDEVICE **)((char *)v5 - 112);
    v5 = *(DXGVIRTUALGPUMANAGER **)v5;
    if ( a2 )
    {
      if ( v6[20] == a2 )
        (*((void (__fastcall **)(struct DXGDEVICE **))*v6 + 18))(v6);
    }
    else
    {
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER *, struct DXGDEVICE **))(*(_QWORD *)this + 24LL))(this, v6);
    }
  }
  if ( !a2 )
  {
    operator delete[](*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
