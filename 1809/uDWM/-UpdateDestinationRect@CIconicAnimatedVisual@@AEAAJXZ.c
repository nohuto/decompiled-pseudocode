/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADF14
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800AE210 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180031E30 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(const struct tagRECT *this)
{
  LONG *p_right; // rbp
  const struct tagRECT *v3; // rsi
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r8
  int v9; // r10d
  __int64 v10; // rcx
  LONG top; // r11d
  int v12; // ecx
  int v13; // eax
  float v14; // xmm2_4
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  float v19; // xmm1_4
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  _DWORD v32[4]; // [rsp+30h] [rbp-38h] BYREF
  double v33[2]; // [rsp+40h] [rbp-28h] BYREF

  p_right = &this[21].right;
  v3 = this + 22;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(this + 22, (struct CResource **)&this[21].right);
  v5 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    if ( *(_QWORD *)p_right )
    {
      v6 = *(_QWORD *)&this[20].left;
      if ( v6 )
      {
        if ( *(_QWORD *)&this[20].right )
        {
          v7 = 0;
          v8 = *(_QWORD *)&this[18].left;
          if ( v3->right - v3->left >= 0 )
            v7 = v3->right - v3->left;
          v9 = 0;
          v10 = *(_QWORD *)(v8 + 512);
          if ( v10 )
            v9 = *(_DWORD *)(v10 + 120);
          top = this[22].top;
          v12 = v7 / 2;
          v13 = 0;
          v14 = (float)(v12 - v9 / 2 - v3->left);
          if ( this[22].bottom - top >= 0 )
            v13 = this[22].bottom - top;
          v15 = 0;
          *(float *)v32 = v14;
          v16 = *(_QWORD *)(v8 + 512);
          if ( v16 )
            v15 = *(_DWORD *)(v16 + 124);
          v17 = v13 / 2;
          v18 = 0;
          v19 = (float)(v17 - v15 / 2 - top);
          *(float *)&v32[1] = v19;
          v20 = *(_QWORD *)(v8 + 512);
          if ( v20 )
            v18 = *(_DWORD *)(v20 + 120);
          v21 = 0;
          *(float *)&v32[2] = (float)v18 + v14;
          v22 = *(_QWORD *)(v8 + 512);
          if ( v22 )
            v21 = *(_DWORD *)(v22 + 124);
          *(float *)&v32[3] = (float)v21 + v19;
          v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(v6 + 16) + 312LL))(
                  *(_QWORD *)(v6 + 16),
                  *(unsigned int *)(v6 + 24),
                  v32);
          v5 = v23;
          if ( v23 >= 0 )
          {
            v24 = *(_QWORD *)&this[18].left;
            v25 = 0;
            v26 = *(_QWORD *)(v24 + 512);
            if ( v26 )
              v25 = *(_DWORD *)(v26 + 120);
            v27 = 0;
            v33[0] = (double)v25;
            v28 = *(_QWORD *)(v24 + 512);
            if ( v28 )
              v27 = *(_DWORD *)(v28 + 124);
            v29 = *(_QWORD *)&this[20].right;
            v33[1] = (double)v27;
            v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v29 + 16) + 320LL))(
                    *(_QWORD *)(v29 + 16),
                    *(unsigned int *)(v29 + 24),
                    v33);
            v5 = v30;
            if ( v30 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xABu);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xA3u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x93u);
  }
  return v5;
}
