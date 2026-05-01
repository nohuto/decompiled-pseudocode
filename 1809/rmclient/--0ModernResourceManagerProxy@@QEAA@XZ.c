/*
 * XREFs of ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x180004010
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003810 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003B00 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     <none>
 */

ModernResourceManagerProxy *__fastcall ModernResourceManagerProxy::ModernResourceManagerProxy(
        ModernResourceManagerProxy *this)
{
  ModernResourceManagerProxy *result; // rax

  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  RtlInitializeSRWLock((char *)this + 96);
  result = this;
  *((_DWORD *)this + 26) = 0;
  return result;
}
