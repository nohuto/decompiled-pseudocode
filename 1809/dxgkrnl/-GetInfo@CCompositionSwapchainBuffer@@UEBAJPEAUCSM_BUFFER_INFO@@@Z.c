/*
 * XREFs of ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0056460
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C004F240 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::GetInfo(DxgkCompositionObject **this, void **a2, __int64 a3)
{
  NTSTATUS Handle; // edx
  DxgkCompositionObject *v6; // xmm1_8
  unsigned int v7; // r10d
  __int64 **v8; // rbx
  __int64 *i; // r8
  __int128 v10; // xmm0
  __m128d v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v15; // [rsp+38h] [rbp-20h]

  Handle = DxgkCompositionObject::CreateHandle(this[81], 0x10000000u, a3, 0, a2 + 111);
  if ( Handle >= 0 )
  {
    *(_DWORD *)a2 = 3;
    a2[1] = this[2];
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
    *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
    *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
    *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
    *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
    v6 = this[20];
    *((_DWORD *)a2 + 34) = 0;
    a2[16] = v6;
    *((_DWORD *)a2 + 35) = *((_DWORD *)this + 60);
    if ( *((_DWORD *)this + 60) )
    {
      v7 = 0;
      v8 = (__int64 **)(this + 28);
      for ( i = *v8; Handle >= 0 && i != (__int64 *)v8; i = (__int64 *)*i )
      {
        v10 = *((_OWORD *)i + 1);
        v11 = (__m128d)*((_OWORD *)i + 2);
        *((_DWORD *)a2 + 34) = *((_DWORD *)i + 4);
        v12 = v7 + 6LL;
        *((_QWORD *)&v15 + 1) = *(_QWORD *)&v11.m128d_f64[0];
        ++v7;
        *(_QWORD *)&v15 = *((_QWORD *)&v10 + 1);
        v13 = 3 * v12;
        *(_OWORD *)&a2[v13] = v15;
        a2[v13 + 2] = (void *)*(_OWORD *)&_mm_unpackhi_pd(v11, v11);
      }
    }
  }
  return (unsigned int)Handle;
}
