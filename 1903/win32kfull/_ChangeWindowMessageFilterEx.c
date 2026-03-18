/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C0087AE8
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C0087950 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     UIPISQMChangeFilter @ 0x1C0087C78 (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C0087D0C (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0087E40 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0087F54 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     FreeWindowMessageFilter @ 0x1C009828C (FreeWindowMessageFilter.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00CF914 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C011228C (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C01123B0 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0116710 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // esi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // r13
  __int64 v11; // rcx
  void **v12; // r15
  int v13; // r9d
  struct tagVWPL **v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]
  void **v17[7]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0;
  v7 = a2;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = CurrentProcessWin32Process;
  UIPISQMChangeFilter(CurrentProcessWin32Process);
  if ( (unsigned __int8)Enforced(v11) )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter(v10, v7) )
      return 0LL;
    if ( a3 )
    {
      v17[0] = GetWindowMessageFilter(a1);
      v12 = v17[0];
      if ( a3 == 1 )
      {
        v4 = AddMessageToFilter(v17, v7, &v18);
        if ( v4 && v18 )
          *(_DWORD *)(a4 + 4) = 1;
      }
      else
      {
        if ( a3 != 2 )
          return v4;
        v4 = RemoveMessageFromFilter(v17, v7, &v18);
        if ( v4 )
        {
          if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 105), v7, 0LL, 0LL)
            || (unsigned int)IsMessageAlwaysAllowedAcrossIL(v7) )
          {
            *(_DWORD *)(a4 + 4) = 3;
          }
          else if ( v18 )
          {
            *(_DWORD *)(a4 + 4) = 2;
          }
        }
      }
      if ( v12 != v17[0] )
      {
        v15 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 848LL);
        if ( v17[0] )
          return (unsigned int)VWPLAddBase(v15, (unsigned __int64)v17[0], a1, 5u, v16);
        else
          VWPLRemoveBase(v15, 0LL, a1, v13, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1);
  }
  return 1LL;
}
