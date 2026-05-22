/*
 * XREFs of ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18008BF84
 * Callers:
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x18008BEB0 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18008C254 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCCursorManager::Is3DCursorVisible(MPCCursorManager *this)
{
  int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 15);
  v2 = 1;
  if ( v1 != 1 )
    return (v1 & 0x1C) != 24;
  return v2;
}
