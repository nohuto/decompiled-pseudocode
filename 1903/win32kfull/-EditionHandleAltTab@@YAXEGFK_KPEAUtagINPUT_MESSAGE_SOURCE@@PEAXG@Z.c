/*
 * XREFs of ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C013CE70
 * Callers:
 *     <none>
 * Callees:
 *     SetNewForegroundQueue @ 0x1C0013A60 (SetNewForegroundQueue.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HasHidTable @ 0x1C001E790 (HasHidTable.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0025940 (AdjustPwndPtiPqForDelegation.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     xxxCancelCoolSwitch @ 0x1C0130034 (xxxCancelCoolSwitch.c)
 */

void __fastcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 *v14; // rbx
  __int64 v15; // rax
  __int128 *v16; // r11
  __int64 v17; // rax
  __int128 *v18; // r10
  __int64 v19; // r9
  __int128 *v20; // rdx
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  ULONG_PTR v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // [rsp+78h] [rbp-39h] BYREF
  __int128 *v44; // [rsp+80h] [rbp-31h] BYREF
  __int64 v45; // [rsp+88h] [rbp-29h] BYREF
  __int64 v46; // [rsp+90h] [rbp-21h] BYREF
  __int64 v47; // [rsp+98h] [rbp-19h] BYREF
  ULONG_PTR v48; // [rsp+A0h] [rbp-11h]
  __int64 v49; // [rsp+A8h] [rbp-9h]
  __int128 v50; // [rsp+B0h] [rbp-1h]
  __int64 v51; // [rsp+C0h] [rbp+Fh]

  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v12 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v12)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 824LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 396LL) |= 0x80u;
        v44 = (__int128 *)gpqForeground;
        v46 = 0LL;
        v45 = 0LL;
        v43 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v44,
                             &v46,
                             (struct tagTHREADINFO **)&v45,
                             a8,
                             a6,
                             &v43) )
        {
          v13 = *((_QWORD *)v44 + 16);
          if ( v13 )
            v13 = *(_QWORD *)(v13 + 16);
          v14 = (__int128 *)gObjDummyLock;
          if ( v13 )
            v14 = (__int128 *)(v13 + 384);
          v15 = *((_QWORD *)v44 + 12);
          v16 = (__int128 *)gObjDummyLock;
          if ( v15 )
            v16 = (__int128 *)(v15 + 384);
          v17 = *((_QWORD *)v44 + 13);
          v18 = (__int128 *)gObjDummyLock;
          if ( v17 )
            v18 = (__int128 *)(v17 + 384);
          v19 = gObjDummyLock;
          if ( v45 )
            v19 = v45 + 384;
          v20 = (__int128 *)gObjDummyLock;
          if ( v46 )
            v20 = (__int128 *)(v46 + 56);
          v21 = *((_QWORD *)&gpsiLock + 2);
          v50 = gpsiLock;
          v22 = *v20;
          v51 = v21;
          v23 = *((_QWORD *)v20 + 2);
          v50 = v22;
          v24 = *(_OWORD *)v19;
          v51 = v23;
          v25 = *(_QWORD *)(v19 + 16);
          v50 = v24;
          v26 = *v44;
          v51 = v25;
          v27 = *((_QWORD *)v44 + 2);
          v50 = v26;
          v28 = *v18;
          v51 = v27;
          v29 = *((_QWORD *)v18 + 2);
          v50 = v28;
          v30 = *v16;
          v51 = v29;
          v31 = *((_QWORD *)v16 + 2);
          v50 = v30;
          v32 = *v14;
          v51 = v31;
          v33 = *((_QWORD *)v14 + 2);
          v50 = v32;
          v51 = v33;
          PostInputMessage(
            gpqForeground,
            0LL,
            a8,
            a1,
            ((a3 | a2) << 16) | 1,
            a4,
            0LL,
            a5,
            0,
            a6,
            (__int64)a7,
            0LL,
            v43,
            v45);
        }
      }
    }
    xxxCancelCoolSwitch();
    v34 = gspwndActivate;
    if ( gspwndActivate )
    {
      v35 = *(_QWORD *)(gspwndActivate + 16);
      if ( gpqForeground == *(_QWORD *)(v35 + 424) )
      {
        SetNewForegroundQueue(0LL);
        v35 = *(_QWORD *)(v34 + 16);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v35, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38);
      v47 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
      v48 = v34;
      HMLockObject(v34);
      xxxSetForegroundWindow2((struct tagWND *)v34, 0LL, 18);
      if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)v34, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v41, v40, v42);
      HMAssignmentUnlock(&gspwndActivate);
    }
  }
}
