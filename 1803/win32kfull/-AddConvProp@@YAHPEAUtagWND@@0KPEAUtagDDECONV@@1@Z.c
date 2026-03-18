/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01CEBEC
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01CF060 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddConvProp(
        struct tagWND *a1,
        struct tagWND *a2,
        int a3,
        struct tagDDECONV *a4,
        struct tagDDECONV *a5)
{
  __int64 v9; // rdx
  __int64 Prop; // rax
  __int128 v12; // [rsp+28h] [rbp-41h]
  __int128 v13; // [rsp+38h] [rbp-31h]
  __int128 v14; // [rsp+48h] [rbp-21h]
  __int128 v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+68h] [rbp-1h] BYREF
  __int128 v17; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v18; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v19; // [rsp+98h] [rbp+2Fh] BYREF

  *(_QWORD *)&v12 = (char *)a4 + 24;
  *((_QWORD *)&v12 + 1) = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomDDETrack, 1LL);
  v16 = v12;
  HMAssignmentLock(&v16);
  *((_QWORD *)&v13 + 1) = a1;
  *(_QWORD *)&v13 = (char *)a4 + 40;
  v17 = v13;
  HMAssignmentLock(&v17);
  *((_QWORD *)&v14 + 1) = a2;
  *(_QWORD *)&v14 = (char *)a4 + 48;
  v18 = v14;
  HMAssignmentLock(&v18);
  *(_QWORD *)&v15 = (char *)a4 + 32;
  *((_QWORD *)&v15 + 1) = a5;
  v19 = v15;
  HMAssignmentLock(&v19);
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  v9 = (unsigned __int16)atomDDEImp;
  *((_DWORD *)a4 + 20) = a3;
  if ( (a3 & 1) == 0 )
    a2 = a1;
  Prop = RealGetProp(*((_QWORD *)a2 + 15), v9, 1LL);
  if ( Prop )
    ++*(_WORD *)(Prop + 90);
  *((_QWORD *)a4 + 11) = Prop;
  _InterlockedAdd((volatile signed __int32 *)a4 + 2, 1u);
  RealInternalSetProp((char *)a1 + 120, (unsigned __int16)atomDDETrack, a4, 1LL);
  return 1LL;
}
