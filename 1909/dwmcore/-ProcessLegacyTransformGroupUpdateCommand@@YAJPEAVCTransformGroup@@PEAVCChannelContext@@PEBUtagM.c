/*
 * XREFs of ?ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001FB6C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001CD24 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800AF0D4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyTransformGroupUpdateCommand(
        struct CTransformGroup *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_TRANSFORMGROUP *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  __int64 v7; // r8
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  bool v12; // zf
  void *v13; // rdi
  int appended; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+28h] BYREF
  void *lpMem; // [rsp+80h] [rbp+30h] BYREF

  v5 = *((_QWORD *)a2 + 3);
  v7 = *((unsigned int *)a3 + 2);
  v21 = 0;
  v9 = CResource::UnmarshalResourceArray(a4, a5, v7, 179LL, &v21, &lpMem, v5, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x6BCu, 0LL);
  }
  else
  {
    v12 = *((_DWORD *)a3 + 3) == 0;
    v13 = lpMem;
    v20[1] = lpMem;
    v20[0] = v21;
    if ( v12 )
    {
      if ( !lpMem && v21 )
        goto LABEL_14;
      appended = CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(this, (__int64)v20, 0);
      v11 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, appended, 0x6C4u, 0LL);
    }
    else
    {
      if ( !lpMem && v21 )
      {
LABEL_14:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v18 = CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(this, (__int64)v20, 1);
      v11 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x6C0u, 0LL);
    }
    operator delete(v13);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v11, 0x6C8u, 0LL);
  }
  return (unsigned int)v11;
}
