/*
 * XREFs of ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18013DB68
 * Callers:
 *     ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18013D4A0 (--0SelectionData@StartLayout@@QEAA@AEBU01@@Z.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x18013D71C (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x1801A08DC (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x18013CC90 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAPEAW4LayoutSKU@SharedStartModel@@QEAW423@AEBW423@@Z @ 0x18013CDE0 (--$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@.c)
 */

void __fastcall StartLayout::SelectionData::Copy(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  char *v2; // rdi
  __int64 v5; // rbp
  LPVOID *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  const WCHAR **v9; // r15
  unsigned __int64 v10; // rsi
  const WCHAR *v11; // rcx
  _BYTE *v12; // rdx
  _DWORD *v13; // rbp
  _DWORD *i; // rsi
  _BYTE *v15; // rdx
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 8;
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  v5 = 0LL;
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  v6 = (LPVOID *)*((_QWORD *)this + 1);
  v7 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v6 + 7LL) >> 3;
  if ( (unsigned __int64)v6 > *((_QWORD *)this + 2) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      CoTaskMemFree(*v6);
      ++v5;
      ++v6;
    }
    while ( v5 != v7 );
  }
  v8 = 0LL;
  *((_QWORD *)v2 + 1) = *(_QWORD *)v2;
  v9 = (const WCHAR **)*((_QWORD *)a2 + 1);
  v10 = (unsigned __int64)(*((_QWORD *)a2 + 2) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *((_QWORD *)a2 + 2) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *v9;
      ppwsz = 0LL;
      if ( SHStrDupW(v11, &ppwsz) >= 0 )
      {
        v12 = (_BYTE *)*((_QWORD *)v2 + 1);
        if ( *((_BYTE **)v2 + 2) == v12 )
        {
          std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)v2, v12, &ppwsz);
        }
        else
        {
          *(_QWORD *)v12 = ppwsz;
          *((_QWORD *)v2 + 1) += 8LL;
        }
      }
      ++v9;
      ++v8;
    }
    while ( v8 != v10 );
  }
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  v13 = (_DWORD *)*((_QWORD *)a2 + 5);
  for ( i = (_DWORD *)*((_QWORD *)a2 + 4); i != v13; ++i )
  {
    v15 = (_BYTE *)*((_QWORD *)this + 5);
    if ( *((_BYTE **)this + 6) == v15 )
    {
      std::vector<enum SharedStartModel::LayoutSKU>::_Emplace_reallocate<enum SharedStartModel::LayoutSKU const &>(
        (const void **)this + 4,
        v15,
        i);
    }
    else
    {
      *(_DWORD *)v15 = *i;
      *((_QWORD *)this + 5) += 4LL;
    }
  }
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  *((_BYTE *)this + 61) = *((_BYTE *)a2 + 61);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
}
