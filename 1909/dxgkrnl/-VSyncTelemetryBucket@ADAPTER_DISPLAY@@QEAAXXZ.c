/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0036270
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C0036640 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryBucket(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdi
  char v3; // r9
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // r10
  int v8; // edx
  const struct _TlgProvider_t *v9; // r11
  const GUID *v10; // r9
  int v11; // r10d
  const struct _TlgProvider_t *v12; // r11
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  void *v16; // rcx
  void *v17; // rcx
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  char *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  _DWORD *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  __int64 v42; // [rsp+108h] [rbp+0h]
  _DWORD v43[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int64 v46; // [rsp+128h] [rbp+20h]
  _DWORD v47[2]; // [rsp+130h] [rbp+28h] BYREF

  v2 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 3872LL), &LockHandle);
  if ( ++*((_DWORD *)this + 150) >= 0x384u || (v3 = 0, (unsigned int)(v2 - *((_DWORD *)this + 151)) > 0xE10) )
    v3 = 1;
  v4 = (_DWORD *)*((_QWORD *)this + 111);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 212);
    v6 = *((_DWORD *)this + 210);
    if ( v5 == v6 )
    {
      if ( !*((_DWORD *)this + 204) )
        goto LABEL_14;
      if ( !v6 )
      {
        *v4 &= 0xFC03FFFF;
        **((_DWORD **)this + 111) ^= (*((_DWORD *)this + 150) ^ **((_DWORD **)this + 111)) & 0x3FFFF;
        *((_DWORD *)this + 211) = 1;
        goto LABEL_14;
      }
      v7 = *((unsigned int *)this + 211);
      v8 = v4[(unsigned int)(v7 - 1)];
      if ( (v8 & 0x3FC0000) == 0 )
      {
        v4[(unsigned int)(v7 - 1)] = v8 ^ (v8 ^ (v8 + 1)) & 0x3FFFF;
        goto LABEL_14;
      }
      v4[v7] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 111) + 4LL * *((unsigned int *)this + 211)) = *(_DWORD *)(*((_QWORD *)this + 111)
                                                                                             + 4LL
                                                                                             * *((unsigned int *)this
                                                                                               + 211)) & 0xFFFC0000 | 1;
    }
    else
    {
      v4[*((unsigned int *)this + 211)] ^= (v4[*((unsigned int *)this + 211)] ^ ((v6 - v5) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 111) + 4LL * *((unsigned int *)this + 211)) ^= (*((_DWORD *)this + 213) ^ *(_DWORD *)(*((_QWORD *)this + 111) + 4LL * *((unsigned int *)this + 211))) & 0x3FFFF;
      *((_QWORD *)this + 106) = *((unsigned int *)this + 210);
    }
    ++*((_DWORD *)this + 211);
  }
LABEL_14:
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 210) || *((_DWORD *)this + 209))
      && TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000002000uLL)
      && hProvider > 5u
      && TlgKeywordOn(v9, 0x400000002000uLL) )
    {
      v18 = 65538;
      v26 = &v18;
      v40 = v43;
      v13 = *((_QWORD *)this + 111);
      v28 = (char *)&v18 + 2;
      LOWORD(v19) = *((_WORD *)this + 414);
      v30 = &v19;
      v20 = v2 - *((_DWORD *)this + 151);
      v32 = &v20;
      v34 = &v21;
      v22 = *((_DWORD *)this + 209);
      v36 = &v22;
      v14 = 2 * *((_DWORD *)this + 214);
      v27 = 2LL;
      v23 = v14;
      v38 = &v23;
      v42 = *((_QWORD *)this + 110);
      v29 = 2LL;
      v31 = 2LL;
      v33 = 4LL;
      v21 = v11;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 2LL;
      v43[0] = v42 != 0 ? 0x180 : 0;
      v43[1] = 0;
      if ( v13 )
        v15 = 4 * *((_DWORD *)this + 211);
      else
        v15 = 0;
      v45 = 2LL;
      v44 = v47;
      v46 = v13;
      v47[0] = v15;
      v47[1] = 0;
      TlgWrite(v12, &unk_1C0072A72, 0LL, v10, 0xDu, &pData);
    }
    v16 = (void *)*((_QWORD *)this + 110);
    if ( v16 )
      memset(v16, 0, 0x180uLL);
    v17 = (void *)*((_QWORD *)this + 111);
    if ( v17 )
      memset(v17, 0, 4LL * *((unsigned int *)this + 211));
    ++*((_DWORD *)this + 207);
    *(_QWORD *)((char *)this + 836) = 0LL;
    *(_QWORD *)((char *)this + 844) = 0LL;
    *((_DWORD *)this + 150) = 0;
    *((_DWORD *)this + 151) = v2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
