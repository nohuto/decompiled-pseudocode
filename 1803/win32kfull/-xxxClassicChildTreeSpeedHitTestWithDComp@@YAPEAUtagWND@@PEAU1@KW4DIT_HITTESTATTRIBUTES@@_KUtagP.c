/*
 * XREFs of ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01C9E20
 * Callers:
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01C9E20 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     TouchTargetChildTree @ 0x1C01CB858 (TouchTargetChildTree.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C000C4F8 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C00741A0 (-CanHitTestInDwm@@YA_NXZ.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0105CF4 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEAPEAUHWND__@@PEAUtagINPUTDEST@@PEAHPEAI6@Z @ 0x1C01C8D8C (-CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEA.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01C9E20 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
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
  unsigned __int64 v11; // rbx
  struct tagWND *result; // rax
  char v13; // al
  struct tagINPUTDEST *v14; // rsi
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _OWORD *v23; // rsi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  HWND v26; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v27[2]; // [rsp+60h] [rbp-A8h]
  struct tagWND *v28; // [rsp+68h] [rbp-A0h] BYREF
  HWND v29; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-90h]
  _OWORD v31[11]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v32; // [rsp+168h] [rbp+60h] BYREF

  v32 = a3;
  v9 = *(_QWORD *)(a1 + 88);
  v30 = a4;
  v27[0] = a2;
  v28 = (struct tagWND *)v9;
  if ( !v9 )
    return (struct tagWND *)a1;
  v11 = (unsigned __int64)a5;
  while ( 1 )
  {
    v26 = *(HWND *)v9;
    v29 = v26;
    if ( ClassicIsWindowHit((struct tagWND *)v9, (struct tagPOINT)v11) )
      break;
    v28 = *(struct tagWND **)(v9 + 64);
    v9 = (__int64)v28;
    if ( !v28 )
      return (struct tagWND *)a1;
  }
  v13 = CanHitTestInDwm();
  v14 = a9;
  if ( v13
    && ((unsigned int)WindowHasCompositionTarget((struct tagWND *)v9, 1)
     || (unsigned int)WindowHasCompositionTarget((struct tagWND *)v9, 0)) )
  {
    LODWORD(v26) = 0;
    result = CallDCompHitTestHelper(
               v27[0],
               (const enum DIT_HITTESTATTRIBUTES *)&v32,
               v30,
               &a6,
               &v28,
               &v29,
               v14,
               a7,
               a8,
               (int *)&v26);
    if ( (_DWORD)v26 )
      return result;
    v9 = (__int64)v28;
    v26 = v29;
  }
  if ( *(_QWORD *)(v9 + 88) )
  {
    if ( PtInRect((_DWORD *)(*(_QWORD *)(v9 + 40) + 104LL), v11) )
    {
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))xxxClassicChildTreeSpeedHitTestWithDComp)(
             v9,
             v27[0],
             v32,
             v30,
             v11,
             a6,
             a7,
             a8,
             v14);
      if ( !v9 )
      {
        LOBYTE(v15) = 1;
        v9 = HMValidateHandleNoSecure((unsigned __int64)v26, v15);
      }
    }
  }
  if ( v9 && *(char *)(*(_QWORD *)(v9 + 40) + 19LL) < 0 )
  {
    if ( v14 )
    {
      memset(v31, 0, sizeof(v31));
      v16 = v31[1];
      *(_OWORD *)v14 = v31[0];
      v17 = v31[2];
      *((_OWORD *)v14 + 1) = v16;
      v18 = v31[3];
      *((_OWORD *)v14 + 2) = v17;
      v19 = v31[4];
      *((_OWORD *)v14 + 3) = v18;
      v20 = v31[5];
      *((_OWORD *)v14 + 4) = v19;
      v21 = v31[6];
      *((_OWORD *)v14 + 5) = v20;
      v22 = v31[8];
      *((_OWORD *)v14 + 6) = v21;
      v23 = (_OWORD *)((char *)v14 + 128);
      *(v23 - 1) = v31[7];
      v24 = v31[9];
      *v23 = v22;
      v25 = v31[10];
      v23[1] = v24;
      v23[2] = v25;
    }
    return 0LL;
  }
  return (struct tagWND *)v9;
}
