/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18000D260
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000D760 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // r14
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  const GUID *v17; // r8
  const GUID *v18; // r9
  unsigned int v19; // ebx
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned int v22; // r15d
  __int64 v23; // rcx
  int v24; // eax
  const GUID *v25; // r8
  const GUID *v26; // r9
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  struct tagPROPVARIANT v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _tagpropertykey v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+74h] [rbp-8Ch]
  __int128 v34; // [rsp+84h] [rbp-7Ch]
  __int128 v35; // [rsp+94h] [rbp-6Ch]
  __int128 v36; // [rsp+A4h] [rbp-5Ch]
  __int64 v37; // [rsp+B4h] [rbp-4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  const char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v11 = v5;
  v12 = v5 / 0x342;
  v13 = v11 - 834 * v12;
  if ( !a2 || v13 )
  {
    v19 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v40 = 52LL;
      v39 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      v29 = 466;
      v41 = &v29;
      v42 = 4LL;
      v28 = -2147024809;
      v43 = &v28;
      v44 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v14 = *((_OWORD *)a2 + 1);
    v33 = *(_OWORD *)a2;
    *(_OWORD *)&v30.vt = 0x41u;
    v15 = *((_OWORD *)a2 + 2);
    v30.bstrblobVal.pData = (BYTE *)&v32;
    v35 = v15;
    v32 = 1509949441;
    v37 = *((_QWORD *)a2 + 8);
    v30.lVal = 76;
    v34 = v14;
    v31.pid = 2;
    v16 = *((_OWORD *)a2 + 3);
    v31.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
    v36 = v16;
    v29 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
    v19 = v29;
    if ( v29 < 0 )
    {
      if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v40 = 52LL;
        v39 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
        v28 = 482;
        v41 = &v28;
        v42 = 4LL;
        v43 = &v29;
        v44 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v17, v18, 5u, &pData);
      }
    }
    else
    {
      v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
      v31.pid = 2;
      *(_QWORD *)&v30.vt = 2LL;
      *(_OWORD *)&v30.decVal.Lo32 = (unsigned __int16)v12;
      v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
      v19 = v28;
      if ( v28 < 0 )
      {
        if ( (unsigned int)dword_1801B53C0 > 2 )
        {
          v40 = 52LL;
          v39 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
          v29 = 489;
          v41 = &v29;
          v42 = 4LL;
          v43 = &v28;
          v44 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v20, v21, 5u, &pData);
        }
      }
      else if ( (_DWORD)v12 )
      {
        if ( a3 )
        {
          v22 = 0;
          while ( 1 )
          {
            *(_QWORD *)&v30.vt = 65LL;
            v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
            v30.hVal.QuadPart = 834LL;
            v31.pid = v22 + 2;
            v30.bstrblobVal.pData = (BYTE *)a3 + 834 * v22;
            v23 = *((_QWORD *)this + 13);
            v24 = v23
                ? (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v23 + 96LL))(
                    v23,
                    (char *)this + 112,
                    0LL,
                    &v31,
                    &v30)
                : (*(unsigned __int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
                    *((_QWORD *)this + 11),
                    &v31,
                    &v30);
            v28 = v24;
            v19 = v24;
            if ( v24 < 0 )
              break;
            if ( ++v22 >= (unsigned int)v12 )
              goto LABEL_14;
          }
          if ( (unsigned int)dword_1801B53C0 > 2 )
          {
            v40 = 52LL;
            v39 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
            v29 = 506;
            v41 = &v29;
            v42 = 4LL;
            v43 = &v28;
            v44 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v25, v26, 5u, &pData);
          }
        }
        else
        {
          v19 = -2147024809;
          if ( (unsigned int)dword_1801B53C0 > 2 )
          {
            v40 = 52LL;
            v39 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
            v29 = 493;
            v41 = &v29;
            v42 = 4LL;
            v28 = -2147024809;
            v43 = &v28;
            v44 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, v20, v21, 5u, &pData);
          }
        }
      }
      else
      {
LABEL_14:
        if ( !*((_DWORD *)this + 24) )
          (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
      }
    }
  }
  return v19;
}
