/*
 * XREFs of PsmHostStateNotification2 @ 0x180015880
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerIsSetForThread @ 0x180015B0C (CempLockTrackerIsSetForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180037A14 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

int __fastcall PsmHostStateNotification2(
        _BYTE *Src,
        __int64 a2,
        const WCHAR *a3,
        int *a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  __int64 v10; // r9
  unsigned int v12; // r14d
  const GUID *v14; // r9
  __int64 v15; // r10
  int v16; // eax
  ULONG v17; // eax
  int result; // eax
  DWORD v19; // ebx
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v28; // [rsp+160h] [rbp+60h]
  int v29; // [rsp+168h] [rbp+68h]
  int v30; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  _BYTE *v32; // [rsp+180h] [rbp+80h]
  int v33; // [rsp+188h] [rbp+88h]
  int v34; // [rsp+18Ch] [rbp+8Ch]
  int *v35; // [rsp+190h] [rbp+90h]
  __int64 v36; // [rsp+198h] [rbp+98h]
  int *v37; // [rsp+1A0h] [rbp+A0h]
  __int64 v38; // [rsp+1A8h] [rbp+A8h]
  int *v39; // [rsp+1B0h] [rbp+B0h]
  __int64 v40; // [rsp+1B8h] [rbp+B8h]
  __int64 v41; // [rsp+1C0h] [rbp+C0h]
  __int64 v42; // [rsp+1C8h] [rbp+C8h]
  int *v43; // [rsp+1D0h] [rbp+D0h]
  __int64 v44; // [rsp+1D8h] [rbp+D8h]

  v8 = 1;
  v10 = 0LL;
  v12 = a2;
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    TlgCreateWsz(&pDesc, a3);
    v16 = 15;
    if ( Src[1] <= 0xFu )
      v16 = (unsigned __int8)Src[1];
    v32 = Src;
    v33 = 4 * v16 + 8;
    v35 = (int *)&v20;
    v21 = a6;
    v37 = &v21;
    v22 = *a4;
    v39 = &v22;
    v43 = &v23;
    v34 = (int)v14;
    v20 = v12;
    v36 = v15;
    v38 = v15;
    v40 = v15;
    v41 = a5;
    v42 = 8LL;
    v23 = a8;
    v44 = v15;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800843E1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v28 = &unk_1800843EC;
    UserData.Reserved = 2;
    v29 = 109;
    v30 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, v14, 9u, &UserData);
  }
  if ( (unsigned int)CempLockTrackerIsSetForThread(Src, a2, a3, v10) )
    v8 = 0;
  else
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  memset_0(v25, 0, 0x44uLL);
  v17 = RtlLengthSid(Src);
  memcpy_0(v25, Src, v17);
  result = ModernResourceEnforcer::ApplicationStateNotification(*((_QWORD *)RmSvcGlobals + 5), v25, v12, a3, a4, a5, a6);
  if ( v8 )
  {
    v19 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      return TlsSetValue(v19, 0LL);
    }
  }
  return result;
}
