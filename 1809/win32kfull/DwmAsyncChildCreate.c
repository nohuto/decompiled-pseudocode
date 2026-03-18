/*
 * XREFs of DwmAsyncChildCreate @ 0x1C00C8048
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v23[20]; // [rsp+20h] [rbp-B1h] BYREF

  v16 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v23, 0, 0x98uLL);
    v17 = *a8;
    v18 = a8[1];
    WORD2(v23[0]) = 0x8000;
    LODWORD(v23[8]) = a5;
    v23[17] = __PAIR64__(a11, a6);
    HIDWORD(v23[10]) = a7;
    *(_OWORD *)&v23[11] = v17;
    v23[16] = a9;
    v23[15] = *((_QWORD *)a8 + 4);
    v19 = *a10;
    v23[18] = a12;
    LODWORD(v23[0]) = 9961584;
    LODWORD(v23[5]) = 1073741841;
    *(_QWORD *)((char *)&v23[5] + 4) = a2;
    *(_QWORD *)((char *)&v23[6] + 4) = a3;
    HIDWORD(v23[7]) = a4;
    *(_OWORD *)&v23[13] = v18;
    *(_OWORD *)((char *)&v23[8] + 4) = v19;
    EtwUpdateEvent(a3, 1073741841LL, v20, v21);
    v16 = LpcRequestPort(Object, v23);
    ObfDereferenceObject(Object);
  }
  return v16;
}
