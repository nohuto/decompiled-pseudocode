/*
 * XREFs of ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x180020EAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETTRIGGER *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  int v12; // eax
  unsigned int v13; // ecx
  CAnimation *v14; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 4LL);
  *((_QWORD *)this + 18) = Resource;
  v6 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v7 = *(_DWORD *)(v6 + 80);
  v14 = this;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    v9 = 0;
    if ( v8 <= *(_DWORD *)(v6 + 76) )
    {
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8LL * v7) = v14;
      *(_DWORD *)(v6 + 80) = v8;
      goto LABEL_6;
    }
    v12 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 56, 8LL, 1LL, &v14);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3u, 0LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0xDDu, 0LL);
    return (unsigned int)v9;
  }
LABEL_6:
  v10 = *(_QWORD *)(v6 + 88);
  if ( v10 )
  {
    *((_QWORD *)this + 17) = v10;
    *((_QWORD *)this + 26) = v10;
  }
  return (unsigned int)v9;
}
