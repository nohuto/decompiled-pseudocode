/*
 * XREFs of ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124
 * Callers:
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     TouchTargetChildTree @ 0x1C01EFC18 (TouchTargetChildTree.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C006E870 (-CanHitTestInDwm@@YA_NXZ.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00C9518 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0116768 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEAPEAUHWND__@@PEAUtagINPUTDEST@@PEAHPEAI6@Z @ 0x1C01ED0E0 (-CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEA.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 */

struct tagWND *__fastcall xxxClassicChildTreeSpeedHitTestWithDComp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct tagPOINT a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int *a8,
        struct tagINPUTDEST *a9)
{
  __int64 v9; // rdi
  unsigned __int64 v12; // rbx
  HWND v13; // r14
  struct tagWND *result; // rax
  char v15; // al
  struct tagINPUTDEST *v16; // rsi
  unsigned int *v17; // r15
  int *v18; // r12
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _OWORD *v27; // rsi
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  unsigned int v30[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct tagWND *v31; // [rsp+60h] [rbp-A8h] BYREF
  HWND v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-98h]
  _OWORD v34[11]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v35; // [rsp+178h] [rbp+70h] BYREF

  v35 = a3;
  v9 = *(_QWORD *)(a1 + 88);
  v33 = a4;
  v30[1] = a2;
  v31 = (struct tagWND *)v9;
  if ( !v9 )
    return (struct tagWND *)a1;
  v12 = (unsigned __int64)a5;
  while ( 1 )
  {
    v13 = *(HWND *)v9;
    v32 = *(HWND *)v9;
    if ( ClassicIsWindowHit((struct tagWND *)v9, (struct tagPOINT)v12) )
      break;
    v31 = *(struct tagWND **)(v9 + 64);
    v9 = (__int64)v31;
    if ( !v31 )
      return (struct tagWND *)a1;
  }
  v15 = CanHitTestInDwm();
  v16 = a9;
  v17 = a8;
  v18 = a7;
  if ( v15
    && ((unsigned int)WindowHasCompositionTarget((struct tagWND *)v9, 1)
     || (unsigned int)WindowHasCompositionTarget((struct tagWND *)v9, 0)) )
  {
    v30[0] = 0;
    result = CallDCompHitTestHelper(
               v30[1],
               (const enum DIT_HITTESTATTRIBUTES *)&v35,
               v33,
               &a6,
               &v31,
               &v32,
               v16,
               v18,
               v17,
               (int *)v30);
    if ( v30[0] )
      return result;
    v9 = (__int64)v31;
    v13 = v32;
  }
  if ( *(_QWORD *)(v9 + 88) )
  {
    if ( PtInRect((_DWORD *)(*(_QWORD *)(v9 + 40) + 104LL), v12) )
    {
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))xxxClassicChildTreeSpeedHitTestWithDComp)(
             v9,
             v30[1],
             a3,
             v33,
             v12,
             a6,
             v18,
             v17,
             v16);
      if ( !v9 )
      {
        LOBYTE(v19) = 1;
        v9 = HMValidateHandleNoSecure((unsigned __int64)v13, v19);
      }
    }
  }
  if ( v9 && *(char *)(*(_QWORD *)(v9 + 40) + 19LL) < 0 )
  {
    if ( v16 )
    {
      memset(v34, 0, sizeof(v34));
      v20 = v34[1];
      *(_OWORD *)v16 = v34[0];
      v21 = v34[2];
      *((_OWORD *)v16 + 1) = v20;
      v22 = v34[3];
      *((_OWORD *)v16 + 2) = v21;
      v23 = v34[4];
      *((_OWORD *)v16 + 3) = v22;
      v24 = v34[5];
      *((_OWORD *)v16 + 4) = v23;
      v25 = v34[6];
      *((_OWORD *)v16 + 5) = v24;
      v26 = v34[8];
      *((_OWORD *)v16 + 6) = v25;
      v27 = (_OWORD *)((char *)v16 + 128);
      *(v27 - 1) = v34[7];
      v28 = v34[9];
      *v27 = v26;
      v29 = v34[10];
      v27[1] = v28;
      v27[2] = v29;
    }
    return 0LL;
  }
  return (struct tagWND *)v9;
}
