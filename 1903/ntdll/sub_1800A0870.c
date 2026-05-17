/*
 * XREFs of sub_1800A0870 @ 0x1800A0870
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 * Callees:
 *     sub_180073E80 @ 0x180073E80 (sub_180073E80.c)
 */

unsigned __int64 __fastcall sub_1800A0870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 result; // rax
  __int64 v17; // [rsp+28h] [rbp-10h]
  unsigned int v18; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v20; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 120) = v4;
  *(_QWORD *)(a1 + 128) = a1;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 184) = a3;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 200) = v9;
  *(_QWORD *)(a1 + 208) = v10;
  _fxsave((void *)(a1 + 256));
  *(_WORD *)(a1 + 56) = __CS__;
  *(_WORD *)(a1 + 58) = __DS__;
  *(_WORD *)(a1 + 60) = __ES__;
  *(_WORD *)(a1 + 66) = __SS__;
  *(_WORD *)(a1 + 62) = __FS__;
  *(_WORD *)(a1 + 64) = __GS__;
  *(_QWORD *)(a1 + 144) = v5;
  *(_QWORD *)(a1 + 160) = v6;
  *(_QWORD *)(a1 + 168) = v8;
  *(_QWORD *)(a1 + 176) = v7;
  *(_QWORD *)(a1 + 216) = v11;
  *(_QWORD *)(a1 + 224) = v12;
  *(_QWORD *)(a1 + 232) = v13;
  *(_QWORD *)(a1 + 240) = v14;
  *(_DWORD *)(a1 + 52) = _mm_getcsr();
  *(_QWORD *)(a1 + 152) = &v20;
  *(_QWORD *)(a1 + 248) = retaddr;
  result = v18;
  *(_DWORD *)(a1 + 68) = v18;
  *(_DWORD *)(a1 + 48) &= 0x100040u;
  if ( *(_DWORD *)(a1 + 48) == 1048640 )
  {
    __asm { rdsspq  rdx }
    if ( _RDX )
      _RDX += 8LL;
    result = (unsigned __int64)sub_180073E80(v17, _RDX);
    a1 = v17;
  }
  *(_DWORD *)(a1 + 48) |= 0x10000Fu;
  return result;
}
