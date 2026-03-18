/*
 * XREFs of ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C00104F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C001057C (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00123F0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

bool __fastcall CFlipToken::GetEarlyTokenSync(CFlipToken *this)
{
  __int64 v1; // rsi
  bool v2; // bl
  unsigned __int64 v3; // rbp
  _DWORD v5[32]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v1 + 48)) >= 0 )
  {
    memset(v5, 0, 0x78uLL);
    if ( (int)CCompositionSurface::GetBufferAttributes(
                (CCompositionSurface *)(v1 + 40),
                v3,
                (struct CSM_BUFFER_ATTRIBUTES *)v5) >= 0 )
      v2 = (v5[29] & 0x200) != 0;
    CPushLock::ReleaseLock((CPushLock *)(v1 + 48));
  }
  return v2;
}
