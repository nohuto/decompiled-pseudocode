/*
 * XREFs of EngFreeUserMem @ 0x1C003C200
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0031CA8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C006BE70 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003B9F4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003BA28 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD Buffer[4]; // [rsp+20h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+18h] BYREF
  char v8; // [rsp+60h] [rbp+20h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      Buffer[0] = BaseAddress;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v8, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      v3 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      if ( v3 )
      {
        v4 = (void *)v3[2];
        RegionSize = v3[1];
        MmUnsecureVirtualMemory(v4);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer[0] = BaseAddress;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
    }
  }
}
