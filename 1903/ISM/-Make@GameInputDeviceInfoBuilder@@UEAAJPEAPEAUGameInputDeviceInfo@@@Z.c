/*
 * XREFs of ?Make@GameInputDeviceInfoBuilder@@UEAAJPEAPEAUGameInputDeviceInfo@@@Z @ 0x1800D3D30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputDeviceInfoBuilder::Make(GameInputDeviceInfoBuilder *this, struct GameInputDeviceInfo **a2)
{
  char *v2; // rbx
  size_t v5; // rsi
  int v6; // edx
  _OWORD *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  const void *v13; // rdx
  const void *v14; // rax
  size_t v15; // rcx
  unsigned __int64 v16; // rsi
  size_t v17; // r8

  v2 = 0LL;
  *a2 = 0LL;
  v5 = 344LL;
  if ( *((_QWORD *)this + 45) )
  {
    *((_QWORD *)this + 46) = 344LL;
    v5 = 400LL;
  }
  v7 = operator new(v5, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = 2LL;
    v10 = (_OWORD *)((char *)this + 16);
    v11 = v7;
    do
    {
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v11[4] = v10[4];
      v11[5] = v10[5];
      v11[6] = v10[6];
      v11 += 8;
      v12 = v10[7];
      v10 += 8;
      *(v11 - 1) = v12;
      --v9;
    }
    while ( v9 );
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    *((_QWORD *)v11 + 10) = *((_QWORD *)v10 + 10);
    memset_0((char *)v7 + 344, 0, v5 - 344);
    *(_QWORD *)v7 = v5;
    v13 = (const void *)*((_QWORD *)this + 45);
    v14 = v13;
    if ( v13 )
    {
      v15 = *((_QWORD *)this + 46);
      if ( v15 < v5 )
      {
        v16 = v5 - v15;
        v17 = 56LL;
        if ( v16 < 0x38 )
          v17 = v16;
        memcpy_0((char *)v7 + v15, v13, v17);
        v14 = (const void *)*((_QWORD *)this + 45);
      }
    }
    if ( v14 )
      v2 = (char *)v7 + *((_QWORD *)this + 46);
    *((_QWORD *)v7 + 38) = v2;
    result = 0LL;
    *a2 = (struct GameInputDeviceInfo *)v7;
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v6);
    return 2147942414LL;
  }
  return result;
}
