/*
 * XREFs of ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0060878
 * Callers:
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C005E47C (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C006258C (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C00638E4 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 */

__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, unsigned __int64 a2, struct CFlipPropertySet *a3)
{
  char *v3; // rdi
  unsigned __int64 v6; // r11
  unsigned int v7; // ebx
  int v8; // eax
  struct CContentResourceState *v9; // r8
  char **v10; // rax
  char *v11; // r8
  struct CContentResourceState *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (char *)this + 72;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
    return (unsigned int)-1073741811;
  v8 = CContentResource::Create(v6, a3, &v13);
  v9 = v13;
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(*((_QWORD *)v13 + 3) + 48LL) )
    {
      if ( *((_QWORD *)this + 6) >= 2uLL )
      {
        v7 = -1073741790;
        goto LABEL_11;
      }
      *((_QWORD *)this + 6) = 1LL;
    }
    v10 = (char **)*((_QWORD *)v3 + 1);
    v11 = (char *)v9 + 8;
    if ( *v10 != v3 )
      __fastfail(3u);
    *(_QWORD *)v11 = v3;
    *((_QWORD *)v11 + 1) = v10;
    *v10 = v11;
    *((_QWORD *)v3 + 1) = v11;
    v9 = 0LL;
  }
LABEL_11:
  if ( v9 )
    (*(void (__fastcall **)(struct CContentResourceState *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
  return v7;
}
