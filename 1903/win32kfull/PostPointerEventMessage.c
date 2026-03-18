/*
 * XREFs of PostPointerEventMessage @ 0x1C01EF880
 * Callers:
 *     PostDeviceNotification @ 0x1C010DA04 (PostDeviceNotification.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C01EF840 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C01EF860 (PostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0025940 (AdjustPwndPtiPqForDelegation.c)
 *     PHIDTtoPT @ 0x1C01EF808 (PHIDTtoPT.c)
 */

void __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v9; // r10
  struct _LIST_ENTRY *v10; // r8
  BOOL v11; // ecx
  BOOL v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // r10
  __int64 v16; // rax
  __int128 *v17; // r9
  __int64 v18; // rax
  __int128 *v19; // r8
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  struct tagQ *v34; // [rsp+70h] [rbp-90h] BYREF
  InputTransform *v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int128 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int128 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int128 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int128 v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+10h]
  __int128 v49; // [rsp+118h] [rbp+18h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+178h] [rbp+78h] BYREF

  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
    a3 = (int)PHIDTtoPT(a1);
  for ( ; Flink != &gPointerDeviceClients; Flink = Flink->Flink )
  {
    v9 = Flink[-1].Flink;
    v10 = v9[1].Flink;
    if ( !a4 )
    {
      if ( LODWORD(Flink[-1].Blink) && v10[28].Flink == (struct _LIST_ENTRY *)grpdeskRitInput )
        PostMessage((int)Flink[-1].Flink, a2, a3, *(_QWORD *)(a1 + 736));
      continue;
    }
    v11 = 0;
    if ( a2 == 568 )
      v11 = a3 - 1 <= 1;
    if ( v11 )
    {
      v12 = v10[28].Flink[2].Blink->Flink == (struct _LIST_ENTRY *)gSessionId;
    }
    else
    {
      if ( v10[28].Flink == (struct _LIST_ENTRY *)grpdeskRitInput )
        goto LABEL_12;
      v12 = 0;
    }
    if ( v12 )
    {
LABEL_12:
      v13 = (__int64)v9[1].Flink;
      v51 = 0;
      v36 = v13;
      v35 = (InputTransform *)v9;
      v34 = *(struct tagQ **)(v13 + 424);
      if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                           (__int64 *)&v34,
                           (__int64 *)&v35,
                           (struct tagTHREADINFO **)&v36,
                           a2,
                           0LL,
                           &v51) )
      {
        v14 = *((_QWORD *)v34 + 16);
        if ( v14 )
          v14 = *(_QWORD *)(v14 + 16);
        v15 = (__int128 *)gObjDummyLock;
        if ( v14 )
          v15 = (__int128 *)(v14 + 384);
        v16 = *((_QWORD *)v34 + 12);
        v17 = (__int128 *)gObjDummyLock;
        if ( v16 )
          v17 = (__int128 *)(v16 + 384);
        v18 = *((_QWORD *)v34 + 13);
        v19 = (__int128 *)gObjDummyLock;
        if ( v18 )
          v19 = (__int128 *)(v18 + 384);
        v20 = *((_QWORD *)&gpsiLock + 2);
        v37 = gpsiLock;
        v21 = *(_OWORD *)((char *)v35 + 56);
        v38 = v20;
        v22 = *((_QWORD *)v35 + 9);
        v39 = v21;
        v23 = *(_OWORD *)(v36 + 384);
        v40 = v22;
        v24 = *(_QWORD *)(v36 + 400);
        v25 = *(_QWORD *)(a1 + 736);
        v41 = v23;
        v26 = *(_OWORD *)v34;
        v42 = v24;
        v27 = *((_QWORD *)v34 + 2);
        v43 = v26;
        v28 = *v19;
        v44 = v27;
        v29 = *((_QWORD *)v19 + 2);
        v45 = v28;
        v30 = *v17;
        v46 = v29;
        v31 = *((_QWORD *)v17 + 2);
        v47 = v30;
        v32 = *v15;
        v48 = v31;
        v33 = *((_QWORD *)v15 + 2);
        v49 = v32;
        v50 = v33;
        PostInputMessage(v34, v35, a2, a3, v25, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v51, v36);
      }
    }
  }
}
