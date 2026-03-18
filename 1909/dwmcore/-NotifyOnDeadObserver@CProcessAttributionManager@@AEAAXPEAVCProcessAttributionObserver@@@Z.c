/*
 * XREFs of ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x180177358
 * Callers:
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x18017721C (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_________lambda_73f2a4da0cca98f221385d01cc2cbc64___ @ 0x1801770A0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_CProcessAttributionMana.c)
 */

void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v2; // rdi
  struct CProcessAttributionObserver **v4; // rdx
  struct CProcessAttributionObserver **v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  size_t v9; // rbx
  void *v10; // rbp
  __int64 v11; // r8
  __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  void **v15; // rax
  char *v16; // rbx
  size_t v17; // rdi
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 3);
  v4 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 4);
  while ( v2 != v4 && *v2 != a2 )
    ++v2;
  if ( v2 != v4 )
  {
    v6 = v2 + 1;
    v7 = 0LL;
    v8 = (unsigned __int64)((char *)v4 - (char *)(v2 + 1) + 7) >> 3;
    if ( v2 + 1 > v4 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( *v6 != a2 )
          *v2++ = *v6;
        ++v6;
        ++v7;
      }
      while ( v7 != v8 );
    }
    if ( v2 != v4 )
    {
      v9 = *((_QWORD *)this + 4) - (_QWORD)v4;
      memmove_0(v2, v4, v9);
      *((_QWORD *)this + 4) = (char *)v2 + v9;
    }
  }
  v10 = (void *)*((_QWORD *)this + 1);
  v11 = 0LL;
  v12 = *(__int64 **)this;
  v13 = ((unsigned __int64)v10 - *(_QWORD *)this + 7) >> 3;
  if ( *(_QWORD *)this > (unsigned __int64)v10 )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *v12;
      ++v11;
      ++v12;
      --*(_DWORD *)(v14 + 160);
    }
    while ( v11 != v13 );
    v10 = (void *)*((_QWORD *)this + 1);
    v12 = *(__int64 **)this;
  }
  v15 = (void **)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_________lambda_73f2a4da0cca98f221385d01cc2cbc64___(
                   &v18,
                   v12,
                   (unsigned __int64)v10);
  v16 = (char *)*v15;
  if ( *v15 != v10 )
  {
    v17 = *((_QWORD *)this + 1) - (_QWORD)v10;
    memmove_0(*v15, v10, v17);
    *((_QWORD *)this + 1) = &v16[v17];
  }
}
