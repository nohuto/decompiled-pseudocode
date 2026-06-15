/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessageQueueItem@@III@Z @ 0x140017E10
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI55@Z @ 0x140017CFC (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolati.c)
 * Callees:
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCPAudioHistoryReader::RuntimeClassInitialize(
        CCPAudioHistoryReader *this,
        signed __int64 a2,
        __int64 a3,
        const GUID *a4,
        struct VolatileControlData *a5,
        struct SharedMessageQueueItem *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  _DWORD *v9; // r14
  struct VolatileControlData *v10; // rdx
  struct SharedMessageQueueItem *v12; // rdi
  int v13; // esi
  int v14; // r12d
  int v16; // r10d
  signed __int64 v17; // r8
  unsigned int v18; // edx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  __int64 v26; // r8
  double v27; // xmm0_8
  int v28; // eax
  int cData; // [rsp+28h] [rbp-A1h]
  unsigned int v30; // [rsp+38h] [rbp-91h] BYREF
  int v31; // [rsp+3Ch] [rbp-8Dh] BYREF
  CCPAudioHistoryReader *v32; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-81h] BYREF
  CCPAudioHistoryReader **v34; // [rsp+68h] [rbp-61h]
  int v35; // [rsp+70h] [rbp-59h]
  int v36; // [rsp+74h] [rbp-55h]
  char *v37; // [rsp+78h] [rbp-51h]
  int v38; // [rsp+80h] [rbp-49h]
  int v39; // [rsp+84h] [rbp-45h]
  unsigned int *v40; // [rsp+88h] [rbp-41h]
  int v41; // [rsp+90h] [rbp-39h]
  int v42; // [rsp+94h] [rbp-35h]
  int *v43; // [rsp+98h] [rbp-31h]
  int v44; // [rsp+A0h] [rbp-29h]
  int v45; // [rsp+A4h] [rbp-25h]
  char *v46; // [rsp+A8h] [rbp-21h]
  int v47; // [rsp+B0h] [rbp-19h]
  int v48; // [rsp+B4h] [rbp-15h]
  signed __int64 *v49; // [rsp+B8h] [rbp-11h]
  int v50; // [rsp+C0h] [rbp-9h]
  int v51; // [rsp+C4h] [rbp-5h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+37h]
  signed __int64 v53; // [rsp+110h] [rbp+47h] BYREF

  v53 = a2;
  v9 = (_DWORD *)((char *)this + 84);
  v10 = a5;
  v12 = a6;
  v13 = (int)a4;
  v14 = a8;
  *((_DWORD *)this + 21) = a7;
  *((_DWORD *)this + 23) = a9;
  *((_QWORD *)this + 7) = v10;
  *((_QWORD *)this + 8) = v12;
  *((_DWORD *)this + 22) = v14;
  v30 = *((_DWORD *)v10 + 2);
  v16 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
  v17 = v53;
  v31 = v16;
  if ( a3 != v53 )
  {
    if ( (unsigned int)dword_140085000 > 5 )
    {
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v34 = &v32;
      v40 = &v30;
      v43 = &v31;
      v32 = this;
      v35 = 8;
      v51 = 0;
      v46 = (char *)v12 + 64 * (unsigned __int64)v30 + 40;
      v49 = &v53;
      v37 = (char *)this + 84;
      v38 = 4;
      v41 = 4;
      v44 = 4;
      v47 = 8;
      v50 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_140085000, &unk_14006FDF7, 0LL, a4, 8u, &pData);
      v17 = v53;
      v16 = v31;
    }
    v18 = v30;
    v19 = *((_QWORD *)v12 + 8 * (unsigned __int64)v30 + 5);
    v20 = v19 + (v13 == 0 ? 0x989680 : 0);
    if ( v17 < v20 )
    {
      v21 = -2147024774;
      v22 = 95LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
        (const char *)v21,
        cData);
      return v21;
    }
    if ( !v13 && v19 < v20 )
    {
      do
        v18 = (v18 + 1) % *((_DWORD *)this + 23);
      while ( *((_QWORD *)v12 + 8 * (unsigned __int64)v18 + 5) < v20 );
    }
    while ( 1 )
    {
      if ( v18 == v16 )
      {
        v21 = -2147023728;
        v22 = 129LL;
        goto LABEL_6;
      }
      if ( *((_QWORD *)v12 + 8 * (unsigned __int64)v18 + 5) > v17 )
        break;
      v18 = (v18 + 1) % *((_DWORD *)this + 23);
    }
    if ( v18 )
      v24 = v18 - 1;
    else
      v24 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 18) = v24;
    if ( *((_QWORD *)v12 + 8 * (unsigned __int64)v24 + 5)
       + (unsigned int)(int)((double)*((int *)v12 + 16 * (unsigned __int64)v24 + 14) * 10000000.0 / (double)v14 + 0.5) <= v17 )
    {
      v24 = v18;
      *((_DWORD *)this + 18) = v18;
      v17 = *((_QWORD *)v12 + 8 * (unsigned __int64)v18 + 5);
      v53 = v17;
    }
    v25 = v24;
    v26 = v17 - *((_QWORD *)v12 + 8 * (unsigned __int64)v24 + 5);
    v27 = (double)(int)v26;
    if ( v26 < 0 )
      v27 = v27 + 1.844674407370955e19;
    *((_DWORD *)this + 20) = *v9 * (int)(v27 * (double)v14 / 10000000.0 + 0.5);
    if ( v24 == v16 )
    {
LABEL_25:
      v21 = -2147023728;
      v22 = 147LL;
      goto LABEL_6;
    }
    while ( *((_QWORD *)v12 + 8 * (unsigned __int64)v25 + 5) != a3 )
    {
      v25 = (v25 + 1) % *((_DWORD *)this + 23);
      if ( v25 == v16 )
        goto LABEL_25;
    }
    if ( v25 )
      v28 = v25 - 1;
    else
      v28 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 19) = v28;
  }
  return 0LL;
}
