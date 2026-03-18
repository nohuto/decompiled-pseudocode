/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02CEC44
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02CDC44 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CED98 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0021CDC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  void *v9; // rcx
  void *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  void *v14; // rcx
  void *v15; // rcx

  v3 = (_QWORD **)((char *)this + 192);
  if ( *v3 != v3 )
  {
    v5 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdError(v5);
    while ( 1 )
    {
      v6 = *v3;
      if ( *v3 == v3 )
        break;
      if ( (_QWORD **)v6[1] != v3 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *v3 = v7;
      v7[1] = v3;
      operator delete(v6 - 4);
    }
  }
  v8 = *((_DWORD *)this + 32);
  if ( v8 )
  {
    v9 = (void *)*((_QWORD *)this + 17);
    v10 = v9;
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL, 0LL);
      WdLogEvent5_WdAssertion(v11);
      v9 = (void *)*((_QWORD *)this + 17);
      v8 = *((_DWORD *)this + 32);
      v10 = v9;
    }
    v12 = 0LL;
    if ( v8 )
    {
      do
      {
        v13 = (_QWORD *)*((_QWORD *)v9 + v12);
        v10 = v9;
        if ( v13 )
        {
          do
          {
            v14 = v13;
            v13 = (_QWORD *)*v13;
            operator delete[](v14);
          }
          while ( v13 );
          v9 = (void *)*((_QWORD *)this + 17);
          v10 = v9;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *((_DWORD *)this + 32) );
    }
    operator delete[](v10);
    *((_QWORD *)this + 17) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_QWORD *)this + 18) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 20);
  if ( v15 )
  {
    operator delete[](v15);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 38) = 0;
    DisplayID_Initialize((DXGMONITOR *)((char *)this + 168), 0LL, 0);
  }
  return 0LL;
}
