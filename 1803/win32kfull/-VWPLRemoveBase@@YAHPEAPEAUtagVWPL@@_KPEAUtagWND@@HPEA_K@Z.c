/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E5A94
 * Callers:
 *     FreeWindowMessageFilter @ 0x1C0036174 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C00361C0 (FreeWindowGCData.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0061E4C (_ChangeWindowMessageFilterEx.c)
 *     _DeregisterShellHookWindow @ 0x1C010F2A0 (_DeregisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLRemoveBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // r10
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edi
  struct tagWND *v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  v5 = (unsigned int *)*a1;
  if ( !*a1 )
    return 0LL;
  if ( v5[3] )
    return 0LL;
  v9 = *v5;
  v10 = 0;
  if ( !*v5 )
    return 0LL;
  do
  {
    v11 = v10;
    v12 = *(struct tagWND **)&v5[4 * v10 + 6];
    if ( a3 == v12 )
      break;
    ++v10;
  }
  while ( v10 < v9 );
  v13 = v11 + 1;
  if ( a3 == v12 )
    v13 = v11;
  if ( v13 >= v9 )
    return 0LL;
  v14 = 2LL * v13;
  *(_QWORD *)&v5[2 * v14 + 6] = 0LL;
  v15 = *(_QWORD *)&v5[4 * v13 + 4];
  *(_QWORD *)&v5[2 * v14 + 4] = 0LL;
  v16 = --*v5;
  if ( a5 )
  {
    *a5 = v15;
    v16 = *v5;
  }
  if ( v16 )
  {
    if ( v13 < v16 )
    {
      do
      {
        v17 = 2 * (v13 + 1LL);
        v18 = 2 * (++v13 + 1LL);
        *(_OWORD *)&v5[2 * v17] = *(_OWORD *)&v5[2 * v18];
        v16 = *v5;
      }
      while ( v13 < *v5 );
    }
    *(_QWORD *)&v5[4 * v16 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v19 = UserReAllocPoolZInit(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v19 )
      {
        *(_DWORD *)(v19 + 4) = *(_DWORD *)v19;
        *a1 = (struct tagVWPL *)v19;
      }
    }
  }
  else
  {
    Win32FreePool(v5);
    *a1 = 0LL;
  }
  return 1LL;
}
