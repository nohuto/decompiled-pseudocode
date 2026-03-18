/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F3254
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01F36BC (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
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
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v12 = (char *)a4 + 24;
  *((_QWORD *)&v12 + 1) = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
  v13 = v12;
  HMAssignmentLock(&v13);
  *((_QWORD *)&v12 + 1) = a1;
  *(_QWORD *)&v12 = (char *)a4 + 40;
  v14 = v12;
  HMAssignmentLock(&v14);
  *((_QWORD *)&v12 + 1) = a2;
  *(_QWORD *)&v12 = (char *)a4 + 48;
  v15 = v12;
  HMAssignmentLock(&v15);
  *(_QWORD *)&v12 = (char *)a4 + 32;
  *((_QWORD *)&v12 + 1) = a5;
  HMAssignmentLock(&v12);
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  v9 = (unsigned __int16)atomDDEImp;
  *((_DWORD *)a4 + 20) = a3;
  if ( (a3 & 1) == 0 )
    a2 = a1;
  Prop = GetProp((__int64)a2, v9, 1LL);
  if ( Prop )
    ++*(_WORD *)(Prop + 90);
  *((_QWORD *)a4 + 11) = Prop;
  _InterlockedAdd((volatile signed __int32 *)a4 + 2, 1u);
  InternalSetProp((__int64)a1, (unsigned __int16)atomDDETrack, (__int64)a4, 1u);
  return 1LL;
}
