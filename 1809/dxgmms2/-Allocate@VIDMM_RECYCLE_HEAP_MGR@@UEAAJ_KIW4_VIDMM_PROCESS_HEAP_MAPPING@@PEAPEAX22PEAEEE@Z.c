/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C005BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00013D8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001448 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005B918 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C005BD7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
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
  VIDMM_RECYCLE_HEAP *v19; // rcx
  char *v20; // [rsp+40h] [rbp-48h] BYREF
  char v21; // [rsp+48h] [rbp-40h]
  char v22; // [rsp+90h] [rbp+8h]

  v21 = 0;
  v20 = (char *)a1 + 1328;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v18 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v13 = 0;
  v14 = -1073741823;
  while ( 1 )
  {
    v22 = v13;
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 736);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 808);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 880);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 952);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1024);
          break;
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1096);
          break;
        case 7:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1168);
          break;
        case 8:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1240);
          break;
        default:
          goto LABEL_11;
      }
    }
    else if ( a4 > 6 )
    {
      if ( a4 == 7 )
      {
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 448);
      }
      else
      {
        if ( a4 != 8 )
        {
          if ( a4 == 9 )
          {
            v19 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 592);
          }
          else
          {
            if ( a4 != 10 )
              goto LABEL_11;
            v19 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 664);
          }
          v16 = VIDMM_RECYCLE_HEAP::Allocate(v19, a2, a3, a5, a6, a7, a8, a9);
          goto LABEL_10;
        }
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 520);
      }
    }
    else
    {
      switch ( a4 )
      {
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 376);
          break;
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 16);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 88);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 160);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 232);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 304);
          break;
        default:
          goto LABEL_11;
      }
    }
    v16 = VIDMM_RECYCLE_HEAP::Allocate(v15, a2, a3, a5, a6, 0LL, a8, a9);
LABEL_10:
    v13 = v22;
    v14 = v16;
LABEL_11:
    if ( v14 >= 0 || v13 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    v13 = 1;
  }
  if ( v21 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v20);
  return (unsigned int)v14;
}
