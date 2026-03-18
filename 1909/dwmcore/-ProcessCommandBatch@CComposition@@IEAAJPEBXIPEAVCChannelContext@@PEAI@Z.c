/*
 * XREFs of ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18009B920
 * Callers:
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800570A8 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18001EC1C (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A1DB4 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x1800C2E50 (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180159B44 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180159D1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180175D4C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::ProcessCommandBatch(
        CComposition *this,
        unsigned int *a2,
        unsigned int a3,
        unsigned int **a4,
        unsigned int *a5)
{
  unsigned int *v5; // r15
  CComposition *v8; // rsi
  unsigned int *v9; // rax
  signed int NextItemSafe; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r13
  unsigned int v14; // r12d
  void *v15; // r14
  unsigned int v16; // ebp
  unsigned int *v17; // rsi
  signed int v18; // eax
  unsigned __int64 v19; // rcx
  signed int v20; // ebx
  unsigned __int64 v21; // rax
  CAnimationLoggingManager *v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  int v26; // ecx
  void *StackCaptureRootFailureAddress; // rax
  void *v28; // [rsp+30h] [rbp-68h] BYREF
  const void *v29; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v30; // [rsp+40h] [rbp-58h]
  unsigned int v31; // [rsp+48h] [rbp-50h]
  unsigned int v33; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+18h] BYREF
  struct CChannelContext *v35; // [rsp+B8h] [rbp+20h]

  v35 = (struct CChannelContext *)a4;
  v5 = a5;
  v34 = 0;
  v8 = this;
  v28 = 0LL;
  *a5 = 0;
  ++*((_DWORD *)a4 + 20);
  v33 = 0;
  v9 = a4[3];
  *((_QWORD *)this + 66) = a2;
  *((_DWORD *)this + 134) = a3;
  a5 = v9;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, a3);
  v29 = a2;
  v31 = a3;
  v30 = a2;
  NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v29, &v34, &v28, &v33);
  v12 = NextItemSafe;
  if ( NextItemSafe < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, NextItemSafe, 0x20Du, 0LL);
LABEL_26:
    if ( !IsOOM(v12) )
    {
      MilUnexpectedError(v26, L"batch processing error");
      StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v12);
      CComposition::FailFastOnMalformedPacket(v8, v12, StackCaptureRootFailureAddress);
    }
    return v12;
  }
  v13 = v31;
  v14 = v34;
  v15 = v28;
  v16 = v33;
  v17 = v30;
  while ( v12 != 1 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
        *((unsigned int *)v35 + 5),
        v14);
    v18 = CComposition::ProcessMessage(this, v14, v15, v16, v35, a5);
    v12 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x227u, 0LL);
      v8 = this;
      goto LABEL_22;
    }
    v20 = -2147467259;
    v21 = (unsigned __int64)v29 + v13 - (_QWORD)v17;
    if ( v21 )
    {
      if ( v21 >= 8 )
      {
        v19 = *v17;
        if ( (unsigned int)v19 >= 8 && (v19 & 3) == 0 && v19 <= v21 )
        {
          v14 = v17[1];
          v15 = v17 + 1;
          v17 = (unsigned int *)((char *)v17 + v19);
          v16 = v19 - 4;
          v20 = 0;
        }
      }
      v12 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0x231u, 0LL);
    }
    else
    {
      v15 = 0LL;
      v20 = 1;
      v16 = 0;
      v12 = 1;
    }
    ++*v5;
    if ( v20 < 0 )
    {
      v8 = this;
      goto LABEL_26;
    }
  }
  v8 = this;
  *(_BYTE *)(*((_QWORD *)this + 30) + 416LL) |= 2u;
  v22 = (CAnimationLoggingManager *)*((_QWORD *)v35 + 7);
  if ( v22 && (v23 = CAnimationLoggingManager::LogDebugPropertyUpdates(v22, *((_QWORD *)this + 48)), v12 = v23, v23 < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x132u, 0LL);
  else
    v12 = 0;
LABEL_22:
  if ( (v12 & 0x80000000) != 0 )
    goto LABEL_26;
  return v12;
}
