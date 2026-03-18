/*
 * XREFs of ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18008A894
 * Callers:
 *     ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x180089140 (-s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A9BC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18008AAA0 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18008AC60 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceManager::ProcessKernelTokens(HANDLE *this)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  void *v14; // rsi
  HANDLE v16; // [rsp+38h] [rbp-59h] BYREF
  void *v17; // [rsp+40h] [rbp-51h]
  __int64 v18; // [rsp+48h] [rbp-49h]
  _BYTE v19[128]; // [rsp+58h] [rbp-39h] BYREF

  v1 = 0;
  v16 = 0LL;
  v18 = 0LL;
  v17 = v19;
  if ( !*((_BYTE *)this + 352) )
  {
    do
    {
      ResetEvent(this[43]);
      if ( *((_BYTE *)this + 352) )
        break;
      CMmcssTask::Clone((CMmcssTask *)((char *)this[41] + 144), (struct CMmcssTask *)(this + 45));
      v3 = CSurfaceManager::EnsureAdapterInfo((CSurfaceManager *)this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x20Du);
      }
      else
      {
        v16 = this[43];
        v5 = *((unsigned int *)this + 116);
        LODWORD(v18) = v5;
        if ( (unsigned int)v5 > 5 )
        {
          v14 = operator new(saturated_mul(v5, 0x18uLL));
          if ( !v14 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x21Bu);
            break;
          }
          if ( v17 != v19 )
            WPF::ProcessHeapImpl::Free(v17);
          LODWORD(v5) = v18;
          v17 = v14;
        }
        v6 = 0LL;
        if ( (_DWORD)v5 )
        {
          do
          {
            v7 = 3 * v6;
            v8 = v17;
            v9 = (unsigned int)v6;
            v6 = (unsigned int)(v6 + 1);
            v9 *= 2LL;
            *((_QWORD *)v17 + v7) = *((_QWORD *)this[55] + v9);
            v10 = *((_QWORD *)this[55] + v9 + 1);
            v8[v7 + 2] = 0LL;
            v8[v7 + 1] = v10;
          }
          while ( (unsigned int)v6 < (unsigned int)v18 );
        }
        v11 = NtTokenManagerThread(&v16);
        if ( v11 < 0 )
        {
          v1 = v11 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11 | 0x10000000, 0x236u);
        }
        CSurfaceManager::ReleaseAdapterInfo((CSurfaceManager *)this);
      }
    }
    while ( !*((_BYTE *)this + 352) );
    if ( v17 != v19 )
      WPF::ProcessHeapImpl::Free(v17);
  }
  return v1;
}
