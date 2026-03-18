/*
 * XREFs of ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1800571C0
 * Callers:
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@WJA@EAAXAEBUMilRectF@@@Z @ 0x1800EC7D0 (-DiscardRectangle@CHwDisplayRenderTarget@@WJA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180055EF8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqdddd @ 0x18015EDA4 (McTemplateU0xqdddd.c)
 */

void __fastcall CHwDisplayRenderTarget::DiscardRectangle(CHwDisplayRenderTarget *this, const struct MilRectF *a2)
{
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax
  float v7; // xmm0_4
  float v8; // xmm0_4
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]

  if ( (*(int (__fastcall **)(CHwDisplayRenderTarget *, __int64 *))(*(_QWORD *)this + 248LL))(this, &v14) >= 0 )
  {
    v4 = CFloatFPU::CeilingSat(*(float *)a2 - 0.5);
    v5 = *((float *)a2 + 1) - 0.5;
    v15 = v4;
    v6 = CFloatFPU::CeilingSat(v5);
    v7 = *((float *)a2 + 2) - 0.5;
    v16 = v6;
    if ( v7 < -2147483600.0 )
    {
      v17 = 0x80000000;
    }
    else if ( v7 >= 2147483600.0 )
    {
      v17 = 0x7FFFFFFF;
    }
    else
    {
      v17 = (int)ceilf_0(v7);
    }
    v8 = *((float *)a2 + 3) - 0.5;
    if ( v8 < -2147483600.0 )
    {
      v18 = 0x80000000;
    }
    else if ( v8 >= 2147483600.0 )
    {
      v18 = 0x7FFFFFFF;
    }
    else
    {
      v18 = (int)ceilf_0(v8);
    }
    v9 = *((_QWORD *)this + 17);
    v10 = *(_QWORD *)(v9 + 192);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**(_QWORD **)(v14 + 640) + 1064LL))(
        *(_QWORD *)(v14 + 640),
        *(_QWORD *)(v9 + 192),
        &v15,
        1LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xqdddd(v12, v11, v10, v13, v15, v16, v17, v18);
    }
  }
}
