/*
 * XREFs of ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0060980
 * Callers:
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C005E52C (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C00625CC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0063538 (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 */

int __fastcall CFlipManager::AddPoolBuffer(
        CFlipManager *this,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  char *v5; // rbx
  unsigned __int64 v8; // r11
  int result; // eax
  char **v10; // rcx
  char *v11; // r8
  struct CPoolBufferResourceState *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = (char *)this + 56;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56)) )
    return -1073741811;
  result = CPoolBufferResource::Create(v8, a3, a4, a5, &v12);
  if ( result >= 0 )
  {
    v10 = (char **)*((_QWORD *)v5 + 1);
    v11 = (char *)(((unsigned __int64)v12 + 8) & -(__int64)(v12 != 0LL));
    if ( *v10 != v5 )
      __fastfail(3u);
    *(_QWORD *)v11 = v5;
    *((_QWORD *)v11 + 1) = v10;
    *v10 = v11;
    *((_QWORD *)v5 + 1) = v11;
  }
  return result;
}
