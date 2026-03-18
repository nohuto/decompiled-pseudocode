/*
 * XREFs of ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C005AEE8
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0059A38 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059BD4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C005ADA0 (--2-$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C005ADCC (--2-$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCPoolBufferResourceState@@@@QEAAPEAVCPoolBufferResourceState@@XZ @ 0x1C005B3C4 (-Dequeue@-$CFlipObjectQueue@VCPoolBufferResourceState@@@@QEAAPEAVCPoolBufferResourceState@@XZ.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C005B4DC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C005C160 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C005CEBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C005CF18 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::ApplyIncrementalUpdate(
        struct _LIST_ENTRY *this,
        const struct CFlipPresentUpdate *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // r15d
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  char v10; // al
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  char v15; // al
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rdi
  unsigned int *v20; // r14
  CEndpointResourceStateManager *v21; // rcx
  CEndpointResourceStateManager *v22; // rcx
  int v23; // ecx
  CEndpointResourceStateManager *v24; // rcx
  CContentResourceState *v25; // rbx
  struct _LIST_ENTRY *v26; // rax
  char *v27; // rcx
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY **v29; // rax
  CEndpointResourceStateManager **Blink; // rcx
  struct CFlipResourceState *v31; // rax
  struct CPoolBufferResourceState *ResourceState; // rax
  __int64 v33; // rax
  _QWORD *v35; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v36; // [rsp+28h] [rbp-18h]
  _QWORD *v37; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v38; // [rsp+38h] [rbp-8h]

  v2 = *((_QWORD *)a2 + 6);
  v3 = *((unsigned int *)a2 + 10);
  v36 = &v35;
  v4 = 0;
  v35 = &v35;
  v7 = v2 + v3;
  v38 = &v37;
  v37 = &v37;
  while ( 1 )
  {
    if ( v2 >= v7 )
    {
      v19 = (unsigned int *)*((_QWORD *)a2 + 6);
      v20 = (unsigned int *)((char *)v19 + *((unsigned int *)a2 + 10));
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v19 >= v20 )
            goto LABEL_22;
          v21 = (CEndpointResourceStateManager *)*v19;
          if ( !(_DWORD)v21 )
          {
            ResourceState = CEndpointResourceStateManager::FindResourceState(v21, *((_QWORD *)v19 + 1), this);
            CEndpointResourceStateManager::RemovePoolBufferState((CEndpointResourceStateManager *)this, ResourceState);
            goto LABEL_42;
          }
          v22 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v21 - 1);
          if ( !(_DWORD)v22 )
          {
            v31 = CEndpointResourceStateManager::FindResourceState(v22, *((_QWORD *)v19 + 1), this + 1);
            (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)v31 + 24LL))(v31);
            goto LABEL_42;
          }
          v23 = (_DWORD)v22 - 1;
          if ( v23 )
            break;
          v29 = (struct _LIST_ENTRY **)CFlipObjectQueue<CPoolBufferResourceState>::Dequeue(&v35);
          if ( v29 )
            ++v29;
          Blink = (CEndpointResourceStateManager **)this->Blink;
          if ( *Blink != (CEndpointResourceStateManager *)this )
            goto LABEL_45;
          *v29 = this;
          v29[1] = (struct _LIST_ENTRY *)Blink;
          *Blink = (CEndpointResourceStateManager *)v29;
          this->Blink = (struct _LIST_ENTRY *)v29;
          LOBYTE(this[2].Flink) = 1;
LABEL_42:
          v19 += 4;
        }
        v24 = (CEndpointResourceStateManager *)(unsigned int)(v23 - 1);
        if ( !(_DWORD)v24 )
        {
          v26 = (struct _LIST_ENTRY *)CFlipObjectQueue<CPoolBufferResourceState>::Dequeue(&v37);
          v27 = (char *)&this[1];
          if ( v26 )
            v26 = (struct _LIST_ENTRY *)((char *)v26 + 8);
          v28 = this[1].Blink;
          if ( (char *)v28->Flink != v27 )
            goto LABEL_45;
          v26->Flink = (struct _LIST_ENTRY *)v27;
          v26->Blink = v28;
          v28->Flink = v26;
          this[1].Blink = v26;
          goto LABEL_42;
        }
        if ( (_DWORD)v24 == 1 )
        {
          v25 = CEndpointResourceStateManager::FindResourceState(v24, *((_QWORD *)v19 + 1), this + 1);
          CContentResourceState::SetBoundBuffer(v25, *((struct CPoolBufferResource **)v19 + 2));
          CContentResourceState::SetBoundPropertySet(v25, *((struct CFlipPropertySet **)v19 + 3));
          v19 += 8;
        }
      }
    }
    if ( *(_DWORD *)v2 < 2u )
      goto LABEL_20;
    if ( *(_DWORD *)v2 == 2 )
      break;
    if ( *(_DWORD *)v2 == 3 )
    {
      v8 = DXGQUOTAALLOCATOR<1,1936868166>::operator new();
      v9 = v8;
      if ( v8 )
      {
        v8[3] = *(_QWORD *)(v2 + 8);
        v10 = v8[4] & 0xF1;
        *v9 = &CFlipResourceState::`vftable';
        *((_BYTE *)v9 + 32) = v10 | 1;
        v9[2] = v9 + 1;
        v9[1] = v9 + 1;
        ++*(_DWORD *)(v9[3] + 24LL);
        v9[5] = 0LL;
        v9[6] = 0LL;
        *((_BYTE *)v9 + 56) &= 0xFCu;
        *v9 = &CContentResourceState::`vftable';
      }
      else
      {
        v9 = 0LL;
      }
      if ( !v9 )
        goto LABEL_21;
      v11 = v38;
      v12 = v9 + 1;
      if ( *v38 != &v37 )
        goto LABEL_45;
      v12[1] = v38;
      *v12 = &v37;
      *v11 = v12;
      v38 = (_QWORD **)v12;
LABEL_20:
      v2 += 16LL;
    }
    else if ( *(_DWORD *)v2 == 4 )
    {
      v2 += 32LL;
    }
  }
  v13 = DXGQUOTAALLOCATOR<1,1935819590>::operator new();
  v14 = v13;
  if ( v13 )
  {
    v13[3] = *(_QWORD *)(v2 + 8);
    v15 = v13[4] & 0xF1;
    *v14 = &CFlipResourceState::`vftable';
    *((_BYTE *)v14 + 32) = v15 | 1;
    v14[2] = v14 + 1;
    v14[1] = v14 + 1;
    ++*(_DWORD *)(v14[3] + 24LL);
    *v14 = &CPoolBufferResourceState::`vftable';
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v16 = v36;
    v17 = v14 + 1;
    if ( *v36 != &v35 )
LABEL_45:
      __fastfail(3u);
    v17[1] = v36;
    *v17 = &v35;
    *v16 = v17;
    v36 = (_QWORD **)v17;
    goto LABEL_20;
  }
LABEL_21:
  v4 = -1073741801;
LABEL_22:
  while ( v35 != &v35 )
  {
    v18 = CFlipObjectQueue<CPoolBufferResourceState>::Dequeue(&v35);
    if ( v18 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, 1LL);
  }
  while ( v37 != &v37 )
  {
    v33 = CFlipObjectQueue<CPoolBufferResourceState>::Dequeue(&v37);
    if ( v33 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 32LL))(v33, 1LL);
  }
  return v4;
}
