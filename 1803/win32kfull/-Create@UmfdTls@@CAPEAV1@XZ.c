/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C010E778
 * Callers:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007F2BC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082350 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00EDE40 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C010E7CC (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void **UmfdTls::Create(void)
{
  void **v0; // rax
  void **v1; // rbx
  struct UmfdUMBuffer *v2; // rax

  v0 = (void **)EngAllocMem(0, 0x30u, 0x6C744446u);
  v1 = v0;
  if ( !v0 )
    return v1;
  memset(v0, 0, 0x30uLL);
  *((_DWORD *)v1 + 2) = -1;
  v2 = UmfdUMBuffer::Create();
  *v1 = v2;
  if ( v2 )
    return v1;
  UmfdTls::Destroy(v1);
  return 0LL;
}
