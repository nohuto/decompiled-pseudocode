/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C01F0224
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00326AC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007758 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0245B4C (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0271F80 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, __int64 a2)
{
  struct OUTPUTDUPL_MGR *v3; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT *v4; // rbx
  DXGGLOBAL *Global; // rax
  char *v6; // rcx
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 72) )
    {
      v4 = (struct OUTPUTDUPL_MGR *)((char *)v3 - 24);
      Global = DXGGLOBAL::GetGlobal((__int64)v3, a2);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, v4);
      v3 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 13);
    }
    DestroyOutputDuplManager(v3);
    *((_QWORD *)this + 13) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    v7 = v6 - 8;
    `vector destructor iterator'(
      v6,
      3968LL,
      *((_QWORD *)v6 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete[](v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((ADAPTER_DISPLAY **)this + 73) != (ADAPTER_DISPLAY *)((char *)this + 584) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v8 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 544));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 504));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 440));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 384));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 304));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 240));
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)this + 27, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 176));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 136));
  if ( *((ADAPTER_DISPLAY **)this + 8) != (ADAPTER_DISPLAY *)((char *)this + 64) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24));
  *((_QWORD *)this + 2) = 0LL;
}
