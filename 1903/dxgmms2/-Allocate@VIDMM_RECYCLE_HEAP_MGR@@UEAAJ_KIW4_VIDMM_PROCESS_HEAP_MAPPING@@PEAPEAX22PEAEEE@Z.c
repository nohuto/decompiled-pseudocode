/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C0067550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002218 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0067694 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068E48 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        void **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  char v13; // r8
  int v14; // ebx
  VIDMM_RECYCLE_HEAP *v15; // rcx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  VIDMM_RECYCLE_HEAP *v22; // rcx
  DXGFASTMUTEX *v23; // [rsp+40h] [rbp-48h] BYREF
  char v24; // [rsp+48h] [rbp-40h]
  char v25; // [rsp+90h] [rbp+8h]

  v23 = (DXGFASTMUTEX *)(a1 + 1328);
  v24 = 0;
  if ( a1 == -1328 )
  {
    v18 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v18 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v18);
    if ( v24 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
      v21[5] = &v23;
      v21[3] = 275LL;
      v21[4] = 4LL;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
  }
  DXGFASTMUTEX::Acquire(v23);
  v13 = 0;
  v14 = -1073741823;
  v25 = 0;
  v24 = 1;
  while ( 1 )
  {
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 736);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 808);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 880);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 952);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1024);
          break;
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1096);
          break;
        case 7:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1168);
          break;
        case 8:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1240);
          break;
        default:
          goto LABEL_10;
      }
    }
    else if ( a4 > 6 )
    {
      if ( a4 == 7 )
      {
        v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 448);
      }
      else
      {
        if ( a4 != 8 )
        {
          if ( a4 == 9 )
          {
            v22 = (VIDMM_RECYCLE_HEAP *)(a1 + 592);
          }
          else
          {
            if ( a4 != 10 )
              goto LABEL_10;
            v22 = (VIDMM_RECYCLE_HEAP *)(a1 + 664);
          }
          v16 = VIDMM_RECYCLE_HEAP::Allocate(v22, a2, a3, a5, a6, a7, a8, a9);
          goto LABEL_9;
        }
        v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 520);
      }
    }
    else
    {
      switch ( a4 )
      {
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 376);
          break;
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 16);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 88);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 160);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 232);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 304);
          break;
        default:
          goto LABEL_10;
      }
    }
    v16 = VIDMM_RECYCLE_HEAP::Allocate(v15, a2, a3, a5, a6, 0LL, a8, a9);
LABEL_9:
    v13 = v25;
    v14 = v16;
LABEL_10:
    if ( v14 >= 0 || v13 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)a1, 0, 0);
    v13 = 1;
    v25 = 1;
  }
  if ( v24 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v23);
  return (unsigned int)v14;
}
