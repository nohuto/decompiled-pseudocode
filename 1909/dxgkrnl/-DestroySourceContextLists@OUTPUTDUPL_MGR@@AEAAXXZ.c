/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0271FEC
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C02710FC (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0274EDC (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00012FC (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C001B678 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00460E4 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this)
{
  void *v2; // rcx
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rdi
  AUTOEXPANDALLOCATION *v6; // rcx
  DXGFASTMUTEX *v7; // rcx
  OUTPUTDUPL_CONTEXT **v8; // rcx
  __int64 i; // r14

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      do
      {
        v4 = *((_QWORD *)this + 2);
        v5 = 32LL * v3;
        v6 = *(AUTOEXPANDALLOCATION **)(v5 + v4 + 16);
        if ( v6 )
        {
          AUTOEXPANDALLOCATION::`scalar deleting destructor'(v6);
          *(_QWORD *)(v5 + v4 + 16) = 0LL;
        }
        v7 = *(DXGFASTMUTEX **)(v5 + v4);
        if ( v7 )
        {
          DXGFASTMUTEX::`scalar deleting destructor'(v7);
          *(_QWORD *)(v5 + v4) = 0LL;
        }
        v8 = *(OUTPUTDUPL_CONTEXT ***)(v5 + v4 + 8);
        if ( v8 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
          {
            v8 = *(OUTPUTDUPL_CONTEXT ***)(v5 + v4 + 8);
            if ( v8[i] )
            {
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v8[i]);
              *(_QWORD *)(*(_QWORD *)(v5 + v4 + 8) + 8 * i) = 0LL;
              v8 = *(OUTPUTDUPL_CONTEXT ***)(v5 + v4 + 8);
            }
          }
          operator delete[](v8);
          *(_QWORD *)(v5 + v4 + 8) = 0LL;
        }
        ++v3;
      }
      while ( v3 < *((_DWORD *)this + 13) );
      v2 = (void *)*((_QWORD *)this + 2);
    }
    operator delete[](v2);
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 13) = 0;
  }
}
