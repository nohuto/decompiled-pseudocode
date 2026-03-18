/*
 * XREFs of ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C0179A18
 * Callers:
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C0178904 (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0179A8C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CHitTestState::Set(CHitTestState *this, const struct CInputDest *a2, __int64 a3, int a4)
{
  int v4; // edi
  char v6; // bp
  int v8; // eax
  unsigned int v9; // eax

  v4 = 0;
  v6 = a3;
  if ( *(_DWORD *)a2 )
  {
    CInputDest::operator=((__int64)this, (__int64)a2, a3);
    v8 = *((_DWORD *)this + 33);
    if ( v6 )
    {
      v9 = v8 | 1;
      v4 = a4;
    }
    else
    {
      v9 = v8 & 0xFFFFFFFE;
    }
    *((_DWORD *)this + 33) = v9;
  }
  else
  {
    CInputDest::SetEmpty(this, (__int64)a2, a3);
    *((_DWORD *)this + 33) &= ~1u;
  }
  *((_DWORD *)this + 32) = v4;
}
