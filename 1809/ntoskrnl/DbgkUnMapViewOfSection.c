/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1406B861C
 * Callers:
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     MiFreeEnclaveModules @ 0x14085B430 (MiFreeEnclaveModules.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x14081284C (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *v4; // rcx
  void *Teb; // rcx

  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( Object[1].ActiveProcessors.Bitmap[6] )
      {
        v4 = KeGetCurrentThread();
        if ( (v4->MiscFlags & 0x400) != 0 || v4->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = v4->Teb;
        if ( !Teb )
          return DbgkpSendApiMessage(Object);
        if ( Object != CurrentThread->Process )
          return DbgkpSendApiMessage(Object);
        result = DbgkpSuppressDbgMsg(Teb);
        if ( !(_DWORD)result )
          return DbgkpSendApiMessage(Object);
      }
    }
  }
  return result;
}
