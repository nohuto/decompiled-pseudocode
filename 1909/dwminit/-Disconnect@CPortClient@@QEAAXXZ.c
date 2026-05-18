/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x180004848
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x1800047CC (--1CPortClient@@UEAA@XZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180004884 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  void *v2; // rcx

  if ( *((_BYTE *)this + 56) )
  {
    v2 = (void *)*((_QWORD *)this + 6);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_BYTE *)this + 56) = 0;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
