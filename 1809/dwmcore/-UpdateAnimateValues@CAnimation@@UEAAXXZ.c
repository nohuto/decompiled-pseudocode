/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800C80B0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x180068AA0 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180068CF0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800C5348 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxqf @ 0x18018AAA8 (McTemplateU0xxxqf.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18021B748 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18021BB5C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

void __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r15
  char AdjustedHandoffValue; // bp
  _QWORD *v5; // rsi
  unsigned int (__fastcall ***v6)(_QWORD); // rcx
  float v7; // xmm7_4
  char v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned int v11; // edi
  unsigned int v12; // edi
  __int64 v13; // rax
  unsigned int i; // edi
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // ecx
  double v19; // xmm6_8
  __int64 v20; // rax
  double v21; // xmm0_8
  double v22; // xmm6_8
  float v23; // xmm6_4
  unsigned int v24; // edi
  int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int j; // eax
  int v29; // [rsp+40h] [rbp-88h] BYREF
  __int64 v30; // [rsp+48h] [rbp-80h]
  _QWORD v31[2]; // [rsp+50h] [rbp-78h] BYREF
  char v32; // [rsp+D0h] [rbp+8h]
  double v33; // [rsp+D0h] [rbp+8h]
  float v34; // [rsp+D8h] [rbp+10h]
  float v35; // [rsp+E0h] [rbp+18h] BYREF
  int v36; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this - 5) + 480LL);
  if ( v2 >= *((_QWORD *)this + 10) && *((_DWORD *)this + 8) )
  {
    *((_BYTE *)this + 56) |= 1u;
    v3 = *((_QWORD *)this + 18);
    if ( (*((_BYTE *)this + 56) & 0x10) == 0 )
      v3 += v2 - *((_QWORD *)this + 19);
    AdjustedHandoffValue = 0;
    v35 = 0.0;
    v29 = 0;
    v5 = (_QWORD *)((char *)this + 208);
    v6 = (unsigned int (__fastcall ***)(_QWORD))*((_QWORD *)this + 26);
    v7 = 0.0;
    v31[0] = 0LL;
    v8 = 0;
    v36 = 0;
    v9 = v3;
    v34 = 0.0;
    if ( (**v6)(v6) )
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, 0LL);
    else
      v10 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5) - 1;
    if ( v11 >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5) )
      v30 = 0LL;
    else
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, v11);
    v32 = 0;
    if ( v10 )
    {
      v12 = *((_DWORD *)this + 54);
      if ( v12 != -1 )
      {
        v13 = v12 >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
            ? 0LL
            : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, v12);
        if ( *(_QWORD *)(v13 + 8) > v3 )
          *((_DWORD *)this + 54) = -1;
      }
      for ( i = *((_DWORD *)this + 54); ; *((_DWORD *)this + 54) = i )
      {
        if ( ++i < (unsigned __int64)(**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5) )
        {
          v15 = i >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
              ? 0LL
              : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, i);
          if ( *(_QWORD *)(v15 + 8) <= v3 )
            continue;
        }
        break;
      }
      v16 = *((_DWORD *)this + 54);
      if ( v16 != -1 )
      {
        AdjustedHandoffValue = 1;
        v17 = v10 + 32LL * v16;
        v18 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 == 4 || v18 == 6 && v17 == v30 )
          v32 = 1;
        while ( ((v18 - 3) & 0xFFFFFFFC) == 0 && v18 != 4 )
        {
          if ( v10 == v17
            || (v27 = CAnimationInterpolator::TransformTime(
                        (CAnimation *)((char *)this + 208),
                        (const struct DwmAnimationPrimitive *)v17,
                        v9),
                v9 = v27,
                *(_QWORD *)(v17 + 8) < v27) )
          {
            AdjustedHandoffValue = 0;
            goto LABEL_36;
          }
          v17 -= 32LL;
          if ( *(_QWORD *)(v17 + 8) > v27 )
          {
            while ( v17 != v10 )
            {
              v17 -= 32LL;
              if ( *(_QWORD *)(v17 + 8) <= v27 )
                goto LABEL_53;
            }
            goto LABEL_60;
          }
LABEL_53:
          v18 = *(_DWORD *)v17;
        }
        switch ( v18 )
        {
          case 1:
            v19 = (double)((int)v9 - *(_DWORD *)(v17 + 8));
            v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
            v21 = (double)(int)v20;
            if ( v20 < 0 )
              v21 = v21 + 1.844674407370955e19;
            v22 = v19 / v21;
            v23 = *(float *)(v17 + 16) * (v22 * v22) * v22
                + *(float *)(v17 + 20) * (v22 * v22)
                + *(float *)(v17 + 24) * v22
                + *(float *)(v17 + 28);
            break;
          case 4:
            v23 = *(float *)(v17 + 16);
            break;
          case 2:
            v23 = CAnimationInterpolator::InterpolateSinusoidal(
                    (CAnimation *)((char *)this + 208),
                    (const struct DwmAnimationPrimitive *)v17,
                    v9);
            break;
          default:
LABEL_60:
            AdjustedHandoffValue = 0;
            goto LABEL_30;
        }
        if ( _finite(v23) )
        {
          v8 = v32;
          v7 = v23;
          v34 = v23;
        }
        else
        {
          AdjustedHandoffValue = 0;
        }
      }
    }
