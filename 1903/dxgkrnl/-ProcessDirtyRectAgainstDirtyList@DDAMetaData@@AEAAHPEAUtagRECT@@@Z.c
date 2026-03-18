/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C02793CC
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027989C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C02782DC (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C02786CC (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C02789C0 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rbx
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v21 + 24) = 738LL;
    WdLogEvent5_WdAssertion(v21);
  }
  else
  {
    v22[0] = 0LL;
    v22[1] = 0LL;
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                           (__int64)this,
                                           (unsigned int *)v2,
                                           (__int64)v22);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v2 = (struct tagRECT *)v22;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            v8 = WdLogNewEntry5_WdError(v6, v5, v7);
            *(_QWORD *)(v8 + 24) = 775LL;
LABEL_11:
            WdLogEvent5_WdError(v8);
            return 0LL;
          }
          break;
        default:
          if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v2) )
          {
            v8 = WdLogNewEntry5_WdError(v11, v10, v12);
            *(_QWORD *)(v8 + 24) = 790LL;
            goto LABEL_11;
          }
          return 1LL;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
            *((_QWORD *)this + 9),
            (unsigned int)v2->left,
            (unsigned int)v2->top,
            (unsigned int)v2->right,
            v2->bottom);
    if ( !v15 )
    {
      v8 = WdLogNewEntry5_WdError(v14, v13, v16);
      *(_QWORD *)(v8 + 24) = 801LL;
      goto LABEL_11;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 9),
            2LL) )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = 807LL;
      WdLogEvent5_WdError(v20);
      return v15;
    }
  }
  return 1LL;
}
