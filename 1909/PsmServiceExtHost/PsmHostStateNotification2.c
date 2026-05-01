/*
 * XREFs of PsmHostStateNotification2 @ 0x180015420
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerIsSetForThread @ 0x1800156DC (CempLockTrackerIsSetForThread.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800341DC (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

int __fastcall PsmHostStateNotification2(
        _BYTE *Src,
        unsigned int a2,
        const WCHAR *a3,
        int *a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  __int64 v13; // r9
  int v14; // eax
  DWORD v15; // edi
  ULONG v16; // eax
  int result; // eax
  DWORD v18; // ebx
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v22[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v27; // [rsp+170h] [rbp+70h]
  int v28; // [rsp+178h] [rbp+78h]
  int v29; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF
  _BYTE *v31; // [rsp+190h] [rbp+90h]
  int v32; // [rsp+198h] [rbp+98h]
  int v33; // [rsp+19Ch] [rbp+9Ch]
  int *v34; // [rsp+1A0h] [rbp+A0h]
  __int64 v35; // [rsp+1A8h] [rbp+A8h]
  int *v36; // [rsp+1B0h] [rbp+B0h]
  __int64 v37; // [rsp+1B8h] [rbp+B8h]
  int *v38; // [rsp+1C0h] [rbp+C0h]
  __int64 v39; // [rsp+1C8h] [rbp+C8h]
  __int64 v40; // [rsp+1D0h] [rbp+D0h]
  __int64 v41; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v42; // [rsp+1E0h] [rbp+E0h]
  __int64 v43; // [rsp+1E8h] [rbp+E8h]

  v8 = 1;
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    TlgCreateWsz(&pDesc, a3);
    v14 = 15;
    if ( Src[1] <= 0xFu )
      v14 = (unsigned __int8)Src[1];
    v31 = Src;
    v32 = 4 * v14 + 8;
    v34 = (int *)&v19;
    v20 = a6;
    v36 = &v20;
    v21 = *a4;
    v38 = &v21;
    v22[0] = a8;
    v42 = v22;
    v33 = 0;
    v19 = a2;
    v35 = v13;
    v37 = v13;
    v39 = v13;
    v40 = a5;
    v41 = 8LL;
    v43 = v13;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v27 = &unk_18009238C;
    UserData.Reserved = 2;
    v28 = 109;
    v29 = 1;
    v22[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v8 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v15 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v15, TlsValue);
    }
  }
  memset_0(v24, 0, 0x44uLL);
  v16 = RtlLengthSid(Src);
  memcpy_0(v24, Src, v16);
  result = ModernResourceEnforcer::ApplicationStateNotification(*((_QWORD *)RmSvcGlobals + 5), v24, a2, a3, a4, a5, a6);
  if ( v8 )
  {
    v18 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      return TlsSetValue(v18, 0LL);
    }
  }
  return result;
}
