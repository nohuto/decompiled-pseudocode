/*
 * XREFs of ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x18003F670
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioStateIO::Load(SpatialAudioStateIO *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int v6; // edi
  _OWORD *v8; // rax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h]
  _OWORD *v13; // [rsp+48h] [rbp-31h]
  __int128 v14; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+60h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  const char *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  pvar = 0LL;
  v12 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 66);
  v13 = 0LL;
  v15 = 2;
  v3 = *v2;
  v14 = PKEY_SpatialAudio_Endpoint_State;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, PROPVARIANT *))(v3 + 40))(v2, &v14, &pvar);
  v6 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v18 = 26LL;
      v17 = "SpatialAudioStateIO::Load";
      v19 = &v9;
      v21 = &v10;
      v9 = 28;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v4, v5, 5u, &pData);
    }
  }
  else if ( (_WORD)pvar != 65
         || (_DWORD)v12 != 24
         || (v8 = v13,
             *((_OWORD *)this + 34) = *v13,
             *((_QWORD *)this + 70) = *((_QWORD *)v8 + 2),
             *((int *)this + 136) >= 4) )
  {
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
  }
  PropVariantClear(&pvar);
  return v6;
}
