/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x1C0246AB0
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C00429DC (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000C9C4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CA30 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx
  unsigned int v6; // edx
  ULONG_PTR NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 32LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    NumberOfBytes = 4096LL;
    MmRotatePhysicalView(v4, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    RegionSize = 4096LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, &RegionSize, 0x8000u);
  }
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
  if ( v5 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v5);
  v6 = *((_DWORD *)this + 6);
  if ( v6 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v6);
  *((_QWORD *)this + 2) = 0LL;
}
