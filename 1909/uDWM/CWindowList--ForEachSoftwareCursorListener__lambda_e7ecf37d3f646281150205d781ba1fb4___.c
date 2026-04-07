/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x18008E6F4
 * Callers:
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800841C8 (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800844B8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x180084BDC (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)(a1 + 632);
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8LL * v6);
      if ( v7 == **(_QWORD **)a2 )
        break;
      if ( ++v6 >= v4 )
        goto LABEL_12;
    }
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_DWORD *)(v8 + 632);
    v10 = *(_QWORD *)(v8 + 608);
    if ( v9 )
    {
      do
      {
        if ( v7 == *(_QWORD *)(v10 + 8 * v5) )
          break;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v9 );
    }
    if ( (unsigned int)v5 < v9 )
    {
      for ( ; (unsigned int)v5 < v9 - 1; v9 = *(_DWORD *)(v8 + 632) )
      {
        v11 = (unsigned int)v5;
        LODWORD(v5) = v5 + 1;
        *(_QWORD *)(v10 + 8 * v11) = *(_QWORD *)(v10 + 8LL * (unsigned int)v5);
      }
      *(_DWORD *)(v8 + 632) = v9 - 1;
    }
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
}
