/*
 * XREFs of ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C00199C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000DC9C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0019A3C (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 */

bool __fastcall CFlipToken::GetEarlyTokenSync(CFlipToken *this)
{
  __int64 v1; // rsi
  bool v2; // bl
  unsigned __int64 v3; // rbp
  _BYTE v5[116]; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+94h] [rbp-14h]

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v1 + 48)) >= 0 )
  {
    if ( (int)CCompositionSurface::GetBufferAttributes(
                (CCompositionSurface *)(v1 + 40),
                v3,
                (struct CSM_BUFFER_ATTRIBUTES *)v5) >= 0 )
      v2 = (v6 & 0x200) != 0;
    CPushLock::ReleaseLock((CPushLock *)(v1 + 48));
  }
  return v2;
}
