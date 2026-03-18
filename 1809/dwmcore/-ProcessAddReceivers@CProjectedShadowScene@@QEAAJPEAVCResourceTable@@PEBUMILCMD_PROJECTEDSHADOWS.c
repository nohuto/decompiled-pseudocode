/*
 * XREFs of ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801AFF98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801A3680 (--$_Emplace_reallocate@V-$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VC.c)
 *     ?CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801AFC78 (-CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiv.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  unsigned int v5; // edi
  CResourceTable *v7; // r8
  int v9; // r15d
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  struct CProjectedShadowReceiver *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct CProjectedShadowReceiver *v18; // rbx
  struct CProjectedShadowReceiver **v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r8
  int v22; // r14d
  __int64 v23; // rbx
  struct CProjectedShadowReceiver *v26; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  v7 = a2;
  v9 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, a4[v9]);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              113LL) )
      {
        break;
      }
      v13 = *((_QWORD *)this + 15);
      v14 = 0LL;
      v15 = (*((_QWORD *)this + 16) - v13) >> 3;
      if ( v15 )
      {
        v16 = 0LL;
        while ( *(struct CProjectedShadowReceiver **)(v13 + 8 * v16) != v12 )
        {
          v14 = (unsigned int)(v14 + 1);
          v16 = (unsigned int)v14;
          if ( (unsigned int)v14 >= v15 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        v17 = *(_QWORD *)v12;
        v18 = v12;
        v26 = v12;
        (*(void (__fastcall **)(struct CProjectedShadowReceiver *, __int64))(v17 + 8))(v12, v14);
        v19 = (struct CProjectedShadowReceiver **)*((_QWORD *)this + 16);
        if ( *((struct CProjectedShadowReceiver ***)this + 17) == v19 )
        {
          std::vector<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>(
            (_QWORD *)this + 15,
            v19,
            &v26);
          v18 = v26;
        }
        else
        {
          *v19 = 0LL;
          if ( v19 != &v26 )
          {
            *v19 = v12;
            v18 = 0LL;
          }
          *((_QWORD *)this + 16) += 8LL;
        }
        if ( v18 )
          (*(void (__fastcall **)(struct CProjectedShadowReceiver *))(*(_QWORD *)v18 + 16LL))(v18);
        v20 = *((_QWORD *)this + 3);
        if ( (v20 & 2) != 0 )
          v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v21 = *((_QWORD *)this + 3) & 1LL;
        CPtrArrayBase::InsertAt((CProjectedShadowScene *)((char *)this + 24), (unsigned __int64)v12, v21);
        (*(void (__fastcall **)(struct CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)v12 + 64LL))(
          v12,
          0LL,
          0LL);
        v22 = 0;
        if ( (int)((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) > 0 )
        {
          v23 = 0LL;
          do
          {
            CProjectedShadowScene::CreateShadow(
              (struct CComposition **)this,
              *(struct CProjectedShadowCaster **)(v23 + *((_QWORD *)this + 7)),
              v12);
            v23 += 8LL;
            ++v22;
          }
          while ( v22 < (int)((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) );
        }
      }
      if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 2) )
        return v5;
      v7 = a2;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x59u);
  }
  return v5;
}
