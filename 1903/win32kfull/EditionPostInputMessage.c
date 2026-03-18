/*
 * XREFs of EditionPostInputMessage @ 0x1C0117F60
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0025940 (AdjustPwndPtiPqForDelegation.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        InputTransform *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v16; // rax
  struct tagINPUT_MESSAGE_SOURCE *v17; // r14
  __int64 v18; // rax
  __int128 *v19; // r11
  __int64 v20; // rax
  __int128 *v21; // r10
  __int64 v22; // rax
  __int128 *v23; // r9
  char *v24; // r8
  __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  __int128 v34; // xmm0
  __int64 v35; // xmm1_8
  __int128 v36; // xmm0
  __int64 v37; // xmm1_8
  struct tagQ *v39; // [rsp+78h] [rbp-29h] BYREF
  __int64 v40; // [rsp+80h] [rbp-21h] BYREF
  __int128 v41; // [rsp+88h] [rbp-19h]
  __int64 v42; // [rsp+98h] [rbp-9h]
  int v43; // [rsp+C8h] [rbp+27h] BYREF
  InputTransform *v44; // [rsp+D0h] [rbp+2Fh] BYREF

  v44 = a2;
  v12 = *(_QWORD *)(a1 + 80);
  v13 = 0LL;
  v14 = a4;
  if ( *(char *)(*(_QWORD *)(v12 + 40) + 19LL) < 0 )
    return 0LL;
  if ( a3 - 512 > 0xE )
  {
    if ( a3 - 581 <= 0x12 )
    {
      v13 = a11;
      v44 = *(InputTransform **)(a1 + 80);
      if ( a11 )
        v13 = *(_QWORD *)(a11 + 8);
    }
  }
  else
  {
    v14 = (unsigned int)a4 & 0xFFFF0000;
    if ( a11 && *(_DWORD *)a11 == 2 )
      v13 = *(_QWORD *)(a11 + 8);
  }
  v16 = *(_QWORD *)(v12 + 16);
  v17 = a10;
  v43 = 0;
  v40 = v16;
  v39 = *(struct tagQ **)(v16 + 424);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (__int64 *)&v39,
                        (__int64 *)&v44,
                        (struct tagTHREADINFO **)&v40,
                        a3,
                        a10,
                        &v43) )
    return 0LL;
  v18 = *((_QWORD *)v39 + 16);
  if ( v18 )
    v18 = *(_QWORD *)(v18 + 16);
  v19 = (__int128 *)gObjDummyLock;
  if ( v18 )
    v19 = (__int128 *)(v18 + 384);
  v20 = *((_QWORD *)v39 + 12);
  v21 = (__int128 *)gObjDummyLock;
  if ( v20 )
    v21 = (__int128 *)(v20 + 384);
  v22 = *((_QWORD *)v39 + 13);
  v23 = (__int128 *)gObjDummyLock;
  if ( v22 )
    v23 = (__int128 *)(v22 + 384);
  v24 = (char *)gObjDummyLock;
  if ( v44 )
    v24 = (char *)v44 + 56;
  v25 = *((_QWORD *)&gpsiLock + 2);
  v41 = gpsiLock;
  v26 = *(_OWORD *)v24;
  v42 = v25;
  v27 = *((_QWORD *)v24 + 2);
  v41 = v26;
  v28 = *(_OWORD *)(v40 + 384);
  v42 = v27;
  v29 = *(_QWORD *)(v40 + 400);
  v41 = v28;
  v30 = *(_OWORD *)v39;
  v42 = v29;
  v31 = *((_QWORD *)v39 + 2);
  v41 = v30;
  v32 = *v23;
  v42 = v31;
  v33 = *((_QWORD *)v23 + 2);
  v41 = v32;
  v34 = *v21;
  v42 = v33;
  v35 = *((_QWORD *)v21 + 2);
  v41 = v34;
  v36 = *v19;
  v42 = v35;
  v37 = *((_QWORD *)v19 + 2);
  v41 = v36;
  v42 = v37;
  return PostInputMessage(v39, v44, a3, v14, a5, a6, a7, a8, a9, v17, v13, a12, v43, v40);
}
