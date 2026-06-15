/*
 * XREFs of ?GetNextDataPointer@CCPAudioHistoryReader@@UEAA_KPEAIPEAUAE_CURRENT_POSITION@@PEAW4APO_BUFFER_FLAGS@@@Z @ 0x140053FB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 */

__int64 __fastcall CCPAudioHistoryReader::GetNextDataPointer(
        CCPAudioHistoryReader *this,
        unsigned int *a2,
        struct AE_CURRENT_POSITION *a3,
        enum APO_BUFFER_FLAGS *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const GUID *v9; // r9
  unsigned int *v10; // r11
  __int64 v11; // rdi
  __int64 v12; // r10
  unsigned int v13; // r8d
  const GUID *v14; // r9
  int v15; // edx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+30h] [rbp-A9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-99h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-79h]
  int v26; // [rsp+68h] [rbp-71h]
  int v27; // [rsp+6Ch] [rbp-6Dh]
  unsigned int *v28; // [rsp+70h] [rbp-69h]
  int v29; // [rsp+78h] [rbp-61h]
  int v30; // [rsp+7Ch] [rbp-5Dh]
  char *v31; // [rsp+80h] [rbp-59h]
  int v32; // [rsp+88h] [rbp-51h]
  int v33; // [rsp+8Ch] [rbp-4Dh]
  char *v34; // [rsp+90h] [rbp-49h]
  int v35; // [rsp+98h] [rbp-41h]
  int v36; // [rsp+9Ch] [rbp-3Dh]
  __int64 v37; // [rsp+A0h] [rbp-39h]
  int v38; // [rsp+A8h] [rbp-31h]
  int v39; // [rsp+ACh] [rbp-2Dh]
  __int64 v40; // [rsp+B0h] [rbp-29h]
  int v41; // [rsp+B8h] [rbp-21h]
  int v42; // [rsp+BCh] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+C0h] [rbp-19h] BYREF
  _QWORD *v44; // [rsp+E0h] [rbp+7h]
  int v45; // [rsp+E8h] [rbp+Fh]
  int v46; // [rsp+ECh] [rbp+13h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10 = (unsigned int *)((char *)this + 72);
  v11 = 0LL;
  v12 = *((unsigned int *)this + 18);
  if ( (_DWORD)v12 == -1 )
  {
    if ( (unsigned int)dword_140088010 > 5 )
    {
      v46 = 0;
      v44 = v23;
      v45 = 8;
      v23[0] = this;
      TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_140072324, 0LL, v9, 3u, &v43);
    }
    *a2 = 0;
  }
  else
  {
    v13 = *((_DWORD *)this + 21);
    v14 = (const GUID *)*((_QWORD *)this + 8);
    if ( (_DWORD)v12 )
      v15 = *(_DWORD *)&v14[4 * (unsigned __int64)(unsigned int)(v12 - 1)].Data2
          + *((_DWORD *)this + 22) * *(_DWORD *)v14[4 * (unsigned __int64)(unsigned int)(v12 - 1) + 3].Data4;
    else
      v15 = *((_DWORD *)this + 20);
    v11 = *((_QWORD *)this + 7) + v13 + v15;
    v16 = v12 << 6;
    if ( v13 )
      v17 = *(_DWORD *)&v14[3].Data4[v16] - v13 / *((_DWORD *)this + 22);
    else
      v17 = *(_DWORD *)&v14[3].Data4[v16];
    *a2 = v17;
    v18 = *((_QWORD *)this + 8);
    v19 = (unsigned __int64)*v10 << 6;
    *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)(v19 + v18 + 16);
    *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v19 + v18 + 32);
    *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v19 + v18 + 48);
    *a4 = *(enum APO_BUFFER_FLAGS *)(((unsigned __int64)*v10 << 6) + *((_QWORD *)this + 8) + 8);
    if ( (unsigned int)dword_140088010 > 5 )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v25 = v23;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v20 = *v10;
      v34 = (char *)this + 76;
      v21 = *((_QWORD *)this + 8) + 40LL + (v20 << 6);
      v23[0] = this;
      v42 = 0;
      v40 = v21;
      v26 = 8;
      v28 = a2;
      v31 = (char *)this + 72;
      v37 = v11;
      v41 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_1400722BB, 0LL, v14, 8u, &pData);
    }
    *((_DWORD *)this + 21) = 0;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
