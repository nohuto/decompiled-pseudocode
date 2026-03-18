/*
 * XREFs of ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BE098
 * Callers:
 *     ?Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BE1C0 (-Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BE270 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C00BE2EC (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01ABBD0 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C0005EF0 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C01AADAC (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r9
  size_t v9; // r8
  bool v10; // zf
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  DirectComposition::CInteractionTrackerMarshaler *v13; // rdi
  DirectComposition::CInteractionTrackerMarshaler *v14; // rsi
  _OWORD Src[2]; // [rsp+20h] [rbp-58h] BYREF
  struct DirectComposition::CResourceMarshaler *v16[2]; // [rsp+40h] [rbp-38h]

  if ( !*((_BYTE *)this + 49) )
  {
    v4 = *((_QWORD *)this + 10);
    v5 = 0;
    v6 = 0;
    *((_BYTE *)this + 49) = 1;
    if ( v4 )
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)this + 7);
        v9 = *((_QWORD *)this + 11);
        v10 = *(_DWORD *)(v7 * v9 + v8 + 16) == 0;
        v11 = *(_OWORD *)(v7 * v9 + v8);
        *(_OWORD *)v16 = v11;
        if ( v10 )
        {
          v13 = v16[0];
          v10 = (*((_DWORD *)v16[0] + 12))-- == 1;
          if ( v10 )
            DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(v13, a2, 0LL);
          v14 = v16[1];
          v10 = (*((_DWORD *)v16[1] + 12))-- == 1;
          if ( v10 )
            DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(v14, a2, 0LL);
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
        }
        else
        {
          v12 = *(_OWORD *)(v7 * v9 + v8 + 16);
          Src[0] = v11;
          Src[1] = v12;
          memmove((void *)(v8 + v9 * v5++), Src, v9);
        }
        v4 = *((_QWORD *)this + 10);
        v7 = ++v6;
      }
      while ( v6 < v4 );
    }
    DirectComposition::CDCompDynamicArrayBase::Shrink(
      (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 56),
      v4 - v5);
    *((_BYTE *)this + 49) = 0;
  }
}
