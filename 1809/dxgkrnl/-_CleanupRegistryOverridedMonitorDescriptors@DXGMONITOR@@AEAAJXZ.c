/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0133B3C
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0133988 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296054 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rax
  void *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax

  v2 = -1073741275;
  if ( *((_DWORD *)this + 32) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_DWORD **)(*((_QWORD *)this + 17) + 8 * v5);
      if ( v6 )
      {
        v7 = 0LL;
        do
        {
          if ( v6[2] == 3 )
          {
            v8 = *(_QWORD *)v6;
            v2 = 0;
            if ( v7 )
              *v7 = v8;
            else
              *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v5) = v8;
            v9 = v6;
            v6 = *(_DWORD **)v6;
            operator delete[](v9);
            --*((_DWORD *)this + 33);
          }
          else
          {
            v7 = v6;
            v6 = *(_DWORD **)v6;
          }
        }
        while ( v6 );
      }
      v10 = *((_DWORD *)this + 32);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v10 );
    v11 = 0LL;
    if ( !v10 )
      goto LABEL_22;
    while ( *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v11) )
    {
      v12 = *((_DWORD *)this + 32);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v12 )
        goto LABEL_21;
    }
    *((_DWORD *)this + 32) = v11;
    v12 = v11;
LABEL_21:
    if ( !v12 )
    {
LABEL_22:
      operator delete[](*((void **)this + 17));
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  else if ( *((_QWORD *)this + 17) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  return v2;
}
