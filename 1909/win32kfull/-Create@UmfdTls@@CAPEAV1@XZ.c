/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0116210
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01220A0 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C01229E8 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C011626C (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C01421E8 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

struct UmfdTls *UmfdTls::Create(void)
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx
  struct UmfdUMBuffer *v2; // rax

  v0 = EngAllocMem(0, 0x38u, 0x6C744446u);
  v1 = v0;
  if ( !v0 )
    return (struct UmfdTls *)v1;
  memset(v0, 0, 0x38uLL);
  v1[2] = -1;
  v2 = UmfdUMBuffer::Create();
  *(_QWORD *)v1 = v2;
  if ( v2 )
    return (struct UmfdTls *)v1;
  UmfdTls::Destroy(v1);
  return 0LL;
}
