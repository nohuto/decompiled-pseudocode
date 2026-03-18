/*
 * XREFs of ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C0091920
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0015200 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall DirectComposition::CNotifiedDeletionResource::Initialize(
        DirectComposition::CNotifiedDeletionResource *this,
        struct DirectComposition::CDeletedNotificationList *a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rbp
  __int64 v6; // rbx
  int v7; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  size_t v11; // r8
  size_t v12; // rax
  void *v13; // rcx
  __int64 Src; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((unsigned int *)a2 + 11);
  v4 = *((_QWORD *)a2 + 3);
  if ( (_DWORD)v2 + *((_DWORD *)a2 + 12) != v4 )
    goto LABEL_5;
  v6 = *((unsigned int *)a2 + 10);
  v7 = DirectComposition::CDCompDynamicArrayBase::Grow(a2, 1LL, 0x626E4344u);
  if ( v2 > v4 - v6 )
  {
    v9 = *((unsigned int *)a2 + 10);
    v10 = *(_QWORD *)a2;
    v11 = *((_QWORD *)a2 + 4);
    *((_DWORD *)a2 + 10) = v9 + 1;
    v12 = v9 * v11;
    v13 = (void *)(v10 + v11 * (*((_QWORD *)a2 + 3) - 1LL));
    Src = *(_QWORD *)(v12 + v10);
    memmove(v13, &Src, v11);
  }
  if ( v7 >= 0 )
  {
LABEL_5:
    ++*((_DWORD *)a2 + 12);
    return (unsigned int)(**(__int64 (__fastcall ***)(DirectComposition::CNotifiedDeletionResource *))this)(this);
  }
  return (unsigned int)v7;
}
