/*
 * XREFs of ?GetNextDataPointer@CCPAudioHistoryReader@@UEAA_KPEAIPEAUAE_CURRENT_POSITION@@PEAW4APO_BUFFER_FLAGS@@@Z @ 0x140051B30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

__int64 __fastcall CCPAudioHistoryReader::GetNextDataPointer(
        CCPAudioHistoryReader *this,
        unsigned int *a2,
        struct AE_CURRENT_POSITION *a3,
        enum APO_BUFFER_FLAGS *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const GUID *v9; // r9
  unsigned int *v10; // r8
  __int64 v11; // rdi
  _DWORD *v12; // r14
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  const GUID *v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  unsigned int *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  char *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  char *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v39; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10 = (unsigned int *)((char *)this + 72);
  v11 = 0LL;
  if ( *((_DWORD *)this + 18) == -1 )
  {
    if ( (unsigned int)dword_140086000 > 5 )
    {
      v21[0] = this;
      v40 = v21;
      v41 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_140086000, &unk_14006FE7D, 0LL, v9, 3u, &v39);
    }
    *a2 = 0;
  }
  else
  {
    v12 = (_DWORD *)((char *)this + 80);
    v13 = *((_QWORD *)this + 8);
    v14 = (unsigned __int64)*v10 << 6;
    v11 = *((_QWORD *)this + 7) + (unsigned int)(*((_DWORD *)this + 20) + *(_DWORD *)(v14 + v13 + 4));
    if ( *((_DWORD *)this + 20) )
      v15 = (const GUID *)(unsigned int)(*v12 / *((_DWORD *)this + 21));
    else
      v15 = 0LL;
    *a2 = *(_DWORD *)(v14 + v13 + 56) - (_DWORD)v15;
    v16 = *((_QWORD *)this + 8);
    v17 = (unsigned __int64)*v10 << 6;
    *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)(v17 + v16 + 16);
    *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v17 + v16 + 32);
    *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v17 + v16 + 48);
    *a4 = *(enum APO_BUFFER_FLAGS *)(((unsigned __int64)*v10 << 6) + *((_QWORD *)this + 8) + 8);
    if ( (unsigned int)dword_140086000 > 5 )
    {
      v18 = *((_QWORD *)this + 8);
      v19 = *v10;
      v23 = v21;
      v19 <<= 6;
      v21[0] = this;
      v24 = 8LL;
      v29 = v19 + v18 + 4;
      v33 = (char *)this + 76;
      v25 = a2;
      v37 = v19 + v18 + 40;
      v26 = 4LL;
      v27 = (char *)this + 80;
      v28 = 4LL;
      v30 = 4LL;
      v31 = (char *)this + 72;
      v32 = 4LL;
      v34 = 4LL;
      v35 = v11;
      v36 = 4LL;
      v38 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_140086000, &unk_14006FDEE, 0LL, v15, 0xAu, &pData);
    }
    *v12 = 0;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
