/*
 * XREFs of ndisOidPostTcpConnectionOffloadParameters @ 0x1C0046F90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostTcpConnectionOffloadParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  size_t v4; // rsi
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rax
  unsigned int v8; // eax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xFAu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 && !*(_DWORD *)(a1 + 40) )
  {
    v4 = 60LL;
    if ( *(_QWORD *)a1 )
    {
      v5 = *(_DWORD *)(v3 + 52);
      if ( v5 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        v6 = 60LL;
        if ( v5 <= 0x3C )
          v6 = v5;
        memmove((void *)(*(_QWORD *)(v1 + 4128) + 992LL), *(const void **)(v3 + 40), v6);
      }
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v1 = *(_QWORD *)(v7 + 16);
      v8 = *(_DWORD *)(v3 + 52);
      if ( v8 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        if ( v8 <= 0x3C )
          v4 = v8;
        memmove((void *)(*(_QWORD *)(v1 + 4128) + 932LL), *(const void **)(v3 + 40), v4);
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0xFBu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, *(_DWORD *)(a1 + 40));
}
