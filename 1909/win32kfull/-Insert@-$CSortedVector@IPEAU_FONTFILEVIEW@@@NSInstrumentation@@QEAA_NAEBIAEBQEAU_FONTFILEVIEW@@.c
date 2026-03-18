/*
 * XREFs of ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C01215F4
 * Callers:
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0121510 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C01217A4 (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C029861C (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02D24EC (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  char v5; // si
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v13; // rcx

  v3 = (volatile signed __int32 *)UmfdFileviewLookup;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = 1;
  _InterlockedCompareExchange(v3 + 4, 0, 1);
  _InterlockedAdd(v3 + 7, 1u);
  if ( *((_DWORD *)v3 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v3 + 2));
  v6 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(v3, &g_UmfdFileViewKey);
  v7 = *((_QWORD *)v3 + 5);
  v8 = 16 * v6;
  v9 = v6;
  if ( v6 < v7 && (v13 = *((_QWORD *)v3 + 6), *(_DWORD *)(v13 + 16 * v6) == g_UmfdFileViewKey) )
  {
    *(_QWORD *)(v13 + v8 + 8) = *a3;
  }
  else
  {
    v10 = *((_QWORD *)v3 + 4);
    if ( v7 != v10 || (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(v3, 2 * v10) )
    {
      memmove(
        (void *)(v8 + *((_QWORD *)v3 + 6) + 16),
        (const void *)(v8 + *((_QWORD *)v3 + 6)),
        16 * (*((_QWORD *)v3 + 5) - v9));
      v11 = *((_QWORD *)v3 + 6);
      *(_DWORD *)(v8 + v11) = g_UmfdFileViewKey;
      *(_QWORD *)(v8 + v11 + 8) = *a3;
      ++*((_QWORD *)v3 + 5);
    }
    else
    {
      v5 = 0;
    }
  }
  _InterlockedDecrement(v3 + 7);
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
