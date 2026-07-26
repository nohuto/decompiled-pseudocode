/*
 * XREFs of ndisFDoDirectOidRequestInternal @ 0x1C006A6C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C008EB08 (ndisFInvokeDirectOidRequest.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *Parameter)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  KIRQL v4; // r15
  unsigned int v5; // ecx
  int v6; // ebp
  KIRQL v7; // dl
  KIRQL v8; // al
  char v9[4]; // [rsp+40h] [rbp-28h]

  v1 = Parameter[1];
  v3 = Parameter[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      39,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  v5 = *(_DWORD *)(v1 + 712);
  if ( v5 >= 0x4E20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v9 = *(_DWORD *)(v1 + 712);
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x28u,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        v1,
        v3,
        32,
        *(_DWORD *)v9);
    }
    v6 = -1073741670;
    v7 = v4;
LABEL_11:
    *(_QWORD *)(v1 + 152) = 0LL;
    goto LABEL_12;
  }
  *(_QWORD *)(v1 + 152) = 0LL;
  v7 = v4;
  if ( (*(_DWORD *)(v1 + 56) & 0x10000) == 0 )
  {
    *(_DWORD *)(v1 + 712) = v5 + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v4);
    *(_DWORD *)(v3 + 88) |= 0x20000u;
    v6 = ndisFInvokeDirectOidRequest(v1, v3);
    if ( v6 == 259 )
      goto LABEL_13;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
    --*(_DWORD *)(v1 + 712);
    v7 = v8;
    goto LABEL_11;
  }
  v6 = -1073676286;
LABEL_12:
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v7);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      41,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  *(_DWORD *)Parameter = v6;
}
