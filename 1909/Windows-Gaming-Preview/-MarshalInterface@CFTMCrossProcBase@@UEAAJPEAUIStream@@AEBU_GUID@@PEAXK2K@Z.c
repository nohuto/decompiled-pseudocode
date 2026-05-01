/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180041C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003D080 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041EA0 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x180043CDA (CoTaskMemFree_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::MarshalInterface(
        IUnknown *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  HRESULT FTM; // esi
  _QWORD *v12; // rax
  unsigned __int64 lpVtbl_low; // rbx
  unsigned __int64 v14; // rbx
  void *v15; // rdi
  int v16; // eax
  void *v17; // rcx
  void *v19; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF

  v19 = 0LL;
  FTM = CFTMCrossProcBase::_GetFTM(this, a2, &v19);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, struct _GUID *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v19 + 40LL))(
            v19,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( FTM >= 0 && a5 != 3 )
    {
      v12 = (_QWORD *)((__int64 (__fastcall *)(IUnknown *))this->lpVtbl[3].Release)(this);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v12 || *(_QWORD *)GUID_NULL.Data4 != v12[1] )
      {
        FTM = IStream_Write((IStream *)a2, &this[4], 4u);
        if ( FTM >= 0 )
        {
          FTM = (*(__int64 (__fastcall **)(struct _GUID *, _QWORD, __int64, __int64 *))(*(_QWORD *)&a2->Data1 + 40LL))(
                  a2,
                  0LL,
                  1LL,
                  &v22);
          if ( FTM >= 0 )
          {
            FTM = ((__int64 (__fastcall *)(IUnknown *, struct _GUID *, const struct _GUID *, void *, unsigned int, void *, unsigned int))this->lpVtbl[3].AddRef)(
                    this,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
            if ( FTM >= 0 )
            {
              FTM = (*(__int64 (__fastcall **)(struct _GUID *, _QWORD, __int64, __int64 *))(*(_QWORD *)&a2->Data1 + 40LL))(
                      a2,
                      0LL,
                      1LL,
                      &v21);
              if ( FTM >= 0 )
              {
                lpVtbl_low = LODWORD(this[4].lpVtbl);
                if ( v21 - v22 <= lpVtbl_low )
                {
                  if ( v21 - v22 < lpVtbl_low )
                  {
                    if ( v21 - v22 > lpVtbl_low || (v14 = lpVtbl_low - (v21 - v22), v14 > 0xFFFFFFFF) )
                    {
                      FTM = -2147024362;
                    }
                    else
                    {
                      v15 = 0LL;
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v14, 1uLL) )
                      {
                        v16 = CTCoAllocPolicy::Alloc(
                                (IMalloc *)(unsigned int)v14,
                                ((unsigned int)v14 * (unsigned __int128)1uLL) >> 64,
                                (unsigned int)v14,
                                &pv);
                        v15 = pv;
                        FTM = v16;
                        if ( v16 >= 0 )
                          FTM = IStream_Write((IStream *)a2, pv, v14);
                      }
                      else
                      {
                        FTM = -2147024362;
                      }
                      CoTaskMemFree_0(v15);
                    }
                  }
                }
                else
                {
                  FTM = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)FTM;
}
