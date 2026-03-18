/*
 * XREFs of ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENTRY@@@Z @ 0x1C0064034
 * Callers:
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C0062FF4 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_.c)
 * Callees:
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C0062538 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCEndpointResourceStateManager@@PEAVCFlipContentToken@@@Z @ 0x1C0063E0C (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCEndpointResourceSta.c)
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0064CF4 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CContentResourceState::CreateUpdateTokens(
        CContentResourceState *this,
        CEndpointResourceStateManager **a2,
        struct _LIST_ENTRY *a3)
{
  int v3; // ebp
  struct CompositionSurfaceObject *v7; // rbx
  __int64 v8; // rdx
  int PoolBufferIndex; // eax
  int v10; // r14d
  unsigned __int64 v11; // r11
  struct CEndpointResourceStateManager *v12; // rdx
  struct CFlipContentToken *v13; // rbx
  struct CFlipContentToken *v14; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v16; // rbx
  struct CFlipContentToken *v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v7 = *(struct CompositionSurfaceObject **)(*((_QWORD *)this + 3) + 48LL);
  if ( v7 )
  {
    if ( (*((_BYTE *)this + 56) & 1) != 0 )
    {
      v8 = *((_QWORD *)this + 6);
      if ( v8 )
      {
        PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex(a2, *(_QWORD *)(v8 + 40));
        v18 = 0LL;
        v10 = PoolBufferIndex;
        v3 = CFlipContentToken::CreateCompleted(v11, v7, &v18);
        if ( v3 >= 0 )
        {
          v13 = v18;
          v14 = v18;
          *((_DWORD *)v18 + 24) = v10;
          CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(this, v12, v14);
          Blink = a3->Blink;
          v16 = (struct _LIST_ENTRY *)((char *)v13 + 8);
          if ( Blink->Flink != a3 )
            __fastfail(3u);
          v16->Flink = a3;
          v16->Blink = Blink;
          Blink->Flink = v16;
          a3->Blink = v16;
        }
      }
    }
  }
  return (unsigned int)v3;
}
