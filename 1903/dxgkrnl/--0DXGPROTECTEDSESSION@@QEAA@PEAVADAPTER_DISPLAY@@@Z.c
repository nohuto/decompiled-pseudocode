/*
 * XREFs of ??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C00446DC
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0260F7C (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     <none>
 */

DXGPROTECTEDSESSION *__fastcall DXGPROTECTEDSESSION::DXGPROTECTEDSESSION(
        DXGPROTECTEDSESSION *this,
        struct ADAPTER_DISPLAY *a2)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 32;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_DWORD *)this + 35) = 1;
  *((_QWORD *)this + 18) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 16);
  return this;
}
