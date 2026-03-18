/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01AAE10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0015200 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C01AABA4 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AAD08 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CDCompDynamicArrayBase **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // r12
  int v7; // edi
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  DirectComposition::CDCompDynamicArrayBase *v17; // rcx
  int v18; // eax
  DirectComposition::CDCompDynamicArrayBase *v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rcx
  DirectComposition::CDCompDynamicArrayBase *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // r12d
  int v28; // ecx
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  int v31; // eax
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v36; // [rsp+28h] [rbp-30h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v11 = a3 - 20;
  if ( !v11 )
  {
    if ( !a4 && *((_DWORD *)this + 86) )
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        (DirectComposition::CInteractionTrackerMarshaler *)this,
        a2);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
      return (unsigned int)v7;
    }
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
      (DirectComposition::CInteractionTrackerMarshaler *)this,
      a2);
    v24 = Size >> 3;
    if ( !(unsigned int)(Size >> 3) )
      goto LABEL_56;
    v25 = Win32AllocPoolWithQuota(16LL * (unsigned int)v24, 0x72694344u);
    v26 = 0;
    this[42] = (DirectComposition::CDCompDynamicArrayBase *)v25;
    if ( !v25 )
      v26 = -1073741801;
    v7 = v26;
    if ( v26 < 0 )
    {
LABEL_57:
      if ( v7 < 0 )
        goto LABEL_58;
      return (unsigned int)v7;
    }
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v24 )
      {
LABEL_55:
        v6 = a6;
        if ( v7 >= 0 )
        {
LABEL_56:
          *v6 = 1;
          *((_DWORD *)this + 4) &= ~0x800u;
          goto LABEL_57;
        }
LABEL_58:
        if ( this[42] )
          DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
            (DirectComposition::CInteractionTrackerMarshaler *)this,
            a2);
        return (unsigned int)v7;
      }
      v28 = a4[2 * v27];
      v29 = (unsigned int)(v28 - 1);
      if ( v28 && v29 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v30 = *(_QWORD *)(v29 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      }
      else
      {
        v30 = 0LL;
      }
      if ( v30 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 120LL))(v30, 100LL) )
      {
        *((_QWORD *)this[42] + 2 * v27) = v30;
        DirectComposition::CResourceMarshaler::AddRef(*((DirectComposition::CResourceMarshaler **)this[42] + 2 * v27));
        ++*((_DWORD *)this + 86);
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v7 >= 0 )
      {
        v31 = a4[2 * v27 + 1];
        if ( !v31 )
          goto LABEL_53;
        v32 = (unsigned int)(v31 - 1);
        if ( v32 >= *((_QWORD *)a2 + 10) )
        {
          v33 = 0LL;
        }
        else
        {
          _mm_lfence();
          v33 = *(_QWORD *)(v32 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
        }
        if ( !v33 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 120LL))(v33, 87LL) )
        {
          v7 = -1073741811;
LABEL_53:
          *((_QWORD *)this[42] + 2 * v27 + 1) = 0LL;
          goto LABEL_54;
        }
        *((_QWORD *)this[42] + 2 * v27 + 1) = v33;
        DirectComposition::CResourceMarshaler::AddRef(*((DirectComposition::CResourceMarshaler **)this[42] + 2 * v27 + 1));
      }
LABEL_54:
      ++v27;
      if ( v7 < 0 )
        goto LABEL_55;
    }
  }
  v12 = v11 - 20;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 21;
          if ( v16 )
          {
            if ( v16 != 1 )
            {
              v7 = -1073741811;
              goto LABEL_57;
            }
            *((_OWORD *)this + 23) = *(_OWORD *)a4;
            *((_OWORD *)this + 24) = *((_OWORD *)a4 + 1);
            *((_DWORD *)this + 100) = a4[8];
            *a6 = 1;
            *((_DWORD *)this + 4) &= ~0x1000000u;
            return (unsigned int)v7;
          }
          v17 = this[44];
          v18 = a4[2];
          Src = *(_QWORD *)a4;
          v36 = v18;
          if ( !v17 )
          {
            v19 = (DirectComposition::CDCompDynamicArrayBase *)Win32AllocPoolWithQuotaZInit(0x28uLL, 0x61644344u);
            v17 = v19;
            if ( v19 )
            {
              *((_BYTE *)v19 + 8) = 1;
              *((_QWORD *)v19 + 4) = 12LL;
            }
            else
            {
              v17 = 0LL;
            }
            this[44] = v17;
          }
          if ( *((_DWORD *)this + 90) != *((_QWORD *)v17 + 3)
            || (v7 = DirectComposition::CDCompDynamicArrayBase::Grow(v17, 1LL, 0x72694344u), v7 >= 0) )
          {
            memmove(
              (void *)(*(_QWORD *)this[44] + *((_QWORD *)this[44] + 4) * *((unsigned int *)this + 90)),
              &Src,
              *((_QWORD *)this[44] + 4));
            ++*((_DWORD *)this + 90);
            *a6 = 1;
          }
          goto LABEL_57;
        }
        v20 = 2;
      }
      else
      {
        v20 = 3;
      }
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v20 = 0;
  }
  v21 = (__int64)this[v20 + 31];
  if ( v21 )
  {
    Win32FreePool(v21);
    this[v20 + 31] = 0LL;
  }
  v22 = (DirectComposition::CDCompDynamicArrayBase *)Win32AllocPoolWithQuotaZInit(Size, 0x72694344u);
  this[v20 + 31] = v22;
  if ( !v22 )
  {
    v7 = -1073741801;
    goto LABEL_58;
  }
  memmove(v22, a4, Size);
  this[v20 + 35] = (DirectComposition::CDCompDynamicArrayBase *)Size;
  *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                            v23,
                                            v20);
  *a6 = 1;
  return (unsigned int)v7;
}
