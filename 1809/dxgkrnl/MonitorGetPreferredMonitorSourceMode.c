/*
 * XREFs of MonitorGetPreferredMonitorSourceMode @ 0x1C00C624C
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BAC28 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(struct HDXGMONITOR__ *a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  struct _ERESOURCE *v7; // r15
  char *v8; // r14
  _OWORD *v9; // rcx
  struct DXGMONITOR *v10; // rax
  _OWORD *v11; // rbp
  __int64 v12; // rdi
  char *v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v19);
  if ( (int)result >= 0 )
  {
    v6 = v19;
    if ( !v19 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v17);
    }
    v7 = (struct _ERESOURCE *)((char *)v6 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 296), 1u);
    v8 = (char *)v6 + 216;
    v9 = 0LL;
    v10 = (struct DXGMONITOR *)*((_QWORD *)v6 + 27);
    v11 = 0LL;
    if ( v10 == (struct DXGMONITOR *)((char *)v6 + 216) )
      goto LABEL_17;
    v12 = (__int64)v10 - 96;
    if ( !v10 )
      v12 = 0LL;
    if ( !v12 )
      goto LABEL_17;
    do
    {
      if ( *(_DWORD *)(v12 + 88) == 1 )
      {
        v14 = *(_DWORD *)(v12 + 84);
        if ( (unsigned int)(v14 - 2) <= 1 )
        {
          if ( v9 )
          {
            v18 = WdLogNewEntry5_WdAssertion(v9);
            WdLogEvent5_WdAssertion(v18);
          }
          v9 = (_OWORD *)v12;
        }
        else if ( v14 == 5 )
        {
          v15 = v12;
          if ( v11 )
            v15 = 1LL;
          v11 = (_OWORD *)v15;
        }
      }
      v13 = *(char **)(v12 + 96);
      if ( v13 == v8 )
        break;
      v12 = (__int64)(v13 - 96);
      if ( !v13 )
        v12 = 0LL;
    }
    while ( v12 );
    if ( (unsigned __int64)v11 > 1 )
    {
      *a2 = *v11;
      a2[1] = v11[1];
      a2[2] = v11[2];
      a2[3] = v11[3];
      a2[4] = v11[4];
      v16 = v11[5];
    }
    else
    {
      if ( !v9 )
      {
LABEL_17:
        v2 = -1073741275;
LABEL_18:
        ExReleaseResourceLite(v7);
        KeLeaveCriticalRegion();
        return v2;
      }
      *a2 = *v9;
      a2[1] = v9[1];
      a2[2] = v9[2];
      a2[3] = v9[3];
      a2[4] = v9[4];
      v16 = v9[5];
    }
    a2[5] = v16;
    goto LABEL_18;
  }
  return result;
}
