/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01CF298
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01D0AC4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01D0C2C (xxxFreeDdeConv.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00DAD2C (HMUnlockObject.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 v2; // rcx
  __int64 Prop; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  v2 = *((_QWORD *)a1 + 5);
  if ( !v2 )
    return 0LL;
  Prop = RealGetProp(*(_QWORD *)(v2 + 120), (unsigned __int16)atomDDETrack, 1LL);
  if ( !Prop )
    return 0LL;
  v5 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v5 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v6 = (_QWORD *)((char *)a1 + 24);
  if ( v5 )
  {
    v11[0] = v5 + 24;
    v11[1] = *v6;
    HMAssignmentLock(v11);
  }
  else
  {
    v7 = (_QWORD *)(*((_QWORD *)a1 + 5) + 120LL);
    if ( *v6 )
      RealInternalSetProp(v7, (unsigned __int16)atomDDETrack, *v6, 1LL);
    else
      RealInternalRemoveProp(*v7, (unsigned __int16)atomDDETrack, 1LL);
  }
  v8 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject((__int64)a1, v9, v10);
  return (struct tagDDECONV *)v8;
}
