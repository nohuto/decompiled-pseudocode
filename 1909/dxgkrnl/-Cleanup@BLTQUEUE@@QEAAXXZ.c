/*
 * XREFs of ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C027B674
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C027B544 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C027DD28 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( *((_QWORD *)this + 55) )
  {
    *((_QWORD *)this + 57) = KeGetCurrentThread();
    *((_BYTE *)this + 404) = 1;
    KeSetEvent((PRKEVENT)((char *)this + 352), 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 55), 0, 0LL);
    ZwClose(*((HANDLE *)this + 55));
    v2 = *((_QWORD *)this + 58);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    LOBYTE(v3) = 1;
    *((_QWORD *)this + 56) = 0LL;
    ExDeleteTimer(v2, v3, 0LL, 0LL);
    *((_QWORD *)this + 58) = 0LL;
    BLTQUEUE::SetIndirectSwapChainHandles(this, 0LL);
  }
}
