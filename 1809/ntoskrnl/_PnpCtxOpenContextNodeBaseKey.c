/*
 * XREFs of _PnpCtxOpenContextNodeBaseKey @ 0x1408F703C
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x1406FB338 (PiDevCfgEnumDeviceKeys.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C8CAC (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  int CachedNodeBaseKey; // ebx
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v7 = *(_QWORD *)&PiPnpRtlCtx;
  v12 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
  if ( v8 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
  {
    return (unsigned int)-1073741772;
  }
  else
  {
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, (_QWORD *)(v8 - 16), a4, &v12);
    if ( CachedNodeBaseKey >= 0 )
    {
      v10 = SysCtxRegOpenKey(*(_QWORD *)(v7 + 224), v12, (__int64)&word_140767740, 0, 0xF003Fu, a7);
      if ( v10 == -1073741444 )
      {
        return (unsigned int)-1073741595;
      }
      else if ( v10 < 0 )
      {
        return (unsigned int)v10;
      }
    }
  }
  return (unsigned int)CachedNodeBaseKey;
}
