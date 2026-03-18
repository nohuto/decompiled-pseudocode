/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x1C0212E7C
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C003C220 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  DXGDEVICESYNCOBJECT *v4; // rcx
  unsigned int v5; // edx
  ULONG_PTR NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 32LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    NumberOfBytes = 4096LL;
    MmRotatePhysicalView(v3, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    RegionSize = 4096LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, &RegionSize, 0x8000u);
  }
  v4 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
  if ( v4 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v4);
  v5 = *((_DWORD *)this + 6);
  if ( v5 )
    DXGPROCESS::FreeResourceHandleNoRefSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v5);
  *((_QWORD *)this + 2) = 0LL;
}
