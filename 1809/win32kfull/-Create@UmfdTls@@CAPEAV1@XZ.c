/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C013071C
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008C300 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C008D6F0 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00E8DA8 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C0130778 (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void **UmfdTls::Create(void)
{
  void **v0; // rax
  void **v1; // rbx
  struct UmfdUMBuffer *v2; // rax

  v0 = (void **)EngAllocMem(0, 0x38u, 0x6C744446u);
  v1 = v0;
  if ( !v0 )
    return v1;
  memset(v0, 0, 0x38uLL);
  *((_DWORD *)v1 + 2) = -1;
  v2 = UmfdUMBuffer::Create();
  *v1 = v2;
  if ( v2 )
    return v1;
  UmfdTls::Destroy(v1);
  return 0LL;
}
