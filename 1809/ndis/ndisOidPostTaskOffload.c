/*
 * XREFs of ndisOidPostTaskOffload @ 0x1C0046E60
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidPostOffloadEncapsulation @ 0x1C0024210 (ndisOidPostOffloadEncapsulation.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 */

void __fastcall ndisOidPostTaskOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ebp
  int v7; // eax

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0xEBu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    v5 = *(_QWORD *)(v4 + 696);
    v6 = 0;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 88) == -67042815 )
      {
        ndisOidPostOffloadEncapsulation(a1);
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 696) + 88LL) == -67042815 )
        {
          *(_DWORD *)(v3 + 32) = -67042815;
          *(_QWORD *)(v3 + 40) = *(_QWORD *)(*(_QWORD *)(v4 + 696) + 96LL);
          *(_DWORD *)(v3 + 48) = *(_DWORD *)(*(_QWORD *)(v4 + 696) + 104LL);
          *(_DWORD *)(*(_QWORD *)(v4 + 696) + 88LL) = 0;
          *(_QWORD *)(*(_QWORD *)(v4 + 696) + 96LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v4 + 696) + 104LL) = 0;
        }
        v7 = *((_DWORD *)a1 + 10);
        if ( !v7 )
          v6 = *(_DWORD *)(v3 + 48);
        *(_DWORD *)(v3 + 52) = v6;
        *(_DWORD *)(v3 + 56) = v7 != 0 ? 0x90 : 0;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(0xECu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v4, v3, *((_DWORD *)a1 + 10));
}
