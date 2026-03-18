/*
 * XREFs of ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00E8DA8
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00E8CD4 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C013071C (-Create@UmfdTls@@CAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1C00E8DDC (-Destroy@UmfdUMBuffer@@SAXPEAV1@@Z.c)
 */

void __fastcall UmfdTls::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    UmfdUMBuffer::Destroy(v2);
  EngFreeMem(pv);
}
