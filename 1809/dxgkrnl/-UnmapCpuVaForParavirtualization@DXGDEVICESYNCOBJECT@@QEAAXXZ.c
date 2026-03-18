/*
 * XREFs of ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01EA540
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00DC48C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(DXGDEVICESYNCOBJECT *this)
{
  PVOID *v1; // rbx
  void *v2; // rcx
  ULONG_PTR v3; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  v1 = (PVOID *)((char *)this + 56);
  v2 = (void *)*((_QWORD *)this + 7);
  v3 = 4096LL;
  MmRotatePhysicalView(v2, &v3, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
  RegionSize = 4096LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v1, &RegionSize, 0x8000u);
  *v1 = 0LL;
}
