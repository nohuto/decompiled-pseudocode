/*
 * XREFs of ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00FD130
 * Callers:
 *     UmfdUnloadFontFileInternal @ 0x1C00FD088 (UmfdUnloadFontFileInternal.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C0099BAC (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02D24EC (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rbx
  char v4; // di
  char v5; // si
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  _QWORD *v8; // rcx

  v2 = (volatile signed __int32 *)UmfdFontFileLookup;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  v4 = 0;
  v5 = 1;
  _InterlockedCompareExchange(v2 + 4, 0, 1);
  _InterlockedAdd(v2 + 7, 1u);
  if ( *((_DWORD *)v2 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v2 + 2));
  v6 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound((__int64)v2, a2);
  v7 = *((_QWORD *)v2 + 5);
  if ( !v7 || v6 >= v7 )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v8 = (_QWORD *)(*((_QWORD *)v2 + 6) + 16 * v6);
  if ( *v8 == *a2 )
  {
    memmove(v8, v8 + 2, 16 * (v7 - v6) - 16);
    --*((_QWORD *)v2 + 5);
LABEL_7:
    v4 = v5;
  }
  _InterlockedDecrement(v2 + 7);
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
