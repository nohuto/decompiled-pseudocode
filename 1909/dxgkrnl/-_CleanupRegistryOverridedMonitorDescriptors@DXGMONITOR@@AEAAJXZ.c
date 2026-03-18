/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01785DC
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0178450 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02CDD04 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CEE58 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(DXGMONITOR *this, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  _QWORD *v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rcx

  v3 = -1073741275;
  if ( *((_DWORD *)this + 32) )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_DWORD **)(*((_QWORD *)this + 17) + 8 * v4);
      if ( v5 )
      {
        v6 = 0LL;
        do
        {
          if ( v5[2] == 3 )
          {
            v12 = *(_QWORD *)v5;
            v3 = 0;
            if ( v6 )
              *v6 = v12;
            else
              *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v4) = v12;
            v13 = v5;
            v5 = *(_DWORD **)v5;
            operator delete[](v13);
            --*((_DWORD *)this + 33);
          }
          else
          {
            v6 = v5;
            v5 = *(_DWORD **)v5;
          }
        }
        while ( v5 );
      }
      v7 = *((_DWORD *)this + 32);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v7 );
    v8 = 0LL;
    if ( !v7 )
      goto LABEL_21;
    while ( *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v8) )
    {
      v9 = *((_DWORD *)this + 32);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v9 )
        goto LABEL_12;
    }
    *((_DWORD *)this + 32) = v8;
    v9 = v8;
LABEL_12:
    if ( !v9 )
    {
LABEL_21:
      operator delete[](*((void **)this + 17));
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  else if ( *((_QWORD *)this + 17) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  return v3;
}
