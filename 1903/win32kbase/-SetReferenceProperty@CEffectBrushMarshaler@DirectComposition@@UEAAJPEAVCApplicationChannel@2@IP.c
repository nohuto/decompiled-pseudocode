/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00808D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z @ 0x1C0080C10 (-CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // edi
  __int64 v10; // rdx
  int v11; // ebp
  __int64 v12; // rax
  struct DirectComposition::CResourceMarshaler **v13; // r14
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rdx
  DirectComposition::CResourceMarshaler *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // kr00_8
  void *v21; // rax

  v5 = 0;
  *a5 = 0;
  if ( (a3 & 0xC0000000) != 0x80000000 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
        return (unsigned int)-1073741811;
      v10 = 132LL;
      v11 = 64;
      v12 = 64LL;
    }
    else
    {
      v10 = 25LL;
      v11 = 32;
      v12 = 56LL;
    }
    v13 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v12);
    if ( (DirectComposition::CEffectBrushMarshaler *)((char *)this + v12)
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            v10)) )
    {
      if ( *v13 != a4 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, *v13);
        *v13 = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= v11;
LABEL_11:
        *a5 = 1;
        return (unsigned int)v5;
      }
      return (unsigned int)v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          176LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          19LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          8LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          108LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          67LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          196LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          52LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( !*((_QWORD *)this + 9) )
  {
    v19 = *((_QWORD *)this + 7);
    if ( v19 )
    {
      v20 = *(unsigned int *)(v19 + 64);
      if ( is_mul_ok(v20, 8uLL) )
      {
        v21 = Win32AllocPoolWithQuotaZInit(8 * v20, 0x69664344u);
        *((_QWORD *)this + 9) = v21;
        if ( v21 )
          *((_DWORD *)this + 20) = *(_DWORD *)(*((_QWORD *)this + 7) + 64LL);
        else
          v5 = -1073741801;
      }
      else
      {
        v5 = -1073741675;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  v15 = a3 & 0x3FFFFFFF;
  if ( v5 >= 0 )
  {
    if ( v15 >= *((unsigned int *)this + 20) )
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      if ( DirectComposition::CBrushMarshaler::CheckForCycle(this, a4) )
        v5 = -1073741811;
      if ( v5 >= 0 )
      {
        v16 = *((_QWORD *)this + 9);
        v17 = *(struct DirectComposition::CResourceMarshaler **)(v16 + 8 * v15);
        if ( v17 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v17);
          v16 = *((_QWORD *)this + 9);
        }
        *(_QWORD *)(v16 + 8 * v15) = a4;
        v18 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 9) + 8 * v15);
        if ( v18 )
          DirectComposition::CResourceMarshaler::AddRef(v18);
        *((_DWORD *)this + 21) = 0;
        goto LABEL_11;
      }
    }
  }
  return (unsigned int)v5;
}
