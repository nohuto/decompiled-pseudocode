/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800AA6C4
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AD100 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A7018 (--0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800AA1C8 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(__int64 a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  _QWORD *v6; // rdi
  __int16 v7; // bx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v19; // [rsp+30h] [rbp-68h] BYREF
  __int128 v20; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v21[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
  v19 = 0;
  v6 = (_QWORD *)(a1 + 120);
  v7 = v5;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, v5, &v19) < 0 )
  {
    CStoryboard::UnifiedTargetRect::UnifiedTargetRect((__int64)&v20, v7, a3);
    v14 = *(unsigned int *)(a1 + 144);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
    {
      if ( v15 <= *(_DWORD *)(a1 + 140) )
      {
        v16 = *v6 + 56 * v14;
        v12 = 0;
        *(_OWORD *)v16 = v20;
        *(_OWORD *)(v16 + 16) = v21[0];
        *(_OWORD *)(v16 + 32) = v21[1];
        *(_QWORD *)(v16 + 48) = v22;
        *(_DWORD *)(a1 + 144) = v15;
LABEL_18:
        DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v21 + 1);
        return (unsigned int)v12;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6, 56, 1, &v20);
      v12 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC0u);
      if ( v12 >= 0 )
        goto LABEL_18;
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x7E0u);
    goto LABEL_18;
  }
  v8 = 56LL * v19;
  UnionRect((LPRECT)(*v6 + v8 + 4), a3, (const RECT *)(*v6 + v8 + 4));
  v9 = *(_QWORD *)(a1 + 120) + v8 + 24;
  v10 = *(unsigned int *)(v9 + 24);
  v11 = v10 + 1;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x7DAu);
    return (unsigned int)v12;
  }
  if ( v11 > *(_DWORD *)(v9 + 20) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(v9, 16, 1, a3);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC0u);
    if ( v12 < 0 )
      goto LABEL_9;
  }
  else
  {
    v12 = 0;
    *(RECT *)(*(_QWORD *)v9 + 16 * v10) = *a3;
    *(_DWORD *)(v9 + 24) = v11;
  }
  return (unsigned int)v12;
}
