/*
 * XREFs of sub_180031544 @ 0x180031544
 * Callers:
 *     sub_180030390 @ 0x180030390 (sub_180030390.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 * Callees:
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009D890 (ZwAssociateWaitCompletionPacket.c)
 *     sub_18010EF18 @ 0x18010EF18 (sub_18010EF18.c)
 */

__int64 __fastcall sub_180031544(__int64 a1, void *a2, __int64 *a3)
{
  __int64 v3; // rbp
  NTSTATUS v7; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  BOOLEAN v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 360) = a2;
  v7 = ZwAssociateWaitCompletionPacket(
         *(HANDLE *)(a1 + 368),
         *(HANDLE *)(v3 + 64),
         a2,
         (PVOID)(a1 + 392),
         (PVOID)a1,
         0,
         0LL,
         &v13);
  if ( v7 < 0 )
  {
    *(_QWORD *)(a1 + 360) = 0LL;
    sub_18010EF18((unsigned int)v7, a2, a1);
    return 0LL;
  }
  else if ( !a3 || v13 )
  {
    return 1LL;
  }
  else
  {
    v9 = *a3;
    if ( *a3 >= 0 )
    {
      if ( v9 > MEMORY[0x7FFE0014] )
        v10 = v9 - MEMORY[0x7FFE0014];
      else
        v10 = 0LL;
    }
    else
    {
      v10 = -v9;
    }
    v11 = v10 >> 16;
    v12 = 300;
    if ( v11 <= 0x12C )
      v12 = v11;
    sub_1800326A0(a1, v3 + 112, a3, 0LL, v12);
    return 2LL;
  }
}
