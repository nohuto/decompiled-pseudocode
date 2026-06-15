/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0PEAUVolatileControlData@@PEAUSharedMessageQueueItem@@IIII@Z @ 0x14005446C
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI444@Z @ 0x140053C68 (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAPEAUVolatileCo.c)
 * Callees:
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCPAudioHistoryReader::RuntimeClassInitialize(
        CCPAudioHistoryReader *this,
        unsigned __int64 a2,
        __int64 a3,
        const GUID *a4,
        struct SharedMessageQueueItem *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  _DWORD *v9; // rsi
  struct SharedMessageQueueItem *v10; // rdi
  int v12; // r15d
  unsigned __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v18; // edx
  __int64 i; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  double v23; // xmm1_8
  int v24; // eax
  CCPAudioHistoryReader *v25; // [rsp+30h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-71h] BYREF
  CCPAudioHistoryReader **v27; // [rsp+60h] [rbp-51h]
  int v28; // [rsp+68h] [rbp-49h]
  int v29; // [rsp+6Ch] [rbp-45h]
  char *v30; // [rsp+70h] [rbp-41h]
  int v31; // [rsp+78h] [rbp-39h]
  int v32; // [rsp+7Ch] [rbp-35h]
  unsigned __int8 *Data4; // [rsp+80h] [rbp-31h]
  int v34; // [rsp+88h] [rbp-29h]
  int v35; // [rsp+8Ch] [rbp-25h]
  unsigned __int8 *v36; // [rsp+90h] [rbp-21h]
  int v37; // [rsp+98h] [rbp-19h]
  int v38; // [rsp+9Ch] [rbp-15h]
  unsigned __int64 *v39; // [rsp+A0h] [rbp-11h]
  int v40; // [rsp+A8h] [rbp-9h]
  int v41; // [rsp+ACh] [rbp-5h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+37h]
  unsigned __int64 v43; // [rsp+F8h] [rbp+47h] BYREF

  v43 = a2;
  v9 = (_DWORD *)((char *)this + 88);
  v10 = a5;
  v12 = a8;
  *((_DWORD *)this + 20) = a6;
  *((_DWORD *)this + 22) = a7;
  *((_DWORD *)this + 24) = a9;
  *((_QWORD *)this + 8) = v10;
  *((_QWORD *)this + 7) = a4;
  *((_DWORD *)this + 23) = v12;
  if ( a3 == a2 )
    return 0LL;
  if ( (unsigned int)dword_140088010 > 5 )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v27 = &v25;
    Data4 = a4->Data4;
    v36 = &a4->Data4[4];
    v25 = this;
    v39 = &v43;
    v28 = 8;
    v30 = (char *)this + 88;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_14007220A, 0LL, a4, 7u, &pData);
    a4 = (const GUID *)*((_QWORD *)this + 7);
  }
  v14 = *((_QWORD *)v10 + 8 * (unsigned __int64)*(unsigned int *)a4->Data4 + 5) + 10000000LL;
  if ( v43 > v14 )
  {
    v18 = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL);
    for ( i = v18; *((_QWORD *)v10 + 8 * i + 5) <= v14; i = v18 )
      v18 = (v18 + 1) % *((_DWORD *)this + 24);
    while ( 1 )
    {
      if ( v18 == *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) )
      {
        v15 = -2147023728;
        v16 = 125LL;
        goto LABEL_6;
      }
      v20 = v43;
      if ( *((_QWORD *)v10 + 8 * (unsigned __int64)v18 + 5) > (signed __int64)v43 )
        break;
      v18 = (v18 + 1) % *((_DWORD *)this + 24);
    }
    if ( !v18 )
      v18 = *((_DWORD *)this + 24);
    v21 = v18 - 1;
    *((_DWORD *)this + 18) = v21;
    v22 = v20 - *((_QWORD *)v10 + 8 * v21 + 5);
    v23 = (double)(int)v22;
    if ( v22 < 0 )
      v23 = v23 + 1.844674407370955e19;
    *((_DWORD *)this + 21) = *v9 * (int)(v23 * (double)v12 / 10000000.0 + 0.5);
    while ( 1 )
    {
      if ( (_DWORD)v21 == *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) )
      {
        v15 = -2147023728;
        v16 = 143LL;
        goto LABEL_6;
      }
      if ( *((_QWORD *)v10 + 8 * (unsigned __int64)(unsigned int)v21 + 5) == a3 )
        break;
      LODWORD(v21) = (unsigned int)(v21 + 1) % *((_DWORD *)this + 24);
    }
    if ( (_DWORD)v21 )
      v24 = v21 - 1;
    else
      v24 = *((_DWORD *)this + 24) - 1;
    *((_DWORD *)this + 19) = v24;
    return 0LL;
  }
  v15 = -2147024774;
  v16 = 102LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
    (const char *)v15);
  return v15;
}
