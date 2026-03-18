/*
 * XREFs of ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C01BE918
 * Callers:
 *     ?_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C01BE244 (-_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall Edgy::_GrowListeners(Edgy *this, struct tagEDGY_DATA *a2)
{
  unsigned int v2; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // esi
  void *v8; // rax
  const void *v9; // rdi
  size_t v10; // r8

  v2 = *(_DWORD *)this;
  if ( *((_DWORD *)this + 1) <= *(_DWORD *)this )
  {
    if ( v2 > 0x20 )
      return 0LL;
    v5 = v2 + 4;
    v6 = 2 * v2;
    if ( (unsigned int)v5 <= v6 )
      v5 = v6;
    v7 = v5;
    v8 = (void *)Win32AllocPoolZInit(32 * v5, 1684370261LL);
    if ( !v8 )
      return 0LL;
    v9 = (const void *)*((_QWORD *)this + 1);
    v10 = 32LL * *(unsigned int *)this;
    *((_QWORD *)this + 1) = v8;
    *((_DWORD *)this + 1) = v7;
    memmove(v8, v9, v10);
    if ( v9 )
      Win32FreePool(v9);
  }
  return 1LL;
}
