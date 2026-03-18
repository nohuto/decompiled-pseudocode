/*
 * XREFs of ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x18001F310
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETTRIGGER *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rax
  int v13; // eax
  CAnimation *v14; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 4LL);
  *((_QWORD *)this + 18) = Resource;
  v6 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v7 = *(_DWORD *)(v6 + 80);
  v14 = this;
  v8 = v7 + 1;
  v9 = v7 + 1 < v7 ? 0x80070216 : 0;
  if ( v7 + 1 < v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > *(_DWORD *)(v6 + 76) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 56, 8LL, 1LL, &v14);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, 0xC0u);
  }
  else
  {
    v10 = v7;
    *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8LL * v7) = v14;
    *(_DWORD *)(v6 + 80) = v8;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xDFu);
  }
  else
  {
    v11 = *(_QWORD *)(v6 + 88);
    if ( v11 )
    {
      *((_QWORD *)this + 17) = v11;
      *((_QWORD *)this + 26) = v11;
    }
  }
  return (unsigned int)v9;
}
