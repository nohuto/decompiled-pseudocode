/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x1800D6B08
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001310 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_18033D448 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_18033D450 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  InitializeCriticalSection(&stru_18033D458);
  qword_18033D490 = (__int64)&unk_18033D4B0;
  qword_18033D498 = (__int64)&unk_18033D4B0;
  dword_18033D4A0 = 1;
  qword_18033D4A4 = 1LL;
  qword_18033D4C0 = (__int64)&unk_18033D4E0;
  qword_18033D4C8 = (__int64)&unk_18033D4E0;
  dword_18033D4D0 = 2;
  unk_18033D4D4 = 2LL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  LODWORD(qword_18033D510) = 0;
  qword_18033D488 = 0LL;
  BYTE4(qword_18033D510) = 0;
  return result;
}
