/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180070E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005C57C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071318 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180119378 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  const struct _GUID *v11; // rdx
  signed int StdMarshaler; // edi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // rcx
  ULONG v17; // ebx
  void *v18; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h] BYREF

  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v11, &v18);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v18 + 40LL))(
                     v18,
                     pstm,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        StdMarshaler = IStream_Write(pstm, (char *)this + 16, 4u);
        if ( StdMarshaler >= 0 )
        {
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                           pstm,
                           0LL,
                           1LL,
                           &v21);
          if ( StdMarshaler >= 0 )
          {
            StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)this + 88LL))(
                             this,
                             pstm,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
            if ( StdMarshaler >= 0 )
            {
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                               pstm,
                               0LL,
                               1LL,
                               &v20);
              if ( StdMarshaler >= 0 )
              {
                v13 = v20 - v21;
                v14 = *((unsigned int *)this + 4);
                if ( v20 - v21 > v14 )
                {
                  StdMarshaler = -2147467259;
                }
                else if ( v20 - v21 < v14 )
                {
                  v16 = v14 < v13 ? -1LL : v14 - v13;
                  StdMarshaler = v14 < v13 ? 0x80070216 : 0;
                  if ( v14 >= v13 )
                  {
                    v17 = -1;
                    if ( v16 <= 0xFFFFFFFF )
                      v17 = v16;
                    StdMarshaler = v16 > 0xFFFFFFFF ? 0x80070216 : 0;
                    if ( v16 <= 0xFFFFFFFF )
                    {
                      pv = 0LL;
                      if ( is_mul_ok(v17, 1uLL) )
                      {
                        StdMarshaler = CTCoAllocPolicy::Alloc((void *)v17, 1, v17, &pv);
                        if ( StdMarshaler >= 0 )
                          StdMarshaler = IStream_Write(pstm, pv, v17);
                      }
                      else
                      {
                        StdMarshaler = -2147024362;
                      }
                      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return (unsigned int)StdMarshaler;
}
