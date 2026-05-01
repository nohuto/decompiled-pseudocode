/*
 * XREFs of ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180041B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041EA0 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetMarshalSizeMax(
        CFTMCrossProcBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  signed int FTM; // ebx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  int v16; // eax
  void *v17; // rcx
  void *v19; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v19 = 0LL;
  *a7 = 0;
  FTM = CFTMCrossProcBase::_GetFTM((LPUNKNOWN)this, a2, &v19);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v19 + 32LL))(
            v19,
            a2,
            a3,
            a4,
            a5,
            a6,
            v7);
    if ( FTM >= 0 && a4 != 3 )
    {
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(CFTMCrossProcBase *))(*(_QWORD *)this + 88LL))(this);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v13 || *(_QWORD *)GUID_NULL.Data4 != v13[1] )
      {
        FTM = (*(__int64 (__fastcall **)(CFTMCrossProcBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)this + 72LL))(
                this,
                a2,
                a3,
                a4,
                a5,
                a6,
                &a7);
        if ( FTM >= 0 )
        {
          _InterlockedExchange((volatile __int32 *)this + 8, (__int32)a7);
          v14 = *((_DWORD *)this + 8);
          if ( v14 + 4 < v14 )
          {
            FTM = -2147024362;
          }
          else
          {
            v15 = *v7 + v14 + 4;
            v16 = -1;
            if ( v15 >= *v7 )
              v16 = v15;
            FTM = v15 < *v7 ? 0x80070216 : 0;
            *v7 = v16;
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
