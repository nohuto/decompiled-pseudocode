/*
 * XREFs of DwmAsyncCreateSprite @ 0x1C007C744
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncCreateSprite(PVOID Object, __int64 a2, __int64 a3, _OWORD *a4, int a5, __int64 a6, int a7)
{
  unsigned int v11; // edi
  _OWORD *v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  _OWORD v22[14]; // [rsp+20h] [rbp-E0h] BYREF

  v11 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v22, 0, 0xDCuLL);
    LODWORD(v22[0]) = 14418100;
    WORD2(v22[0]) = 0x8000;
    HIDWORD(v22[4]) = a5;
    DWORD2(v22[13]) = a7;
    DWORD2(v22[2]) = 1073741826;
    *(_QWORD *)((char *)&v22[2] + 12) = a2;
    *(_QWORD *)((char *)&v22[3] + 4) = a3;
    if ( a4 )
      *(_OWORD *)((char *)&v22[3] + 12) = *a4;
    if ( a6 )
    {
      v14 = *(_OWORD *)(a6 + 16);
      v22[5] = *(_OWORD *)a6;
      v15 = *(_OWORD *)(a6 + 32);
      v22[6] = v14;
      v16 = *(_OWORD *)(a6 + 48);
      v22[7] = v15;
      v17 = *(_OWORD *)(a6 + 64);
      v22[8] = v16;
      v18 = *(_OWORD *)(a6 + 80);
      v22[9] = v17;
      v19 = *(_OWORD *)(a6 + 96);
      v22[10] = v18;
      v22[11] = v19;
      v12 = &v22[13];
      v20 = *(_QWORD *)(a6 + 128);
      v22[12] = *(_OWORD *)(a6 + 112);
      *(_QWORD *)&v22[13] = v20;
    }
    EtwUpdateEvent(a3, 1073741826LL, v12, v13);
    v11 = LpcRequestPort(Object, v22);
    ObfDereferenceObject(Object);
  }
  return v11;
}
