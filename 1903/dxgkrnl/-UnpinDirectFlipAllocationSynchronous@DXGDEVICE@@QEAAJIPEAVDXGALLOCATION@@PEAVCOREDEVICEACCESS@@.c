/*
 * XREFs of ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0230568
 * Callers:
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01501E0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00196F0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0150294 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocationSynchronous(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rbp
  struct DXGALLOCATION *v9; // r9
  char v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  if ( DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, a2, a3) )
  {
    v17 = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 688LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
            *((_QWORD *)a3 + 3),
            &v17);
    if ( a4 )
      COREDEVICEACCESS::Release(a4);
    if ( v10 )
    {
      if ( v17 <= 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                            + 8LL)
                                                                + 696LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                *((_QWORD *)a3 + 3),
                a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v15[3] = a3;
          v15[4] = *((_QWORD *)a3 + 3);
          v15[5] = v8;
          WdLogEvent5_WdWarning(v15);
        }
      }
    }
    DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, a2, a3, v9);
    if ( a4 )
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)a4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 232LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
      *((_QWORD *)a3 + 3));
  }
  return (unsigned int)v8;
}
