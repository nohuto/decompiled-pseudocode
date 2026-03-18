/*
 * XREFs of ?CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEAPEAUHWND__@@PEAUtagINPUTDEST@@PEAHPEAI6@Z @ 0x1C01C8D8C
 * Callers:
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01C9E20 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall CallDCompHitTestHelper(
        unsigned int a1,
        const enum DIT_HITTESTATTRIBUTES *a2,
        __int64 a3,
        const struct tagPOINT *a4,
        struct tagWND **a5,
        HWND *a6,
        struct tagINPUTDEST *a7,
        int *a8,
        unsigned int *a9,
        int *a10)
{
  __int64 v10; // rbx
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v16; // rcx
  __int128 v17; // [rsp+40h] [rbp-168h]
  __int128 v18; // [rsp+50h] [rbp-158h]
  __int128 v19; // [rsp+60h] [rbp-148h]
  __int128 v20; // [rsp+70h] [rbp-138h]
  __int128 v21; // [rsp+80h] [rbp-128h]
  __int128 v22; // [rsp+90h] [rbp-118h]
  __int128 v23; // [rsp+A0h] [rbp-108h]
  __int128 v24; // [rsp+B0h] [rbp-F8h]
  __int128 v25; // [rsp+C0h] [rbp-E8h]
  __int128 v26; // [rsp+D0h] [rbp-D8h]
  __int128 v27; // [rsp+E0h] [rbp-C8h]
  _BYTE v28[176]; // [rsp+F0h] [rbp-B8h] BYREF

  v10 = 0LL;
  v11 = (__int128 *)DCompHitTest(v28, a1, *(unsigned int *)a2, *a4, a3, 0, a8, a9);
  LOBYTE(v12) = 1;
  v17 = *v11;
  v18 = v11[1];
  v19 = v11[2];
  v20 = v11[3];
  v21 = v11[4];
  v22 = v11[5];
  v23 = v11[6];
  v24 = v11[7];
  v25 = v11[8];
  v26 = v11[9];
  v27 = v11[10];
  v13 = HMValidateHandleNoSecure((unsigned __int64)*a6, v12);
  *a5 = (struct tagWND *)v13;
  if ( !v13 || *(char *)(*(_QWORD *)(v13 + 40) + 19LL) < 0 )
  {
    v16 = (unsigned __int64)*a6;
    *a10 = 1;
    EtwTraceDITSpeedHitTestFailedRevalidation(v16);
    return 0LL;
  }
  if ( DWORD1(v22) == 2 )
    v14 = -(v22 & 1);
  else
    v14 = 0;
  if ( v14 )
  {
    *a10 = 0;
    return 0LL;
  }
  *a10 = 1;
  if ( a7 )
  {
    *(_OWORD *)a7 = v17;
    *((_OWORD *)a7 + 1) = v18;
    *((_OWORD *)a7 + 2) = v19;
    *((_OWORD *)a7 + 3) = v20;
    *((_OWORD *)a7 + 4) = v21;
    *((_OWORD *)a7 + 5) = v22;
    *((_OWORD *)a7 + 6) = v23;
    *((_OWORD *)a7 + 7) = v24;
    *((_OWORD *)a7 + 8) = v25;
    *((_OWORD *)a7 + 9) = v26;
    *((_OWORD *)a7 + 10) = v27;
  }
  if ( DWORD1(v22) == 2 )
    return (struct tagWND *)*((_QWORD *)&v21 + 1);
  return (struct tagWND *)v10;
}
