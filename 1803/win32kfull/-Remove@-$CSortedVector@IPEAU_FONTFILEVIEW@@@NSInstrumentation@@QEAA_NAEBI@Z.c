/*
 * XREFs of ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00BF054
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     FreeFileView @ 0x1C00FFF18 (FreeFileView.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C00BEFE4 (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02ADCB8 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(__int64 a1, unsigned int *a2)
{
  volatile signed __int32 *v2; // rbx
  char v4; // di
  char v5; // si
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  _DWORD *v8; // rcx

  v2 = (volatile signed __int32 *)UmfdFileviewLookup;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  v4 = 0;
  v5 = 1;
  _InterlockedCompareExchange(v2 + 4, 0, 1);
  _InterlockedAdd(v2 + 7, 1u);
  if ( *((_DWORD *)v2 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v2 + 2));
  v6 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound((__int64)v2, a2);
  v7 = *((_QWORD *)v2 + 5);
  if ( !v7 || v6 >= v7 )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v8 = (_DWORD *)(*((_QWORD *)v2 + 6) + 16 * v6);
  if ( *v8 == *a2 )
  {
    memmove(v8, v8 + 4, 16 * (v7 - v6) - 16);
    --*((_QWORD *)v2 + 5);
LABEL_7:
    v4 = v5;
  }
  _InterlockedDecrement(v2 + 7);
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
