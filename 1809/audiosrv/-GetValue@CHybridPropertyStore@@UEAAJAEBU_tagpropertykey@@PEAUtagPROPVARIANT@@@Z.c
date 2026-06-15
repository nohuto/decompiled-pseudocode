/*
 * XREFs of ?GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18010F340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800BD440 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall CHybridPropertyStore::GetValue(
        CHybridPropertyStore *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // ebx
  __int64 i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *(_QWORD *)&a3->vt = 0LL;
  a3->hVal.QuadPart = 0LL;
  a3->bstrblobVal.pData = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 3)
                                                                                                  + 40LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( v7 >= 0 && a3->vt )
    goto LABEL_9;
  for ( i = *((_QWORD *)this + 4); i != *((_QWORD *)this + 5) && !(unsigned int)operator==(i, (__int64)a2); i += 20LL )
    ;
  if ( i != *((_QWORD *)this + 5) )
  {
LABEL_9:
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        140LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 2) + 40LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
