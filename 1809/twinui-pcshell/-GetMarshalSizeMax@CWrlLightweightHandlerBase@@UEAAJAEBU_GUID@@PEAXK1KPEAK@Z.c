/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800710D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071318 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  const struct _GUID *v12; // rdx
  signed int StdMarshaler; // ebx
  unsigned int *v14; // r14
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // eax
  void *v20[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v20[0] = 0LL;
  *a7 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, v20);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)v20[0] + 32LL))(
                     v20[0],
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     &a7);
    if ( StdMarshaler >= 0 )
    {
      v14 = (unsigned int *)((char *)this + 16);
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        v15 = *v14;
        v16 = -1;
        v17 = -1;
        v18 = *v14 + 4;
        if ( v18 >= *v14 )
          v17 = *v14 + 4;
        StdMarshaler = v18 < v15 ? 0x80070216 : 0;
        if ( v18 >= v15 )
        {
          if ( v17 + (int)a7 >= (unsigned int)a7 )
            v16 = v17 + (_DWORD)a7;
          StdMarshaler = v17 + (int)a7 < (unsigned int)a7 ? 0x80070216 : 0;
          *v7 = v16;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  return (unsigned int)StdMarshaler;
}
