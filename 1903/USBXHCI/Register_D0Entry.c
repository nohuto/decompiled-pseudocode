/*
 * XREFs of Register_D0Entry @ 0x1C002054C
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_D0Entry(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int Ulong; // eax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v2 + 352) & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    Ulong = XilRegister_ReadUlong(a1, v3 + 32912);
    XilRegister_WriteUlong(a1, v3 + 32912, Ulong & 0xFFFFEFFF);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v2 + 352) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = XilRegister_ReadUlong(a1, v5 + 32988);
    XilRegister_WriteUlong(a1, v5 + 32988, v6 & 0xFFFFFF7D);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_QWORD *)(v2 + 336) & 0x400000000000LL) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = XilRegister_ReadUlong(a1, v7 + 32916);
    XilRegister_WriteUlong(a1, v7 + 32916, v8 | 0x200000u);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v2 + 352) & 4) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = XilRegister_ReadUlong(a1, v9 + 16500);
    XilRegister_WriteUlong(a1, v9 + 16500, v10 | 0x8000u);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v2 + 352) & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = XilRegister_ReadUlong(a1, v11 + 16500);
    XilRegister_WriteUlong(a1, v11 + 16500, v12 & 0xFF7FFFFF);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_QWORD *)(v2 + 336) & 0x100000000000000LL) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 24) + 32932LL;
    v14 = XilRegister_ReadUlong(a1, v13);
    XilRegister_WriteUlong(a1, v13, v14 | 0x10000000u);
    KeStallExecutionProcessor(0x32u);
    v15 = XilRegister_ReadUlong(a1, v13);
    XilRegister_WriteUlong(a1, v13, v15 & 0xEFFFFFFF);
  }
  return 0LL;
}
