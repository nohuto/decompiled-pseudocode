/*
 * XREFs of DwmAsyncChildLink @ 0x1C00D97B0
 * Callers:
 *     LinkWindow @ 0x1C00CA850 (LinkWindow.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D94F8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmAsyncChildLink(PVOID Object, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v9; // ebx
  _DWORD v11[20]; // [rsp+20h] [rbp-58h] BYREF

  v9 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v11, 0, 0x48uLL);
    v11[0] = 4718624;
    LOWORD(v11[1]) = 0x8000;
    v11[17] = a5;
    v11[10] = 1073741842;
    *(_QWORD *)&v11[11] = a2;
    *(_QWORD *)&v11[13] = a3;
    *(_QWORD *)&v11[15] = a4;
    v9 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
