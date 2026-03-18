/*
 * XREFs of ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C2560
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     zzzPostInertiaMessage @ 0x1C0226BCC (zzzPostInertiaMessage.c)
 */

void __fastcall xxxInertiaPTPTimerProc(struct tagWND *a1, __int64 a2)
{
  struct DEVICEINFO *v2; // rax
  struct CPTPProcessor *Processor; // rax
  char *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  _OWORD v14[9]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+C0h] [rbp-28h]
  __int64 v16; // [rsp+D0h] [rbp-18h]

  LOBYTE(a2) = 19;
  v2 = (struct DEVICEINFO *)HMValidateHandleNoSecure((unsigned __int64)ghdevTouchpad, a2);
  Processor = CPTPProcessorFactory::GetProcessor(v2);
  if ( Processor )
  {
    v4 = (char *)Processor + 176;
    v5 = *((_OWORD *)v4 + 1);
    v14[0] = *(_OWORD *)v4;
    v6 = *((_OWORD *)v4 + 2);
    v14[1] = v5;
    v7 = *((_OWORD *)v4 + 3);
    v14[2] = v6;
    v8 = *((_OWORD *)v4 + 4);
    v14[3] = v7;
    v9 = *((_OWORD *)v4 + 5);
    v14[4] = v8;
    v10 = *((_OWORD *)v4 + 6);
    v14[5] = v9;
    v11 = *((_OWORD *)v4 + 8);
    v14[6] = v10;
    v14[7] = *((_OWORD *)v4 + 7);
    v12 = *((_OWORD *)v4 + 9);
    v13 = *((_QWORD *)v4 + 20);
    v14[8] = v11;
    v15 = v12;
    v16 = v13;
    EtwTraceTouchpadStopInertiaQueued();
    if ( (v16 & 1) != 0 )
      zzzPostInertiaMessage(571LL, v14, v15, *((_QWORD *)&v15 + 1), 1);
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
