/*
 * XREFs of ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1801B9164
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18014BE44 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CVisualGroup::SetExcludeSubtree(CVisualGroup *this, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    v5 = *((_QWORD *)this + 7);
    v6 = *(_QWORD **)(v5 + 8 * v2);
    v7 = v6[2];
    if ( v7 )
    {
      *(_BYTE *)(v7 + 94) &= ~0x10u;
      *(_BYTE *)(v7 + 94) |= 16 * a2;
      v2 = (unsigned int)(v2 + 1);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*v6 + 8LL))(*(_QWORD *)(v5 + 8 * v2));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 56, v2);
    }
  }
  v8 = 0LL;
  while ( (unsigned int)v8 < *((_DWORD *)this + 28) )
  {
    v9 = *((_QWORD *)this + 11);
    v10 = *(_QWORD **)(v9 + 8 * v8);
    v11 = v10[2];
    if ( v11 )
    {
      *(_BYTE *)(v11 + 94) &= ~0x10u;
      *(_BYTE *)(v11 + 94) |= 16 * a2;
      v8 = (unsigned int)(v8 + 1);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*v10 + 8LL))(*(_QWORD *)(v9 + 8 * v8));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 88, v8);
    }
  }
}
