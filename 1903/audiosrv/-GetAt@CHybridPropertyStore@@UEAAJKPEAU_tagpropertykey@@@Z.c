/*
 * XREFs of ?GetAt@CHybridPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x18011C800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHybridPropertyStore::GetAt(CHybridPropertyStore *this, unsigned int a2, struct _tagpropertykey *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = *((_QWORD *)this + 2);
  v13 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( a2 >= v13 )
    {
      v10 = *((_QWORD *)this + 3);
      a2 -= v13;
    }
    else
    {
      v10 = *((_QWORD *)this + 2);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _tagpropertykey *))(*(_QWORD *)v10 + 32LL))(v10, a2, a3);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
