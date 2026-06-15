/*
 * XREFs of ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x140057D40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddAudioHistoryPacket(
        CCrossProcessServerOutputEndpoint *this,
        int a2,
        struct AE_CURRENT_POSITION *a3,
        enum APO_BUFFER_FLAGS a4,
        void *Src)
{
  __int64 v5; // rax
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // edi
  CCrossProcessBaseEndpoint *v12; // rcx
  __int64 v13; // rdx
  const GUID *v15; // r9
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // edi
  __int32 v19; // r14d
  void *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned int v23; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-8Dh] BYREF
  int v25; // [rsp+38h] [rbp-89h] BYREF
  char *v26; // [rsp+40h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-71h] BYREF
  char **v28; // [rsp+70h] [rbp-51h]
  int v29; // [rsp+78h] [rbp-49h]
  int v30; // [rsp+7Ch] [rbp-45h]
  int *v31; // [rsp+80h] [rbp-41h]
  int v32; // [rsp+88h] [rbp-39h]
  int v33; // [rsp+8Ch] [rbp-35h]
  char *v34; // [rsp+90h] [rbp-31h]
  int v35; // [rsp+98h] [rbp-29h]
  int v36; // [rsp+9Ch] [rbp-25h]
  unsigned int *v37; // [rsp+A0h] [rbp-21h]
  int v38; // [rsp+A8h] [rbp-19h]
  int v39; // [rsp+ACh] [rbp-15h]
  __int64 v40; // [rsp+B0h] [rbp-11h]
  int v41; // [rsp+B8h] [rbp-9h]
  int v42; // [rsp+BCh] [rbp-5h]
  unsigned int *v43; // [rsp+C0h] [rbp-1h]
  int v44; // [rsp+C8h] [rbp+7h]
  int v45; // [rsp+CCh] [rbp+Bh]
  HNSTIME *p_hnsQPCPosition; // [rsp+D0h] [rbp+Fh]
  int v47; // [rsp+D8h] [rbp+17h]
  int v48; // [rsp+DCh] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v5 = *((_QWORD *)this - 52);
  v25 = a2;
  if ( *(_DWORD *)(v5 + 180) == -1 )
    _InterlockedExchange(
      (volatile __int32 *)(*((_QWORD *)this - 52) + 180LL),
      *(_DWORD *)(*((_QWORD *)this - 51) + 160LL));
  v9 = *((_QWORD *)this - 52);
  v23 = *(_DWORD *)(v9 + 188);
  v10 = *(_DWORD *)(v9 + 184);
  v11 = *(_DWORD *)(*((_QWORD *)this - 51) + 140LL);
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)v23, v23, v11) )
  {
    v13 = 714LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpserveroutputendpoint.cpp",
      (const char *)0x887C0045LL);
    return 2289827909LL;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(v12, v10, v11) )
  {
    v13 = 715LL;
    goto LABEL_5;
  }
  v15 = (const GUID *)*((unsigned int *)this - 100);
  if ( v23 )
  {
    v17 = *(_DWORD *)(((unsigned __int64)(v23 - 1) << 6) + *((_QWORD *)this - 45) + 4)
        + (_DWORD)v15 * *(_DWORD *)(((unsigned __int64)(v23 - 1) << 6) + *((_QWORD *)this - 45) + 56);
    v16 = *((_QWORD *)this - 51);
  }
  else
  {
    v16 = *((_QWORD *)this - 51);
    v17 = *(_DWORD *)(v16 + 164);
  }
  v18 = (_DWORD)v15 * v25;
  v24 = v17;
  if ( v17 + (_DWORD)v15 * v25 <= *(_DWORD *)(v16 + 168) && a4 )
  {
    v19 = v23 + 1;
    if ( (unsigned int)dword_140088010 > 5 )
    {
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v26 = (char *)this - 480;
      v28 = &v26;
      v31 = &v25;
      v37 = &v24;
      v43 = &v23;
      p_hnsQPCPosition = &a3->hnsQPCPosition;
      v29 = 8;
      v32 = 4;
      v34 = (char *)this - 400;
      v35 = 4;
      v38 = 4;
      v40 = v16 + 168;
      v41 = 4;
      v44 = 4;
      v47 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_140072790, 0LL, v15, 9u, &pData);
      v17 = v24;
    }
    v20 = (void *)(*((_QWORD *)this - 52) + v17);
    if ( a4 == BUFFER_SILENT )
      memset_0(v20, 0, v18);
    else
      memcpy_0(v20, Src, v18);
    *(_DWORD *)(((unsigned __int64)v23 << 6) + *((_QWORD *)this - 45)) = 1;
    *(_DWORD *)(((unsigned __int64)v23 << 6) + *((_QWORD *)this - 45) + 4) = v24;
    *(_DWORD *)(((unsigned __int64)v23 << 6) + *((_QWORD *)this - 45) + 56) = v25;
    v21 = *((_QWORD *)this - 45);
    v22 = (unsigned __int64)v23 << 6;
    *(_OWORD *)(v22 + v21 + 16) = *(_OWORD *)&a3->u64DevicePosition;
    *(_OWORD *)(v22 + v21 + 32) = *(_OWORD *)&a3->u64PaddingFrames;
    *(_QWORD *)(v22 + v21 + 48) = *(_QWORD *)&a3->f32FramesPerSecond;
    *(_DWORD *)(((unsigned __int64)v23 << 6) + *((_QWORD *)this - 45) + 8) = a4;
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 52) + 188LL), v19);
  }
  return 0LL;
}
