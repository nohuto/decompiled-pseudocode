/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C6D2C
 * Callers:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01C7418 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  char *v2; // r15
  __int64 v3; // r12
  char *i; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 120;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      v5 = *((_QWORD *)i + 81);
      v6 = *((_QWORD *)this + 69);
      v7 = *((_QWORD *)this + 68);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14, Current);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 864LL))(v6, v5);
      v10 = v14;
      v11 = v9;
      if ( v14 )
      {
        v12 = v14 + 144;
        *(_QWORD *)(v14 + 152) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v11 < 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v13 + 24) = 3078LL;
        WdLogEvent5_WdAssertion(v13);
      }
    }
    v2 = (char *)this + 136;
    --v3;
  }
  while ( v3 );
}
