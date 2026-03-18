/*
 * XREFs of ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C01F7BF0
 * Callers:
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C01F6A80 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 *     EdgyUnregisterListener @ 0x1C01F7E34 (EdgyUnregisterListener.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void __fastcall Edgy::_RemoveListenerCore(Edgy *this, struct tagEDGY_DATA *a2, struct tagEDGY_LISTENER *a3)
{
  __int64 v4; // r10
  int v5; // ecx
  __int64 v6; // r9

  if ( a2 == *((struct tagEDGY_DATA **)this + 23) )
    *((_QWORD *)this + 23) = 0LL;
  v4 = *((_QWORD *)this + 1);
  v5 = *(_DWORD *)this;
  v6 = ((__int64)a2 - v4) >> 5;
  if ( (_DWORD)v6 != v5 - 1 )
  {
    memmove(
      (void *)(v4 + 32LL * (unsigned int)v6),
      (const void *)(v4 + 32LL * (unsigned int)(v6 + 1)),
      32LL * (unsigned int)(v5 - v6 - 1));
    v5 = *(_DWORD *)this;
  }
  *(_DWORD *)this = v5 - 1;
}
