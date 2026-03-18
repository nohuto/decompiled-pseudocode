/*
 * XREFs of ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00ABDF0
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C007C11C (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABF88 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C00146A4 (VidSchIsDeviceBusy.c)
 *     VidSchFlushDevice @ 0x1C007C1F0 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPendingAllocationAccess(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        struct VIDMM_ALLOC *a3,
        char a4)
{
  _QWORD **v5; // rdi
  _QWORD *v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r9
  _QWORD *i; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (_QWORD **)(a2 + 37);
  while ( 1 )
  {
    DXGFASTMUTEX::Acquire(a2[40]);
    v8 = *v5;
    v9 = 0LL;
    if ( *v5 != v5 )
    {
      do
      {
        v10 = v8 - 2;
        for ( i = (_QWORD *)*(v8 - 2); i != v10; i = (_QWORD *)*i )
        {
          if ( i - 5 != (_QWORD *)a3 )
          {
            v12 = *(i - 4);
            if ( !a4 || (v13 = *(_QWORD *)(v12 + 24)) != 0 && !*(_BYTE *)(*(_QWORD *)(v13 + 40) + 298LL) )
            {
              v9 = *(_QWORD *)(v12 + 32);
              if ( VidSchIsDeviceBusy(v9) )
                goto LABEL_13;
            }
          }
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v5 );
      v9 = 0LL;
    }
LABEL_13:
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
    if ( !v9 )
      break;
    v16[1] = 0LL;
    v16[0] = 5LL;
    VidSchFlushDevice(v9, (int *)v16, v14, v15);
  }
}
