/*
 * XREFs of EngFreeUserMem @ 0x1C009D8E0
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005D960 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C009137C (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003323C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0033270 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00ABEC0 (GrepUnsecureVirtualMemory.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx
  struct _RTL_AVL_TABLE *v3; // rdi
  _QWORD *v4; // rax
  void *v5; // rbx
  _QWORD Buffer[4]; // [rsp+20h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+28h] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      Buffer[0] = BaseAddress;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      v3 = (struct _RTL_AVL_TABLE *)(v2 + 88);
      v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      if ( v4 )
      {
        v5 = (void *)v4[2];
        RegionSize = v4[1];
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)RegionSize) )
          GrepUnsecureVirtualMemory(v5);
        else
          MmUnsecureVirtualMemory(v5);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer[0] = BaseAddress;
        RtlDeleteElementGenericTableAvl(v3, Buffer);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
    }
  }
}
