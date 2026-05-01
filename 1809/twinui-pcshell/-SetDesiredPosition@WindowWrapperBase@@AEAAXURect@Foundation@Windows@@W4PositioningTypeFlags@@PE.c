/*
 * XREFs of ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800496D4
 * Callers:
 *     _lambda_248f8e1f8d7e47609613baa4997faea8_::operator() @ 0x1800474D8 (_lambda_248f8e1f8d7e47609613baa4997faea8_--operator().c)
 *     _lambda_34529aaea01de91475c66a20aa892976_::operator() @ 0x180075114 (_lambda_34529aaea01de91475c66a20aa892976_--operator().c)
 *     _lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_::operator() @ 0x18024F864 (_lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_--operator().c)
 * Callees:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180020F7C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetDesiredPosition(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  char v9; // r14
  float v10; // xmm1_4
  _OWORD *v11; // r8
  __int128 v12; // xmm1
  char v13; // si
  _OWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 200LL))(*(_QWORD *)(a1 + 280));
  *(_BYTE *)(a1 + 496) = 1;
  if ( (a3 & 1) != 0 )
  {
    if ( *(float *)(a1 + 480) == *(float *)a2 && *(float *)(a1 + 484) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)(a1 + 480) = *(_DWORD *)a2;
      *(_DWORD *)(a1 + 484) = *(_DWORD *)(a2 + 4);
    }
  }
  v9 = 0;
  if ( (a3 & 2) != 0 )
  {
    v10 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 488) == v10 && *(float *)(a1 + 492) == *(float *)(a2 + 12) )
    {
      if ( !IsPPIEdition() )
        a3 &= ~2u;
    }
    else
    {
      *(float *)(a1 + 488) = v10;
      v9 = 1;
      *(_DWORD *)(a1 + 492) = *(_DWORD *)(a2 + 12);
    }
  }
  v11 = (_OWORD *)(a1 + 504);
  v16 = *(_DWORD *)(a1 + 544);
  v12 = *(_OWORD *)(a1 + 520);
  v14[0] = *(_OWORD *)(a1 + 504);
  v15 = *(_QWORD *)(a1 + 536);
  v14[1] = v12;
  if ( a4 )
  {
    *v11 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 520) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 536) = *(_QWORD *)(a4 + 32);
    *(_DWORD *)(a1 + 544) = *(_DWORD *)(a4 + 40);
  }
  v13 = 0;
  if ( a4 )
    v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 136LL))(a1, v14);
  if ( (a3 & 3) != 0 || v13 )
  {
    LOBYTE(v11) = v13;
    LOBYTE(v8) = v9;
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 144LL))(a1, v8, v11);
    WindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v13) && !*(_BYTE *)(a1 + 552) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  }
}
