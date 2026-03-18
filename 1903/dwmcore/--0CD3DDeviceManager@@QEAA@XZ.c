/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x1800D6858
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001310 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_180340368 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_180340370 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  InitializeCriticalSection(&CriticalSection);
  qword_1803403B0 = (__int64)&unk_1803403D0;
  qword_1803403B8 = (__int64)&unk_1803403D0;
  dword_1803403C0 = 1;
  qword_1803403C4 = 1LL;
  qword_1803403E0 = (__int64)&unk_180340400;
  qword_1803403E8 = (__int64)&unk_180340400;
  dword_1803403F0 = 2;
  unk_1803403F4 = 2LL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  LODWORD(qword_180340430) = 0;
  qword_1803403A8 = 0LL;
  BYTE4(qword_180340430) = 0;
  return result;
}
