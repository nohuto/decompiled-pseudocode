/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800DF258
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18006EC70 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x1800DFD6C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  struct CResource *Resource; // rax
  __int64 v6; // rcx
  struct CResource *v7; // rsi
  int EffectInstance; // eax
  int v9; // ebx
  int v10; // r14d
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // eax
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x19u);
  v7 = Resource;
  if ( *((_QWORD *)this + 10) )
  {
    if ( Resource )
    {
      v9 = -2003303422;
      v17 = 162;
LABEL_20:
      v15 = v9;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v15, v17);
      return (unsigned int)v9;
    }
    goto LABEL_17;
  }
  if ( !Resource )
  {
LABEL_17:
    CEffectBrush::ReleaseResources(this);
    goto LABEL_14;
  }
  EffectInstance = CResource::RegisterNotifier(this, Resource);
  v9 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v17 = 167;
LABEL_22:
    v15 = EffectInstance;
    goto LABEL_23;
  }
  *((_QWORD *)this + 10) = v7;
  v10 = 0;
  v11 = *((_DWORD *)a3 + 3);
  if ( v11 )
  {
    v12 = v18;
    while ( 1 )
    {
      v6 = *((unsigned int *)this + 32);
      v18 = 0LL;
      v13 = v6 + 1;
      if ( (int)v6 + 1 >= (unsigned int)v6 )
        v12 = v6 + 1;
      v9 = v13 < (unsigned int)v6 ? 0x80070216 : 0;
      if ( v13 < (unsigned int)v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v9, 0xB5u);
      }
      else if ( v12 > *((_DWORD *)this + 31) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8, 1, &v18);
        v9 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v6) = v18;
        *((_DWORD *)this + 32) = v12;
      }
      if ( v9 < 0 )
        break;
      if ( ++v10 >= v11 )
        goto LABEL_13;
    }
    v17 = 174;
    goto LABEL_20;
  }
LABEL_13:
  EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
  v9 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v17 = 177;
    goto LABEL_22;
  }
LABEL_14:
  v9 = 0;
  (*(void (__fastcall **)(CEffectBrush *, _QWORD, CEffectBrush *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
  return (unsigned int)v9;
}
