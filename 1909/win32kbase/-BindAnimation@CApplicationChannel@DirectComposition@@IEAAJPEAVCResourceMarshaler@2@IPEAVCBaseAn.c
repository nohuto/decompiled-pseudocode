/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C006E1D8
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C006E0D0 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000B874 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C006E060 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C006E3E0 (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C006E420 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C006E49C (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C00A6598 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C01A3498 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C01A4E90 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C01A4F28 (-RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C01AF804 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  struct DirectComposition::CBaseAnimation **v9; // r15
  struct DirectComposition::CBaseAnimation **v10; // r12
  struct DirectComposition::CAnimationBinding *v11; // rax
  __int64 v12; // rax
  DirectComposition::CApplicationChannel *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  struct DirectComposition::CBaseAnimation **v16; // rdx
  struct DirectComposition::CAnimationBinding *v17; // rcx
  struct DirectComposition::CAnimationBinding *v18; // rdx
  _DWORD *v20; // r14
  __int64 v21; // rax
  _DWORD *v22; // r14
  int v23; // [rsp+30h] [rbp-30h] BYREF
  struct DirectComposition::CAnimationBinding *v24; // [rsp+38h] [rbp-28h] BYREF
  struct DirectComposition::CAnimationBinding *v25; // [rsp+40h] [rbp-20h] BYREF
  struct DirectComposition::CAnimationBinding *v26; // [rsp+48h] [rbp-18h] BYREF
  struct DirectComposition::CAnimationBinding *v27; // [rsp+50h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v29; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  v5 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v24, &v25, &v27);
  v9 = (struct DirectComposition::CBaseAnimation **)v24;
  v10 = (struct DirectComposition::CBaseAnimation **)v25;
  v11 = v25;
  if ( v24 )
    v11 = v24;
  v29 = v11;
  v12 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 120LL))(v12, 2LL) )
  {
    v14 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
    if ( v14 )
      v4 = v14 - 16;
    if ( v4 && *(_DWORD *)(v4 + 156) )
    {
      DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
      v20 = 0LL;
      v23 = 0;
      if ( v29
        && (v21 = (***((__int64 (__fastcall ****)(_QWORD))v29 + 3))(*((_QWORD *)v29 + 3)), (v20 = (_DWORD *)v21) != 0LL)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 120LL))(v21, 148LL) )
      {
        v23 = v20[10];
      }
      else
      {
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, int *))(*(_QWORD *)a2 + 208LL))(
          a2,
          a3,
          &v23);
      }
      if ( v20 && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v20 + 120LL))(v20, 2LL) )
      {
        v22 = v20 - 4;
        if ( *(_QWORD *)(v4 + 168) || (*(_DWORD *)(v4 + 32) & 0x1000) != 0 || v22 == (_DWORD *)v4 )
          return (unsigned int)-1073741811;
        if ( v22 )
        {
          *(_QWORD *)(v4 + 168) = v22;
          DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(v22 + 4));
          DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
            (DirectComposition::CAnimationMarshaler *)v22,
            (bool *)&v29,
            (__int64 *)(v4 + 184),
            (unsigned __int64 *)(v4 + 192));
          *(_BYTE *)(v4 + 200) ^= ((unsigned __int8)v29 ^ *(_BYTE *)(v4 + 200)) & 1;
          v22[8] |= 0x1000u;
        }
      }
      v5 = a3;
      *(_DWORD *)(v4 + 176) = v23;
    }
  }
  v15 = 0;
  if ( v10 )
    goto LABEL_17;
  if ( v9 && v9[3] != a4 )
    goto LABEL_13;
  v16 = (struct DirectComposition::CBaseAnimation **)v27;
  if ( v27 )
  {
    if ( *((struct DirectComposition::CBaseAnimation **)v27 + 3) != a4 )
      goto LABEL_13;
  }
  if ( v9 )
    goto LABEL_41;
  if ( !v27 )
  {
LABEL_13:
    v17 = (struct DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
    if ( v17 )
    {
      *((_QWORD *)this + 44) = 0LL;
      v26 = v17;
      DirectComposition::CAnimationBinding::Initialize(v17, a2, v5, a4);
    }
    else
    {
      v15 = DirectComposition::CAnimationBinding::Create(a2, v5, a4, &v26);
      if ( (v15 & 0x80000000) != 0 )
        return v15;
    }
    v13 = (DirectComposition::CApplicationChannel *)*((unsigned int *)this + 6);
    v9 = (struct DirectComposition::CBaseAnimation **)v24;
    v10 = (struct DirectComposition::CBaseAnimation **)v25;
    if ( (int)v13 > 2 )
    {
      *(_QWORD *)v26 = 0LL;
    }
    else
    {
      v18 = v26;
      v13 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 55);
      *(_QWORD *)v26 = v13;
      *((_QWORD *)this + 55) = v18;
    }
LABEL_17:
    if ( !v9 )
    {
      v16 = (struct DirectComposition::CBaseAnimation **)v27;
      if ( !v27 )
      {
LABEL_19:
        if ( v10 && v10[3] != a4 )
          DirectComposition::CAnimationBinding::Reassign((DirectComposition::CAnimationBinding *)v10, a4, this);
        return v15;
      }
      goto LABEL_43;
    }
LABEL_41:
    if ( v9[3] != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        this,
        (struct DirectComposition::CAnimationBinding *)v9);
    return v15;
  }
LABEL_43:
  if ( v16[3] != a4 )
    goto LABEL_19;
  if ( *((_QWORD *)this + 56) )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(
      v13,
      (struct DirectComposition::CAnimationBinding *)v16,
      (struct DirectComposition::CAnimationBinding **)this + 56);
  DirectComposition::CAnimationBinding::RemovingToBound((DirectComposition::CAnimationBinding *)v16);
  if ( v10 )
    DirectComposition::CApplicationChannel::DeleteAddingBinding(
      this,
      (struct DirectComposition::CAnimationBinding *)v10);
  return v15;
}
