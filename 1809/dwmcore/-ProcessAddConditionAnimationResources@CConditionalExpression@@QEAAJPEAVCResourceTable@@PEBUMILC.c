/*
 * XREFs of ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18019341C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@QEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1801926A4 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        struct CResource ***this,
        struct CResourceTable *a2,
        const struct MILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // r15d
  CConditionalExpression *v8; // rbx
  unsigned int v9; // edx
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  struct CResource *v12; // rsi
  unsigned int v13; // edx
  struct CResource *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  struct CResource **v20; // rdx
  _OWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-20h]
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+50h] BYREF

  v4 = 0;
  v8 = (CConditionalExpression *)this;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      v9 = *a4;
      v27 = 0LL;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v9);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              53LL) )
      {
        break;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = a4[1];
      *(_QWORD *)&v27 = v12;
      v14 = CResourceTable::GetResourceWithoutType(a2, v13);
      v15 = (__int64)v14;
      if ( !v14
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 48LL))(v14, 53LL)
        && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, 100LL) )
      {
        v26 = 92;
        goto LABEL_25;
      }
      v29 = v15;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v29);
      v29 = 0LL;
      *((_QWORD *)&v27 + 1) = v15;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
      a4 += 2;
      (*(void (__fastcall **)(struct CResource *, CConditionalExpression *))(*(_QWORD *)v12 + 184LL))(v12, v8);
      (*(void (__fastcall **)(__int64, CConditionalExpression *))(*(_QWORD *)v15 + 184LL))(v15, v8);
      v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 200LL))(v12);
      v17 = v16;
      if ( v16 < 0 )
      {
        v26 = 106;
        v25 = v16;
        goto LABEL_26;
      }
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 200LL))(v15);
      v17 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x6Bu);
        goto LABEL_27;
      }
      v8 = (CConditionalExpression *)this;
      v20 = this[38];
      if ( this[39] == v20 )
      {
        std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
          this + 37,
          v20,
          &v27);
      }
      else
      {
        *v20 = 0LL;
        if ( v20 != (struct CResource **)&v27 )
        {
          *v20 = v12;
          *(_QWORD *)&v27 = 0LL;
        }
        v21 = v20 + 1;
        *(_QWORD *)v21 = 0LL;
        if ( v21 != (__int128 *)((char *)&v27 + 8) )
        {
          *(_QWORD *)v21 = v15;
          *((_QWORD *)&v27 + 1) = 0LL;
        }
        this[38] += 2;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v27 + 1);
      v22 = v27;
      if ( (_QWORD)v27 )
      {
        v23 = *(_QWORD *)v27;
        *(_QWORD *)&v27 = 0LL;
        (*(void (__fastcall **)(__int64))(v23 + 16))(v22);
      }
      if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v26 = 80;
LABEL_25:
    v25 = -2003303421;
    v17 = -2003303421;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v25, v26);
LABEL_27:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v27 + 1);
    if ( (_QWORD)v27 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 16LL))(v27);
  }
  else
  {
    return 0;
  }
  return v17;
}
