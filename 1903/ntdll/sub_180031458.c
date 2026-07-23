/*
 * XREFs of sub_180031458 @ 0x180031458
 * Callers:
 *     TpWaitForWait @ 0x18002F0B0 (TpWaitForWait.c)
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     sub_180084DC0 @ 0x180084DC0 (sub_180084DC0.c)
 * Callees:
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     ZwCancelWaitCompletionPacket @ 0x18009D930 (ZwCancelWaitCompletionPacket.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

char __fastcall sub_180031458(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v4; // r8d
  char v8; // si
  NTSTATUS v10; // eax
  __int64 v11; // r8
  char v12; // al
  char v13; // al

  v4 = a3 & 2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    v10 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), v4 != 0);
    if ( v10 )
    {
      if ( v10 != 259 && v10 != -1073741536 )
        sub_18010EFC8();
      v13 = *(_BYTE *)(a1 + 464);
      v8 = 0;
      if ( (v13 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 464) = v13 | 4;
        sub_180066BBC(a1 + 56, 1LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = 1;
      LOBYTE(v11) = 1;
      v12 = sub_18003257C(a1, a2, v11);
      *a4 = -1;
      if ( v12 )
        *a4 = -2;
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        sub_180066BBC(a1 + 56, 0xFFFFFFFFLL);
        *(_BYTE *)(a1 + 464) &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 464) &= 0xFCu;
  return v8;
}
