/*
 * XREFs of ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801D6364
 * Callers:
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x18021DB84 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::InputTypeToInertiaSourceType @ 0x1801D5CA4 (_anonymous_namespace_--InputTypeToInertiaSourceType.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStart(__int64 a1, int a2, float a3, float a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v8; // rdi
  __m128 v9; // xmm6
  float v10; // xmm0_4
  __int64 v11; // rcx
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  signed int LastError; // eax
  __int128 v17; // [rsp+38h] [rbp-39h]
  _DWORD v18[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h] BYREF
  int v20; // [rsp+68h] [rbp-9h]
  int v21; // [rsp+6Ch] [rbp-5h]
  int v22; // [rsp+70h] [rbp-1h]
  int v23; // [rsp+74h] [rbp+3h]
  int v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+7Ch] [rbp+Bh]

  v4 = *(_QWORD *)(a1 + 104);
  v5 = 0;
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 16);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      memset_0(&v19, 0, 0x28uLL);
      *(float *)v18 = a3;
      *(float *)&v18[1] = a4;
      v18[2] = anonymous_namespace_::InputTypeToInertiaSourceType(a2);
      v9 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 164));
      LODWORD(v17) = (int)ceilf_0(v9.m128_f32[0]);
      DWORD1(v17) = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
      DWORD2(v17) = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
      v10 = ceilf_0(_mm_shuffle_ps(v9, v9, 255).m128_f32[0]);
      v11 = *(unsigned int *)(a1 + 1696);
      HIDWORD(v17) = (int)v10;
      v20 = *(_DWORD *)(a1 + 280);
      v12 = *(_DWORD *)(a1 + 296);
      v19 = v17;
      v21 = *(_DWORD *)(a1 + 284);
      v23 = *(_DWORD *)(a1 + 300);
      v13 = *(_DWORD *)(a1 + 332);
      v22 = v12;
      v14 = *(_DWORD *)(a1 + 328);
      v25 = v13;
      v24 = v14;
      if ( !(unsigned int)ReportInertia(v11, 5LL, 0LL, v18, &v19) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        else
          v5 = LastError;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return v5;
}
