/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x18007A880
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180002BA0 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_180308A48 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_180308A50 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  InitializeCriticalSection(&CriticalSection);
  qword_180308A90 = (__int64)&unk_180308AB0;
  qword_180308A98 = (__int64)&unk_180308AB0;
  dword_180308AA0 = 1;
  unk_180308AA4 = 1LL;
  qword_180308AC0 = (__int64)&unk_180308AE0;
  qword_180308AC8 = (__int64)&unk_180308AE0;
  dword_180308AD0 = 2;
  unk_180308AD4 = 2LL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  LODWORD(qword_180308B10) = 0;
  qword_180308A88 = 0LL;
  BYTE4(qword_180308B10) = 0;
  return result;
}
