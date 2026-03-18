/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C0159B5C
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0159A50 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00041D8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C0005F34 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C001FAA4 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, v2[6]);
  if ( v6 )
    LODWORD(v8) = v6 != v7;
  else
    LODWORD(v8) = Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v7) != 0 ? 2 : 0;
  v8 = (unsigned int)v8;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(v9);
        WdLogEvent5_WdError(v12);
        v3 = -1073741823;
      }
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v13[3] = (*a2)[6];
      v13[4] = *a2;
      v13[5] = a1;
      WdLogEvent5_WdError(v13);
      v3 = -1071774927;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v14 + 24) = *a2;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogEvent5_WdError(v14);
    v3 = -1071774953;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
