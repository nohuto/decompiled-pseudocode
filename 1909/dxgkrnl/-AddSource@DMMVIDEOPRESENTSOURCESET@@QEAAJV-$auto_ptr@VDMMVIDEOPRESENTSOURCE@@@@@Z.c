/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C017E04C
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017DF40 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C0002BE8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00043F8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C002223C (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, v2[6]);
  if ( v6 )
    LODWORD(v10) = v6 != v9;
  else
    LODWORD(v10) = Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v9) != 0 ? 2 : 0;
  v10 = (unsigned int)v10;
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v11, v7, v8);
        WdLogEvent5_WdError(v14);
        v3 = -1073741823;
      }
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v11, v7, v8);
      v15[3] = (*a2)[6];
      v15[4] = *a2;
      v15[5] = a1;
      WdLogEvent5_WdError(v15);
      v3 = -1071774927;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v10, v7, v8);
    *(_QWORD *)(v16 + 24) = *a2;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdError(v16);
    v3 = -1071774953;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
