/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0030934
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C0030D00 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0005A4C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
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
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 3840LL), &LockHandle);
  if ( ++*((_DWORD *)this + 124) >= 0x384u || (v3 = 0, (unsigned int)(v2 - *((_DWORD *)this + 125)) > 0xE10) )
    v3 = 1;
  v4 = (_DWORD *)*((_QWORD *)this + 98);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 186);
    v6 = *((_DWORD *)this + 184);
    if ( v5 == v6 )
    {
      if ( !v6 )
      {
        *v4 &= 0xFC03FFFF;
        **((_DWORD **)this + 98) ^= (**((_DWORD **)this + 98) ^ *((_DWORD *)this + 124)) & 0x3FFFF;
        *((_DWORD *)this + 185) = 1;
        goto LABEL_13;
      }
      v7 = *((unsigned int *)this + 185);
      v8 = v4[(unsigned int)(v7 - 1)];
      if ( (v8 & 0x3FC0000) == 0 )
      {
        v4[(unsigned int)(v7 - 1)] = v8 ^ (v8 ^ (v8 + 1)) & 0x3FFFF;
        goto LABEL_13;
      }
      v4[v7] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 98) + 4LL * *((unsigned int *)this + 185)) = *(_DWORD *)(*((_QWORD *)this + 98)
                                                                                            + 4LL
                                                                                            * *((unsigned int *)this
                                                                                              + 185)) & 0xFFFC0000 | 1;
    }
    else
    {
      v4[*((unsigned int *)this + 185)] ^= (v4[*((unsigned int *)this + 185)] ^ ((v6 - v5) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 98) + 4LL * *((unsigned int *)this + 185)) ^= (*((_DWORD *)this + 187) ^ *(_DWORD *)(*((_QWORD *)this + 98) + 4LL * *((unsigned int *)this + 185))) & 0x3FFFF;
      *((_QWORD *)this + 93) = *((unsigned int *)this + 184);
    }
    ++*((_DWORD *)this + 185);
  }
LABEL_13:
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 184) || *((_DWORD *)this + 183))
      && TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000002000uLL)
      && hProvider > 5u
      && TlgKeywordOn(v9, 0x400000002000uLL) )
    {
      v18 = 65537;
      v26 = &v18;
      v40 = v43;
      v13 = *((_QWORD *)this + 98);
      v28 = (char *)&v18 + 2;
      LOWORD(v19) = *((_WORD *)this + 362);
      v30 = &v19;
      v20 = v2 - *((_DWORD *)this + 125);
      v32 = &v20;
      v34 = &v21;
      v22 = *((_DWORD *)this + 183);
      v36 = &v22;
      v14 = 2 * *((_DWORD *)this + 188);
      v27 = 2LL;
      v23 = v14;
      v38 = &v23;
      v42 = *((_QWORD *)this + 97);
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
        v15 = 4 * *((_DWORD *)this + 185);
      else
        v15 = 0;
      v45 = 2LL;
      v44 = v47;
      v46 = v13;
      v47[0] = v15;
      v47[1] = 0;
      TlgWrite(v12, &unk_1C006A35D, 0LL, v10, 0xDu, &pData);
    }
    v16 = (void *)*((_QWORD *)this + 97);
    if ( v16 )
      memset(v16, 0, 0x180uLL);
    v17 = (void *)*((_QWORD *)this + 98);
    if ( v17 )
      memset(v17, 0, 4LL * *((unsigned int *)this + 185));
    ++*((_DWORD *)this + 181);
    *(_QWORD *)((char *)this + 732) = 0LL;
    *(_QWORD *)((char *)this + 740) = 0LL;
    *((_DWORD *)this + 124) = 0;
    *((_DWORD *)this + 125) = v2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
