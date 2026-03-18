/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0133A90
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0133988 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0001D14 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(DXGMONITOR *this)
{
  _QWORD **v1; // rdi
  int v3; // eax
  void *v4; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rcx
  void *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  void *v14; // rcx

  v1 = (_QWORD **)((char *)this + 192);
  if ( *v1 != v1 )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdError(v6);
    while ( 1 )
    {
      v7 = *v1;
      if ( *v1 == v1 )
        break;
      if ( (_QWORD **)v7[1] != v1 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v1 = v8;
      v8[1] = v1;
      operator delete(v7 - 4);
    }
  }
  v3 = *((_DWORD *)this + 32);
  if ( v3 )
  {
    v9 = (void *)*((_QWORD *)this + 17);
    v10 = v9;
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v11);
      v9 = (void *)*((_QWORD *)this + 17);
      v3 = *((_DWORD *)this + 32);
      v10 = v9;
    }
    v12 = 0LL;
    if ( v3 )
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
  v4 = (void *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    operator delete[](v4);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 38) = 0;
    DisplayID_Initialize((DXGMONITOR *)((char *)this + 168), 0LL, 0);
  }
  return 0LL;
}
