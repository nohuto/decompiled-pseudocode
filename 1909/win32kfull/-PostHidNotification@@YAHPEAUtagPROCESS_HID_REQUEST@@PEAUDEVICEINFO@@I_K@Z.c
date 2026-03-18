/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00E7FCC
 * Callers:
 *     PostDeviceNotification @ 0x1C00E7D84 (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C002BDB0 (AdjustPwndPtiPqForDelegation.c)
 */

_BOOL8 __fastcall PostHidNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        int a3,
        unsigned __int64 a4)
{
  __int64 v4; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 *v10; // r9
  __int64 v11; // rax
  __int128 *v12; // r8
  __int64 v13; // rax
  __int128 *v14; // rdx
  __int64 v15; // rdx
  InputTransform *v17; // [rsp+78h] [rbp+27h] BYREF
  __int64 v18; // [rsp+80h] [rbp+2Fh] BYREF
  __int128 v19; // [rsp+88h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+47h]
  struct tagQ *v21; // [rsp+B8h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+77h] BYREF

  v22 = a3;
  v4 = *((_QWORD *)a1 + 4);
  if ( !v4 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v7 = *(_QWORD *)(v4 + 40);
  v17 = (InputTransform *)*((_QWORD *)a1 + 4);
  if ( *(char *)(v7 + 20) < 0 )
    return 1LL;
  if ( *(char *)(v7 + 19) < 0 )
    return 1LL;
  v8 = *(_QWORD *)(v4 + 16);
  v22 = 0;
  v18 = v8;
  v21 = *(struct tagQ **)(v8 + 424);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (__int64 *)&v21,
                        (__int64 *)&v17,
                        (struct tagTHREADINFO **)&v18,
                        0xFEu,
                        0LL,
                        &v22) )
    return 1LL;
  v9 = *((_QWORD *)v21 + 16);
  if ( v9 )
    v9 = *(_QWORD *)(v9 + 16);
  v10 = (__int128 *)gObjDummyLock;
  if ( v9 )
    v10 = (__int128 *)(v9 + 384);
  v11 = *((_QWORD *)v21 + 12);
  v12 = (__int128 *)gObjDummyLock;
  if ( v11 )
    v12 = (__int128 *)(v11 + 384);
  v13 = *((_QWORD *)v21 + 13);
  v14 = (__int128 *)gObjDummyLock;
  if ( v13 )
    v14 = (__int128 *)(v13 + 384);
  v20 = *((_QWORD *)&gpsiLock + 2);
  v20 = *((_QWORD *)v17 + 9);
  v19 = gpsiLock;
  v20 = *(_QWORD *)(v18 + 400);
  v20 = *((_QWORD *)v21 + 2);
  v20 = *((_QWORD *)v14 + 2);
  v20 = *((_QWORD *)v12 + 2);
  v20 = *((_QWORD *)v10 + 2);
  v19 = *(_OWORD *)((char *)v17 + 56);
  v19 = *(_OWORD *)(v18 + 384);
  v19 = *(_OWORD *)v21;
  v19 = *v14;
  v19 = *v12;
  v19 = *v10;
  v15 = a2 ? *(_QWORD *)a2 : 0LL;
  return (unsigned int)PostInputMessage(v21, v17, 0xFEu, a4, v15, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v22, v18) != 0;
}
