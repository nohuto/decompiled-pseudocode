/*
 * XREFs of sub_1800094BC @ 0x1800094BC
 * Callers:
 *     sub_1800093C4 @ 0x1800093C4 (sub_1800093C4.c)
 *     sub_1800FFA38 @ 0x1800FFA38 (sub_1800FFA38.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     sub_1800095D4 @ 0x1800095D4 (sub_1800095D4.c)
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     sub_180016554 @ 0x180016554 (sub_180016554.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800094BC(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v5; // r15d
  WCHAR *v6; // r14
  unsigned __int8 v7; // si
  WCHAR *v8; // rax
  NTSTATUS v9; // edi
  int v10; // r9d
  _UNICODE_STRING ParentLocaleName; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 v13; // [rsp+70h] [rbp+30h] BYREF
  __int16 v14; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v13 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  if ( a1 && a2 )
  {
    v8 = (WCHAR *)sub_180016554(a1, 85LL);
    v6 = v8;
    if ( !v8 )
    {
      v9 = -1073741801;
LABEL_17:
      *(_WORD *)(a2 + 10) = 0;
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      return (unsigned int)v9;
    }
    ParentLocaleName.Buffer = v8;
    *(_DWORD *)&ParentLocaleName.Length = 11141120;
    v9 = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
    if ( v9 >= 0 )
    {
      v9 = sub_1800095D4(v5, ParentLocaleName.Buffer, (unsigned int)&v13, v10, (__int64)&v14);
      if ( v9 < 0 )
      {
        v7 = 0;
        v13 = 0;
        v14 = 0;
      }
      else
      {
        v7 = v13;
      }
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v6 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    v7 = v13;
  }
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !v7 )
  {
    v9 = -1073741823;
    goto LABEL_17;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v7 << 14;
  *(_WORD *)(a2 + 10) = v14;
  return (unsigned int)v9;
}
