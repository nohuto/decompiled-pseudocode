/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F3910
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01F5200 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01F53A8 (xxxFreeDdeConv.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     HMUnlockObject @ 0x1C00DF140 (HMUnlockObject.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 v2; // rcx
  __int64 Prop; // rax
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  v2 = *((_QWORD *)a1 + 5);
  if ( !v2 )
    return 0LL;
  Prop = GetProp(v2, (unsigned __int16)atomDDETrack, 1LL);
  if ( !Prop )
    return 0LL;
  v4 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v4 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v5 = (__int64 *)((char *)a1 + 24);
  if ( v4 )
  {
    v11[0] = v4 + 24;
    v11[1] = *v5;
    HMAssignmentLock(v11);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 5);
    v7 = (unsigned __int16)atomDDETrack;
    if ( *v5 )
    {
      InternalSetProp(v6, (unsigned __int16)atomDDETrack, *v5, 1u);
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 120);
      if ( atomDDETrack == word_1C0317660 )
        *(_QWORD *)(*(_QWORD *)(v6 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v8, v7, 1LL);
    }
  }
  v9 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject((__int64)a1);
  return (struct tagDDECONV *)v9;
}
