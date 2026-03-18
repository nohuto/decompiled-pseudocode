/*
 * XREFs of DwmAsyncGhostChange @ 0x1C0151840
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmAsyncGhostChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, 0x3CuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741875;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
