/*
 * XREFs of DwmAsyncChildCreate @ 0x1C00D9AC8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmAsyncChildCreate(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        __int128 *a10,
        unsigned int a11,
        __int64 a12)
{
  unsigned int v16; // ebx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _QWORD v21[20]; // [rsp+20h] [rbp-B1h] BYREF

  v16 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v21, 0, 0x98uLL);
    v17 = *a8;
    v18 = a8[1];
    WORD2(v21[0]) = 0x8000;
    LODWORD(v21[8]) = a5;
    v21[17] = __PAIR64__(a11, a6);
    HIDWORD(v21[10]) = a7;
    *(_OWORD *)&v21[11] = v17;
    v21[16] = a9;
    v21[15] = *((_QWORD *)a8 + 4);
    v19 = *a10;
    v21[18] = a12;
    LODWORD(v21[0]) = 9961584;
    LODWORD(v21[5]) = 1073741841;
    *(_QWORD *)((char *)&v21[5] + 4) = a2;
    *(_QWORD *)((char *)&v21[6] + 4) = a3;
    HIDWORD(v21[7]) = a4;
    *(_OWORD *)&v21[13] = v18;
    *(_OWORD *)((char *)&v21[8] + 4) = v19;
    EtwUpdateEvent(a3);
    v16 = LpcRequestPort(Object, v21);
    ObfDereferenceObject(Object);
  }
  return v16;
}