LABEL_30:
    if ( AdjustedHandoffValue )
    {
      AdjustedHandoffValue = (*(__int64 (__fastcall **)(_QWORD, int *, int *, _QWORD *))(*(_QWORD *)*v5 + 16LL))(
                               *v5,
                               &v36,
                               &v29,
                               v31);
      if ( AdjustedHandoffValue )
      {
        if ( v36 )
        {
          v7 = v34;
          AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue((char *)this + 208, v3);
        }
        if ( AdjustedHandoffValue )
          v35 = v7;
      }
    }
LABEL_36:
    *((_BYTE *)this + 56) &= ~4u;
    *((_BYTE *)this + 56) |= 4 * (v8 & 1);
    if ( AdjustedHandoffValue )
    {
      v24 = 0;
      v33 = (double)(int)v3 / (double)(int)g_qpcFrequency.LowPart;
      if ( *((_DWORD *)this + 8) )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, float *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v24)
                                                                   + 88LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v24),
            *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v24 + 8),
            18LL,
            &v35);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxxqf(
              *((_QWORD *)this + 1),
              v25,
              LODWORD(v33),
              (_DWORD)this - 56,
              *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v24),
              *(_DWORD *)(*((_QWORD *)this + 1) + 16LL * v24 + 8),
              SLOBYTE(v35));
          v26 = *((_DWORD *)this + 8);
          ++v24;
        }
        while ( v24 < v26 );
        if ( v26 )
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 5) + 224LL) + 416LL) |= 2u;
      }
    }
    if ( *((_DWORD *)this + 61) )
    {
      if ( *((_DWORD *)this + 60) )
      {
        for ( j = *((_DWORD *)this + 32); j < *((_DWORD *)this + 30); *((_DWORD *)this + 32) = j )
        {
          if ( *(_QWORD *)(*((_QWORD *)this + 12) + 16LL * j) > v3 )
            break;
          v31[0] = *((unsigned int *)this + 61);
          v31[1] = *((unsigned int *)this + 60);
          CoreUICallSend(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 5) + 1208LL) + 56LL),
            v31,
            2LL,
            1LL,
            0,
            &unk_1802763C7);
          j = *((_DWORD *)this + 32) + 1;
        }
      }
    }
    if ( (*((_BYTE *)this + 56) & 0xC) == 4 )
      CAnimation::EndAnimation((CAnimation *)((char *)this - 56));
  }
}
