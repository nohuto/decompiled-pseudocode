/*
 * XREFs of ??0ModernResourceManagerProxy@@QAE@XZ @ 0x1000B6A0
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 * Callees:
 *     <none>
 */

ModernResourceManagerProxy *__thiscall ModernResourceManagerProxy::ModernResourceManagerProxy(
        ModernResourceManagerProxy *this)
{
  char *v2; // esi
  ModernResourceManagerProxy *result; // eax

  v2 = (char *)this + 72;
  *(_DWORD *)this = &ModernResourceManagerProxy::`vftable';
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  RtlInitializeSRWLock((char *)this + 72);
  result = this;
  *((_DWORD *)v2 + 1) = 0;
  return result;
}
