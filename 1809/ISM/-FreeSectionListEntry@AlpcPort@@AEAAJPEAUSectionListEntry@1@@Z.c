/*
 * XREFs of ?FreeSectionListEntry@AlpcPort@@AEAAJPEAUSectionListEntry@1@@Z @ 0x1800A0BC8
 * Callers:
 *     ?FreeSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0B80 (-FreeSection@AlpcPort@@UEAAJPEAX@Z.c)
 *     ?FreeAllSectionsFromSource@AlpcPort@@UEAAJKK@Z @ 0x1800A0C70 (-FreeAllSectionsFromSource@AlpcPort@@UEAAJKK@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::FreeSectionListEntry(AlpcPort *this, struct AlpcPort::SectionListEntry *a2)
{
  __int64 v2; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rax
  struct AlpcPort::SectionListEntry **v11; // rcx
  AlpcPort **v12; // rcx

  v2 = *((_QWORD *)a2 + 2);
  if ( v2 )
  {
    v5 = NtAlpcDeletePortSection(*((_QWORD *)this + 1), 0LL, v2);
    if ( v5 < 0 )
      return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v5, v6, v7, v8);
    *((_QWORD *)a2 + 2) = 0LL;
  }
  if ( *((_QWORD *)a2 + 3) )
  {
    v5 = NtAlpcDeleteSectionView(*((_QWORD *)this + 1), 0LL);
    if ( v5 < 0 )
      return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v5, v6, v7, v8);
  }
  v10 = *(_QWORD *)a2;
  if ( *(struct AlpcPort::SectionListEntry **)(*(_QWORD *)a2 + 8LL) != a2
    || (v11 = (struct AlpcPort::SectionListEntry **)*((_QWORD *)a2 + 1), *v11 != a2)
    || (*v11 = (struct AlpcPort::SectionListEntry *)v10,
        *(_QWORD *)(v10 + 8) = v11,
        --*((_QWORD *)this + 5),
        v12 = (AlpcPort **)*((_QWORD *)this + 7),
        *v12 != (AlpcPort *)((char *)this + 48)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)a2 = (char *)this + 48;
  *((_QWORD *)a2 + 1) = v12;
  *v12 = a2;
  ++*((_QWORD *)this + 8);
  *((_QWORD *)this + 7) = a2;
  return 0LL;
}
