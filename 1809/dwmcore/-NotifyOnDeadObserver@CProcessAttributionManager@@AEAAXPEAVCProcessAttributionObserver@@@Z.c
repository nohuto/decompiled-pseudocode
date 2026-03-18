/*
 * XREFs of ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x180147F68
 * Callers:
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180147E24 (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_____ptr64_______lambda_25a6e35ac28882ed86e8364a912a7bf9___ @ 0x180147CA8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_CProcessAttributionMana.c)
 */

void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v2; // rdi
  struct CProcessAttributionObserver **v4; // rdx
  __int64 v6; // r14
  struct CProcessAttributionObserver **v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  size_t v10; // rbx
  void *v11; // rbp
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
  v6 = 0LL;
  if ( v2 != v4 )
  {
    v7 = v2 + 1;
    v8 = 0LL;
    v9 = (unsigned __int64)((char *)v4 - (char *)(v2 + 1) + 7) >> 3;
    if ( v2 + 1 > v4 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v7 != a2 )
          *v2++ = *v7;
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
    if ( v2 != v4 )
    {
      v10 = *((_QWORD *)this + 4) - (_QWORD)v4;
      memmove_0(v2, v4, v10);
      *((_QWORD *)this + 4) = (char *)v2 + v10;
    }
  }
  v11 = (void *)*((_QWORD *)this + 1);
  v12 = *(__int64 **)this;
  v13 = ((unsigned __int64)v11 - *(_QWORD *)this + 7) >> 3;
  if ( *(_QWORD *)this > (unsigned __int64)v11 )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *v12;
      ++v6;
      ++v12;
      --*(_DWORD *)(v14 + 124);
    }
    while ( v6 != v13 );
    v11 = (void *)*((_QWORD *)this + 1);
    v12 = *(__int64 **)this;
  }
  v15 = (void **)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_____ptr64_______lambda_25a6e35ac28882ed86e8364a912a7bf9___(
                   &v18,
                   v12,
                   (unsigned __int64)v11);
  v16 = (char *)*v15;
  if ( *v15 != v11 )
  {
    v17 = *((_QWORD *)this + 1) - (_QWORD)v11;
    memmove_0(*v15, v11, v17);
    *((_QWORD *)this + 1) = &v16[v17];
  }
}
