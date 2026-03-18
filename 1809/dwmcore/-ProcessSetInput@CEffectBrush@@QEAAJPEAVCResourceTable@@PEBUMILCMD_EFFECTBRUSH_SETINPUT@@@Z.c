/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x180071DD4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z @ 0x180071E98 (-IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  unsigned int v3; // ebx
  const struct CResource *ResourceWithoutType; // rax
  unsigned int v7; // ecx
  struct CResource *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  struct CResource *v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( !*((_QWORD *)this + 10) )
    return v3;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  v8 = ResourceWithoutType;
  if ( ResourceWithoutType && !CEffectBrush::IsValidInputResource(ResourceWithoutType) )
  {
    v14 = 242;
LABEL_13:
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, v14);
    return v3;
  }
  v9 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v9 >= *((_DWORD *)this + 32) )
  {
    v14 = 247;
    goto LABEL_13;
  }
  v10 = *((_QWORD *)this + 13);
  v11 = (unsigned int)v9;
  v12 = *(struct CResource **)(v10 + 8 * v9);
  if ( v12 )
  {
    CResource::UnRegisterNotifierInternal(this, v12);
    *(_QWORD *)(v10 + 8 * v11) = 0LL;
  }
  if ( v8 )
  {
    *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * *((unsigned int *)a3 + 2)) = v8;
    CResource::RegisterNotifier(this, v8);
  }
  (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 64LL))(this, 14LL);
  return v3;
}
